class CfgFactionClasses {
    @For(["Virelia", "Calvane", "DalRiada", "Drovak", "Livonia", "Ngabiri"])
        class CLASS($1) {
            SCOPE_DLC;
            #if "$1" == "DalRiada"
            displayName = "[C] Dal Riada (Civilians)";
            #else
            displayName = "[C] $1 (Civilians)";
            #endif
            priority = 1;
            side = 3; // Civilian
        };
    @EndFor
};
