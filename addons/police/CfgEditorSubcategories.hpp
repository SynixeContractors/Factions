class CfgEditorSubcategories {
    @For(Identities)
        class CLASS($1_Patrol) {
            displayName = "Men (Patrol, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_SWAT) {
            displayName = "Men (SWAT, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_Gendarmerie) {
            displayName = "Men (Gendarmerie, $2)";
            GCLASS(identity) = "$1";
        };
    @EndFor
    @For(Identities)
        class CLASS($1_Patrol_vehicles) {
            displayName = "Vehicles (Patrol, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_SWAT_vehicles) {
            displayName = "Vehicles (SWAT, $2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_Gendarmerie_vehicles) {
            displayName = "Vehicles (Gendarmerie, $2)";
            GCLASS(identity) = "$1";
        };
    @EndFor
};
