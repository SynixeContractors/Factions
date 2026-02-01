class CfgEditorSubcategories {
    @For(Identities)
        class CLASS($1) {
            SCOPE_DLC;
            #if "$1" == "DalRiada"
            displayName = "Men (Dal Riada)";
            #else
            displayName = "Men ($1)";
            #endif
        };
    @EndFor
    @For(Identities)
        class CLASS($1_vehicles) {
            SCOPE_DLC;
            #if "$1" == "DalRiada"
            displayName = "Vehicles (Dal Riada)";
            #else
            displayName = "Vehicles ($1)";
            #endif
        };
    @EndFor
};
