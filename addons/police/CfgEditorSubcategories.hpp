class CfgEditorSubcategories {
    @For(Identities)
        class CLASS($1_Patrol) {
            SCOPE_DLC;
            displayName = "Men (Patrol, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_SWAT) {
            SCOPE_DLC;
            displayName = "Men (SWAT, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_Gendarmerie) {
            SCOPE_DLC;
            displayName = "Men (Gendarmerie, $2)";
            GCLASS(identity) = "$1";
        };
    @EndFor
    @For(Identities)
        class CLASS($1_Patrol_vehicles) {
            SCOPE_DLC;
            displayName = "Vehicles (Patrol, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_SWAT_vehicles) {
            SCOPE_DLC;
            displayName = "Vehicles (SWAT, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_Gendarmerie_vehicles) {
            SCOPE_DLC;
            displayName = "Vehicles (Gendarmerie, $2)";
            GCLASS(identity) = "$1";
        };
    @EndFor
};
