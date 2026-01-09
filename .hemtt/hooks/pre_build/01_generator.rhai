// Add HEMTT_VFS to global::
const HEMTT_VFS = HEMTT_VFS;

fn is_config(file) {
    let ext = file.file_ext();
    ext == "hpp" || ext == "cpp"
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

fn load_json(filename) {
    return parse_json(global::HEMTT_VFS.join("generator/" + filename + ".json").open_file().read());
}

fn parse_json_array(json_str) {
    // Manually parse a JSON array like ["item1", "item2", "item3"]
    let result = [];
    let in_string = false;
    let current = "";
    let i = 0;
    
    // Skip opening [
    while i < json_str.len() && json_str[i] != '[' {
        i += 1;
    }
    i += 1;
    
    while i < json_str.len() {
        let char = json_str[i];
        
        if char == '"' {
            if in_string {
                // End of string
                result.push(current);
                current = "";
                in_string = false;
            } else {
                // Start of string
                in_string = true;
            }
        } else if in_string {
            current += char;
        } else if char == ']' {
            break;
        }
        
        i += 1;
    }
    
    return result;
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

fn string_list(name, value) {
    let ret = "Synixe_" + name + "[] = {";
    for item in value {
        ret += "\"" + item + "\",";
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
        for pack in value.packs {
            if !(pack in global::PACKS) {
                fatal("Unknown pack: " + pack);
            }
        }
        ret += string_list(name + "Packs", value.packs) + "\n";
    }

    return ret;
}

fn weapon(name, value) {
    let ret = "";
    if "weapons" in value {
        ret = "Synixe_" + name + "[] = {";
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
    }

    for attachment in ["Optics", "Muzzles", "Bipods", "Pointers"] {
        let key = to_lower(attachment);
        if key in value {
            ret += probability_list(name + attachment, value[key]) + "\n";
        }
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
    let ret = "Synixe_assignedItems[] = {";
    for key in ["map", "gps", "radio", "compass", "watch", "nvg"] {
        if key in value {
            items[key] = value[key];
        }
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
    let match_type = type;
    if type.ends_with("_OPFOR") || type.ends_with("_BLUFOR") || type.ends_with("_INDEP") || type.ends_with("_CIV") {
        // remove side suffix
        let parts = type.split("_");
        match_type = "";
        for i in 0..parts.len() - 1 {
            if i > 0 {
                match_type += "_";
            }
            match_type += parts[i];
        }
    }
    let faction = to_lower(tier) + "_" + to_lower(side);
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
    if to_lower(match_type) == "special_forces" {
        ret += "name = \"Special Forces\";\n";
    } else {
        let parts = match_type.split("_");
        if parts.len() == 2 {
            ret += "name = \"" + parts[0] + " (" + parts[1] + ")\";\n";
        } else {
            ret += "name = \"" + match_type + "\";\n";
        }
    }
    let tier_file = to_lower(tier);
    if tier_file == "t2" || tier_file == "t3" {
        tier_file = "t2t3";
    }
    let group_source = load_json("groups/" + tier_file);
    for section in group_source.groups {
        if match_type in section.types {
            for group in section.groups {
                ret += "class CLASS(" + group.class + ")";
                if "parent" in group {
                    ret += ": CLASS(" + group.parent + ")";
                }
                ret += " {\n";
                ret += "scope = 2;\n";
                ret += "scopeCurator = 2;\n";
                ret += "side = " + side + ";\n";
                ret += "faction = QPCLASS(" + faction + ");\n";
                ret += "icon = \"" + section.icon + "\";\n";
                ret += "name = \"" + group.name + "\";\n";
                ret += "__COUNTER_RESET__\n";
                for unit in group.units {
                    ret += "GROUP_UNIT(CLASS(" + type + "_" + unit + ")," + side + ");\n";
                }
                ret += "};\n";
            }
        }
    }
    ret += "};\n";
    return ret;
}

fn names(args) {
    if args.len() != 1 {
        fatal("Names macro requires exactly 1 argument");
    }
    let nationality = args[0];
    let names_source = load_json("names/" + to_lower(nationality));
    let ret = "class " + nationality + "{\nclass FirstNames {\n";
    let i = 0;
    for first_name in names_source.first_names {
        ret += "name" + i + " = \"" + first_name + "\";\n";
        i += 1;
    }
    ret += "};\n";
    ret += "class LastNames {\n";
    let i = 0;
    for last_name in names_source.last_names {
        ret += "name" + i + " = \"" + last_name + "\";\n";
        i += 1;
    }
    ret += "};};\n";
    return ret;
}

fn overlay_properties(base, file, key) {
    let overlay = load_json(file);
    if !(key in overlay) {
        fatal("Key not found in " + file + ": " + key);
    }
    overlay = overlay[key];
    for key in overlay.keys() {
        base[key] = overlay[key];
    }
    let ret = "";
    for key in base.keys() {
        let value = base[key];
        switch type_of(value) {
            "array" => {
                key = key + "[]";
                let arr = value;
                let arr_str = "{";
                for item in arr {
                    arr_str += "\"" + item + "\",";
                }
                arr_str += "}";
                value = arr_str;
            }
            "string" => {
                value = "\"" + value + "\"";
            }
            _ => {}
        }
        ret += key + " = " + value + ";";
    }
    return ret;
}

fn replace_placeholder(text, value) {
    let result = "";
    let i = 0;
    while i < text.len() {
        if text[i] == "$" && i + 1 < text.len() && text[i + 1] == "1" {
            result += value;
            i += 2;
        } else {
            result += text[i];
            i += 1;
        }
    }
    return result;
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
    } else if line[args_start] == "[" {
        let json_end = line.index_of(")");
        if json_end == -1 {
            fatal("Macro does not have closing parenthesis: " + line);
        }
        let raw_json = line.sub_string(args_start, json_end - args_start);
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
            let properties = #{
                scope: 2,
                scopeCurator: 2,
                role: "Rifleman",
                displayName: "Unknown",
                icon: "iconMan",
            };
            return overlay_properties(properties, "roles", args[0]);
        }
        "Identity" => {
            if args.len() != 1 {
                fatal("Identity macro requires exactly 1 argument");
            }
            let properties = #{
                identityTypes: ["HEAD_NATO","LanguageENG_F"],
                genericNames: "American",
            };
            return overlay_properties(properties, "identities", args[0]);
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
        "Names" => {
            return names(args);
        }
        "For" => {
            // This should not be called directly, handled in process_lines
            fatal("@For must be paired with @EndFor");
        }
        _ => {
            fatal("Unknown macro name: " + name);
        }
    }
}

fn process_lines(lines, start_index) {
    let replacement = "";
    let index = start_index;
    
    while index < lines.len() {
        let line = lines[index];
        line.trim();
        
        if line.starts_with("@For") {
            // Parse the @For arguments
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
            
            // Extract array from @For([...])
            let args_start = macro_text.index_of('(') + 1;
            let args_end = macro_text.index_of(')');
            let raw_json = macro_text.sub_string(args_start, args_end - args_start);
            let items = [];
            if raw_json == "Identities" {
                items = load_json("identities").keys();
            } else {
                items = parse_json_array(raw_json);
            }
            
            // Find @EndFor
            let for_body_start = line_index + 1;
            let for_body_end = for_body_start;
            while for_body_end < lines.len() {
                let check_line = lines[for_body_end];
                check_line.trim();
                if check_line.starts_with("@EndFor") {
                    break;
                }
                for_body_end += 1;
            }
            
            if for_body_end >= lines.len() {
                fatal("@For without matching @EndFor");
            }
            
            // Extract body lines
            let body_lines = [];
            for i in for_body_start..for_body_end {
                body_lines.push(lines[i]);
            }
            
            // Process body for each item
            for item in items {
                for body_line in body_lines {
                    let processed_line = replace_placeholder(body_line, item);
                    
                    // Check if line contains a macro
                    processed_line.trim();
                    if processed_line.starts_with("@") {
                        // Parse and expand the macro
                        let depth = 0;
                        let macro_text = processed_line;
                        for char in macro_text.chars() {
                            if char == '(' {
                                depth += 1;
                            } else if char == ')' {
                                depth -= 1;
                            }
                        }
                        if depth == 0 {
                            replacement += parse_macro(macro_text) + "\n";
                        } else {
                            fatal("Malformed macro in @For body: " + macro_text);
                        }
                    } else {
                        replacement += processed_line + "\n";
                    }
                }
            }
            
            index = for_body_end;
        } else if line.starts_with("@") {
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
            index = line_index;
        } else {
            replacement += line + "\n";
        }
        index += 1;
    }
    
    return replacement;
}

const PACKS = load_json("packs");

let addons = HEMTT_VFS.join("addons").list();
for addon in addons {
    if !addon.is_dir() {
        continue;
    }
    let files = get_config(addon);
    for file in files {
        let content = file.open_file().read();
        let lines = content.split("\n");
        
        // Check if file needs processing
        let touched = false;
        for line in lines {
            line.trim();
            if line.starts_with("@") {
                touched = true;
                break;
            }
        }
        
        if touched {
            let replacement = process_lines(lines, 0);
            debug("Writing modified file: " + file);
            file.create_file().write(replacement);
            // if addon.file_name() == "civilians" {
            //     HEMTT_RFS.join("debug").join(file.file_name()).create_file().write(replacement);
            // }
        }
    }
}
