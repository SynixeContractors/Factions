class CfgFactionClasses {
    @For(Identities)
        class CLASS($1) {
            SCOPE_DLC;
            displayName = "[C] $2 (Civilians)";
            priority = 1;
            side = 3; // Civilian
        };
    @EndFor
};
