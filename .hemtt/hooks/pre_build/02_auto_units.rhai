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

let ignore = ["civilians","main"];

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
                if line.starts_with("class CLASS(")  || (line.starts_with("class GCLASS(") && addon.file_name() == "base_vehicles") {
                    let parts = line.split("(");
                    if parts.len() >= 2 {
                        let class_part = parts[1];
                        let class_name = class_part.split(")").get(0);
                        if class_name != "Base" {
                            classes.push(class_name);
                        }
                    }
                }
            }
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
                            new_lines.push("        QCLASS(" + class_name + "),");
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
        } else {
            print("   No config.cpp found in " + folder.file_name() + ", skipping.");
        }
    }
}
