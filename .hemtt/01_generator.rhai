let addons = HEMTT_VFS.join("addons").list();
HEMTT_RFS.join("debug_generator").create_dir();
for addon in addons {
    if !addon.is_dir() {
        continue;
    }
    let config = addon.join("config.cpp");
    if !config.exists() {
        continue;
    }
    let content = config.open_file().read();
    print("Processing " + config);
    HEMTT_RFS.join("debug_generator").join(addon.file_name()+".cpp").create_file().write(content);
}
