class CfgEditorSubcategories {
    @For(Identities)
        class CLASS($1) {
            SCOPE_DLC;
            #if "$1" == "DalRiada"
            displayName = "Dal Riada";
            #else
            displayName = "$1";
            #endif
        };
    @EndFor
};
