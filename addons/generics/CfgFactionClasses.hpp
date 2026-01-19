class CfgFactionClasses {
    @For(Identities)
        class CLASS($1) {
            SCOPE_DLC;
            #if "$1" == "DalRiada"
            displayName = "(C) Dal Riada";
            #else
            displayName = "(C) $1";
            #endif
            priority = 1;
            side = 3; // Civilian
        };
    @EndFor
};
