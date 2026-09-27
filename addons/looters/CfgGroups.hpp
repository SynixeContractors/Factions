class CfgGroups {
    @ForSides(OPFOR,BLUFOR,INDEP,CIV)
    class $GROUP {
        class CLASS(SIDE) {
            name = "[T4] Looters";
            @For(Identities)
            #define IDENT DOUBLES($1,$UPPER)
            #define LOWER $LOWER
            #define SIDE $SIDE
            #define NAME $2
            #include "CfgGroups_Layout.hpp"
            #undef NAME
            #undef SIDE
            #undef LOWER
            #undef IDENT
            @EndFor
        };
    };
    @EndForSides
};
