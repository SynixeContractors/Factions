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
};
