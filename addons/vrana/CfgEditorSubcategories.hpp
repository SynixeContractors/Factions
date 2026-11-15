class CfgEditorSubcategories {
    @For(Identities)
        class CLASS($1_Men) {
            displayName = "Men ($2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_Cars) {
            displayName = "Cars ($2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_Helicopters) {
            displayName = "Helicopters ($2)";
            GCLASS(identity) = "$1";
        };
    @EndFor
};
