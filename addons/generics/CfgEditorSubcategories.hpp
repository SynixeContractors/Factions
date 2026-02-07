class CfgEditorSubcategories {
    @For(Identities)
        class CLASS($1) {
            SCOPE_DLC;
            displayName = "Men ($2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_cars) {
            SCOPE_DLC;
            displayName = "Cars ($2)";
            GCLASS(identity) = "$1";
        };
        class CLASS($1_helicopters) {
            SCOPE_DLC;
            displayName = "Helicopters ($2)";
            GCLASS(identity) = "$1";
        };
    @EndFor
};
