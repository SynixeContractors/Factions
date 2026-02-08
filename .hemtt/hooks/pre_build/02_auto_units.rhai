fn is_vehicle_config(file) {
    file.file_ext() == "hpp" && file.file_name().starts_with("CfgVehicles");
}

fn get_vehicle_configs(folder) {
    let children = [];
    let files = folder.list();
    for file in files {
        if is_vehicle_config(file) {
            children.push(file);
        }
    }
    return children;
}

let ignore = ["police","civilians","main"];

let addons = HEMTT_VFS.join("addons").list();
for addon in addons {
    if ignore.contains(addon.file_name()) {
        continue;
    }
    if !addon.is_dir() {
        continue;
    }
    let to_process = [addon];
    let subaddons = addon.list();
    for subaddon in subaddons {
        if !subaddon.is_dir() {
            continue;
        }
        to_process.push(subaddon);
    }
    for folder in to_process {
        let configs = get_vehicle_configs(folder);
        let classes = [];
        for config in configs {
            let content = config.open_file().read();
            let lines = content.split("\n");
            for line in lines {
                line.trim();
                if line.starts_with("class CLASS") || (line.starts_with("class GCLASS(") && addon.file_name() == "base_vehicles") {
                    let parts = line.split("(");
                    if parts.len() >= 2 {
                        let class_part = parts[1];
                        let class_name = class_part.split(")").get(0);
                        if class_name != "Base" {
                            classes.push(class_name);
                        }
                    }
                }
                if line.starts_with("#include ") {
                    let path = line;
                    path.replace("#include ","");
                    path.replace("\"","");
                    path.replace("\\", "/");
                    let include_file = config.parent().join(path);
                    if include_file.exists() {
                        let include_content = include_file.open_file().read();
                        let include_lines = include_content.split("\n");
                        for include_line in include_lines {
                            include_line.trim();
                            if include_line.starts_with("class CLASS") {
                                let parts = include_line.split("(");
                                if parts.len() >= 2 {
                                    let class_part = parts[1];
                                    let class_name = class_part.split(")").get(0);
                                    if class_name != "Base" {
                                        classes.push(class_name);
                                    }
                                }
                            }
                        }
                    } else {
                        fatal("Included file " + path + " not found, skipping...");
                    }
                }
            }
        }
        if classes.len() == 0 {
            debug("No vehicle classes found in " + folder + ", skipping...");
            continue;
        }
        let config = folder.join("config.cpp");
        if config.exists() {
            let content = config.open_file().read();
            let new_lines = [];
            for line in content.split("\n") {
                let trimmed = line;
                trimmed.trim();
                if trimmed == "units[] = {};" {
                    new_lines.push("    units[] = {");
                    for class_name in classes {
                        if addon.file_name() == "base_vehicles" {
                            new_lines.push("        QGCLASS(" + class_name + "),");
                        } else {
                            if class_name.contains(",") {
                                if class_name.starts_with("SIDE,") {
                                    for side in ["BLUFOR","OPFOR","INDEP"] {
                                        let actual_class = class_name;
                                        actual_class.replace("SIDE,", side + ",");
                                        new_lines.push("        QCLASS2(" + actual_class + "),");
                                    }
                                } else {
                                    new_lines.push("        QCLASS2(" + class_name + "),");
                                }
                            } else {
                                new_lines.push("        QCLASS(" + class_name + "),");
                            }
                        }
                    }
                    new_lines.push("    };");
                } else {
                    new_lines.push(line);
                }
            }
            let new_content = "";
            for new_line in new_lines {
                new_content += new_line + "\n";
            }
            config.create_file().write(new_content);
            // let parent = HEMTT_RFS.join("auto_units").join(addon.file_name());
            // parent.create_dir_all();
            // parent.join("config.cpp").create_file().write(new_content);
        }
    }
}
