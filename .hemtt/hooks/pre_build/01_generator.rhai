fn is_config(file) {
    // Replace with future HEMTT
    // file.file_ext() == "hpp" || file.file_ext() == "cpp"
    let ext = file.file_name().split(".");
    if ext.len() < 2 {
        return false;
    }
    let ext = ext[ext.len() - 1];
    return ext == "hpp" || ext == "cpp";
}

fn get_config(folder) {
    let children = [];
    let files = folder.list();
    for file in files {
        if file.is_dir() {
            children.append(get_config(file));
        } else {
            if is_config(file) {
                children.push(file);
            }
        }
    }
    return children;
}

fn strip_comments(line) {
    let in_string = false;
    let prev_char = "";
    let index = 0;
    while index < line.len() {
        let char = line[index];
        if char == '"' && prev_char != "\\" {
            in_string = !in_string;
        }
        if !in_string {
            if char == "/" && index + 1 < line.len() && line[index + 1] == "/" {
                let line = line.sub_string(0, index);
                line.trim();
                return line;
            }
        }
        prev_char = char;
        index += 1;
    }
    line.trim();
    return line;
}

fn probability_list(name, value) {
    let ret = "Synixe_" + name + "[] = {";
    for key in value.keys() {
        let v = value[key];
        ret += "\"" + key + "\"," + v + ",";
    }
    ret += "};";
    return ret;
}

fn quantity_list(name, value) {
    let ret = "Synixe_" + name + "[] = {";
    for key in value.keys() {
        let v = value[key];
        ret += "{\"" + key + "\"," + v + "},";
    }
    ret += "};";
    return ret;
}

fn container(name, value) {
    // Variants
    let ret = "Synixe_" + name + "[] = {";
    if "variants" in value {
        let variants = value.variants;
        for v in variants.keys() {
            let probability = variants[v];
            ret += "\"" + v + "\"," + probability + ",";
        }
    } else {
        fatal(name + " macro requires variants argument");
    }
    ret += "};\n";

    if "items" in value {
        ret += quantity_list(name + "Items", value.items) + "\n";
    }

    if "magazines" in value {
        ret += quantity_list(name + "Magazines", value.magazines) + "\n";
    }

    if "packs" in value {
        ret += "Synixe_" + name + "Packs[] = {";
        for pack in value.packs {
            ret += "\"" + pack + "\",";
        }
        ret += "};\n";
    }

    return ret;
}

fn weapon(name, value) {
    let ret = "Synixe_" + name + "[] = {";
    for weapon in value.weapons.keys() {
        let data = value.weapons[weapon];
        if type_of(data) == "map" {
            let probability = 1;
            if "probability" in data {
                probability = data.probability;
            }
            ret += "{\"" + weapon + "\"," + probability + ",{";
            for container in ["magazinesUniform", "magazinesVest", "magazinesBackpack"] {
                if container in data {
                    ret += "{";
                    let mags = data[container];
                    for mag in mags.keys() {
                        let qty = mags[mag];
                        ret += "{\"" + mag + "\"," + qty + "},";
                    }
                    ret += "},";
                } else {
                    ret += "{},";
                }
            }
            for magazine in ["loadedPrimary", "loadedSecondary"] {
                if magazine in data {
                    let mag = data[magazine];
                    ret += "\"" + mag + "\",";
                } else {
                    ret += "\"\",";
                }
            }
            ret += "},";
        } else {
            ret += "{\"" + weapon + "\"," + data;
        }
        ret += "},";
    }
    ret += "};\n";

    if "optics" in value {
        ret += probability_list(name + "Optics", value.optics) + "\n";
    }
    if "muzzles" in value {
        ret += probability_list(name + "Muzzles", value.muzzles) + "\n";
    }
    if "bipods" in value {
        ret += probability_list(name + "Bipods", value.bipods) + "\n";
    }
    if "pointers" in value {
        ret += probability_list(name + "Pointers", value.pointers) + "\n";
    }
    return ret;
}

fn assigned(value) {
    let items = #{
        map: "ItemMap",
        compass: "ItemCompass",
        watch: "ItemWatch",
        radio: "",
        gps: "",
        nvg: "",
    };
    let preset = "Default";
    if type_of(value) == "array" {
        preset = value[0];
    } else if "preset" in value {
        preset = value.preset;
    }
    switch preset {
        "Default" => {}
        "Civilian" => {
            items.gps = "ItemSmartPhone";
        }
        "Military" => {
            items.radio = "ItemRadio";
            items.gps = "ItemGPS";
        }
        _ => {
            fatal("Unknown assigned preset: " + preset);
        }
    }
    if "map" in value {
        items.map = value.map;
    }
    if "compass" in value {
        items.compass = value.compass;
    }
    if "watch" in value {
        items.watch = value.watch;
    }
    if "radio" in value {
        items.radio = value.radio;
    }
    if "gps" in value {
        items.gps = value.gps;
    }
    if "nvg" in value {
        items.nvg = value.nvg;
    }
    let ret = "Synixe_assignedItems[] = {";
    for key in ["map", "gps", "radio", "compass", "watch", "nvg"] {
        let v = items[key];
        ret += "\"" + v + "\",";
    }
    ret += "};\n";

    return ret;
}

