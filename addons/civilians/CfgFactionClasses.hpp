class CfgFactionClasses {
    @For(["Virelia", "Calvane", "Serroise", "Drovak", "Livonia"])
        class CLASS($1) {
            SCOPE_DLC;
            displayName = "[C] $1 (Civilians)";
            priority = 1;
            side = 3; // Civilian
        };
    @EndFor
};
