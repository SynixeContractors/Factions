class CfgFactionClasses {
    @For(Identities)
        class CLASS($1) {
            SCOPE_DLC;
            #if "$1" == "DalRiada"
            displayName = "|C| Dal Riada Generics";
            #else
            displayName = "|C| $1 Generics";
            #endif
            priority = 1;
            side = 3; // Civilian
        };
    @EndFor
};