fn groups(args) {
    if args.len() != 3 {
        fatal("Groups macro requires exactly 3 arguments");
    }
    let tier = args[0];
    let side = args[1];
    let type = args[2];
    let faction = to_lower(tier) + "_" + to_lower(side);
    print("Generating groups for " + tier + " " + side + " " + type + ", faction: " + faction);
    let side = switch side {
        "BLUFOR" => 1,
        "OPFOR" => 0,
        "INDEP" => 2,
        "CIV" => 3,
        _ => {
            fatal("Unknown side: " + side);
        }
    };
    let id = tier + "_" + type;
    let ret = "class CLASS(" + id + ") {\n";
    let parts = type.split("_");
    if parts.len() == 2 {
        ret += "name = \"" + parts[0] + " (" + parts[1] + ")\";\n";
    } else {
        ret += "name = \"" + type + "\";\n";
    }
    make_lower(type);
    switch id {
        "T2_Army_Combat" | "T2_Army_Garrison" => {
            ret += `class CLASS(Patrol) {
            name = "Patrol";
            side = ` + side + `;
            faction = "` + faction + `";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
        };
        class CLASS(Fireteam): CLASS(Patrol) {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
            GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            GROUP_UNIT(CLASS(`+type+`_Autorifleman),0);
        };`;
        if id == "T2_Army_Combat" {
            ret += `class CLASS(Squad): CLASS(Fireteam) {
                name = "Squad";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_SquadLeader),0);
                GROUP_UNIT(CLASS(`+type+`_RadioOperator),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Medic),0);
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_Marksman),0);
                GROUP_UNIT(CLASS(`+type+`_Autorifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            };`;
            ret += `class CLASS(Squadstub): CLASS(Fireteam) {
                name = "Squad (Stub)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_SquadLeader),0);
                GROUP_UNIT(CLASS(`+type+`_RadioOperator),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Medic),0);
            };class CLASS(FireteamAT): CLASS(Fireteam) {
                name = "Fireteam (AT)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_RiflemanMAT),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            };`;
            ret += `class CLASS(FireteamAA): CLASS(Fireteam) {
                name = "Fireteam (AA)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_RiflemanAA),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            };class CLASS(FireteamHAT): CLASS(Fireteam) {
                name = "Fireteam (HAT)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_RiflemanHAT),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
            };`;
            ret+=`class CLASS(FireteamMachinegunner): CLASS(Fireteam) {
                name = "Fireteam (Machinegunner)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Machinegunner),0);
                GROUP_UNIT(CLASS(`+type+`_AsstMachinegunner),0);
            };class CLASS(FireteamEngineer): CLASS(Fireteam) {
                name = "Fireteam (Engineer)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Engineer),0);
                GROUP_UNIT(CLASS(`+type+`_Engineer),0);
            };`;
            ret+=`class CLASS(FireteamDemolitions): CLASS(Fireteam) {
                name = "Fireteam (Demolitions)";
                __COUNTER_RESET__
                GROUP_UNIT(CLASS(`+type+`_TeamLeader),0);
                GROUP_UNIT(CLASS(`+type+`_Rifleman),0);
                GROUP_UNIT(CLASS(`+type+`_Demolitions),0);
                GROUP_UNIT(CLASS(`+type+`_Demolitions),0);
            };`;
            }
        }
    };
    ret += "};\n";
    return ret;
}

fn parse_macro(line) {
    if !line.starts_with("@") {
        fatal("Line does not start with @: " + line);
    }

    let name_end = line.index_of('(');
    if name_end == -1 {
        fatal("Macro does not have parentheses: " + line);
    }
    let name = line.sub_string(1, name_end - 1);
    name.trim();
    debug("Macro name: " + name);

    let args_start = name_end + 1;

    let args = [];
    if line[args_start] == "{" {
        let json_end = line.index_of("});");
        if json_end == -1 {
            fatal("Macro does not have closing json brace: " + line);
        }
        let raw_json = line.sub_string(args_start, json_end - args_start + 1);
        args = parse_json(raw_json);
    } else {
        let args_end = line.index_of(')', args_start);
        if args_end == -1 {
            fatal("Macro does not have closing parenthesis: " + line);
        }

        let raw_args = line.sub_string(args_start, args_end - args_start);
        let split_args = raw_args.split(",");

        for a in split_args {
            a.trim();
            if a != "" {
                args.push(a);
            }
        }
    }

    debug("Macro args: " + args);

    let ret = "";

    switch name {
        "Templated" => {
            if args.len() != 0 {
                fatal("Templated macro requires no arguments");
            }
            ret = 
`
weapons[] = {"Throw","Put"};
respawnWeapons[] = {"Throw","Put"};
magazines[] = {};
respawnMagazines[] = {};
headgearList[] = {};
linkedItems[] = {};
respawnLinkedItems[] = {};
`;
            return ret;
        }
        "Role" => {
            if args.len() != 1 {
                fatal("Role macro requires exactly 1 argument");
            }
            let role_name = args[0];
            let properties = #{
                scope: 2,
                scopeCurator: 2,
                role: "Rifleman",
                displayName: "Unknown",
                icon: "iconMan",
            };
            let overlay = switch role_name {
                "Rifleman" => #{
                    displayName: "Rifleman",
                },
                "RiflemanMAT" => #{
                    displayName: "Rifleman (MAT)",
                    icon: "iconManAT",
                    role: "MissileSpecialist",
                },
                "RiflemanAA" => #{
                    displayName: "Missile Specialist (AA)",
                    icon: "iconManAT",
                    role: "MissileSpecialist",
                },
                "RiflemanHAT" => #{
                    displayName: "Missile Specialist (AT)",
                    icon: "iconManAT",
                    role: "MissileSpecialist",
                },
                "RadioOperator" => #{
                    displayName: "Radio Operator",
                },
                "SquadLeader" => #{
                    displayName: "Squad Leader",
                },
                "TeamLeader" => #{
                    displayName: "Team Leader",
                },
                "Demolitions" => #{
                    displayName: "Demolitions",
                    icon: "iconManEngineer",
                    role: "Sapper",
                    engineer: 1,
                    canDeactivateMines: 1,
                },
                "Engineer" => #{
                    displayName: "Engineer",
                    icon: "iconManEngineer",
                    role: "Sapper",
                    engineer: 1,
                    canDeactivateMines: 1,
                },
                "Maintainer" => #{
                    displayName: "Maintainer",
                    icon: "iconManEngineer",
                    role: "Sapper",
                    engineer: 1,
                },
                "Worker" => #{
                    displayName: "Worker",
                },
                "Crewman" => #{
                    displayName: "Crewman",
                },
                "HeliPilot" => #{
                    displayName: "Helicopter Pilot",
                },
                "Autorifleman" => #{
                    displayName: "Autorifleman",
                    icon: "iconManMG",
                    role: "MachineGunner",
                },
                "Machinegunner" => #{
                    displayName: "Machinegunner",
                    icon: "iconManMG",
                    role: "MachineGunner",
                },
                "AsstMachinegunner" => #{
                    displayName: "Asst. Machinegunner",
                },
                "Marksman" => #{
                    displayName: "Marksman",
                    icon: "iconManRecon",
                    role: "Marksman",
                },
                "Medic" => #{
                    displayName: "Medic",
                    icon: "iconManMedic",
                    role: "Combat Life Saver",
                    attendant: 1,
                },
                _ => {
                    fatal("Unknown role name: " + role_name);
                }
            };
            for key in overlay.keys() {
                properties[key] = overlay[key];
            }
            for key in properties.keys() {
                ret += key + " = \"" + properties[key] + "\";";
            }
            debug("Generated Role config: " + ret);
            return ret;
        }
        "Uniforms" => {
            return container("uniform", args);
        }
        "Vests" => {
            return container("vest", args);
        }
        "Backpacks" => {
            return container("backpack", args);
        }
        "Primary" => {
            return weapon("primary", args);
        }
        "Secondary" => {
            return weapon("secondary", args);
        }
        "Launchers" => {
            return weapon("launcher", args);
        }
        "Binoculars" => {
            return weapon("binocular", args);
        }
        "Headgear" => {
            return probability_list("headgear", args);
        }
        "Facewear" => {
            return probability_list("facewear", args);
        }
        "Assigned" => {
            return assigned(args);
        }
        "Groups" => {
            return groups(args);
        }
        _ => {
            fatal("Unknown macro name: " + name);
        }
    }
}

let addons = HEMTT_VFS.join("addons").list();
for addon in addons {
    if !addon.is_dir() {
        continue;
    }
    let files = get_config(addon);
    for file in files {
        let touched = false;
        let replacement = "";
        let content = file.open_file().read();
        let lines = content.split("\n");
        let index = 0;
        while index < lines.len() {
            let line = lines[index];
            line.trim();
            if line.starts_with("@") {
                let depth = 0;
                let macro_text = "";
                let line_index = index;
                while line_index < lines.len() {
                    let macro_line = lines[line_index];
                    let macro_line = strip_comments(macro_line);
                    macro_line.trim();
                    macro_text += macro_line;
                    for char in macro_line.chars() {
                        if char == '(' {
                            depth += 1;
                        } else if char == ')' {
                            depth -= 1;
                        }
                    }
                    if depth == 0 {
                        break;
                    }
                    line_index += 1;
                }
                replacement += parse_macro(macro_text) + "\n";
                touched = true;
                index = line_index;
            } else {
                replacement += line + "\n";
            }
            index += 1;
        }
        if touched {
            debug("Writing modified file: " + file);
            if file.to_string().ends_with("CfgGroups.hpp") {
                print("Modified file: " + replacement);
            }
            file.create_file().write(replacement);
        }
    }
}
