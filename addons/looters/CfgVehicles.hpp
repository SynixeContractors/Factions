class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        factionTest = QUOTE(PREFIX);
        displayName = "Looter Base Unit";
        @Templated();
    };

    @For(Identities)
    class CLASS2(Base,$1): CLASS(Base) {
        displayName = "$1 Looter Base Unit";
        @Identity($1);
    };
    @EndFor

    @ForSides(OPFOR,BLUFOR,INDEP)
        #define TEMPLATE_SIDE $SIDE
        #define SIDE DOUBLES(NATION,$UPPER)
        #define FACTION QCLASS($LOWER)
        @For(Identities)
            #define NATION $1
            #include "CfgVehicles_T_Arid.hpp"
            #include "CfgVehicles_T_Boreal.hpp"
            #include "CfgVehicles_T_Cold.hpp"
            #include "CfgVehicles_T_Desert.hpp"
            #include "CfgVehicles_T_Tropic.hpp"
            #undef NATION
        @EndFor
        #undef FACTION
        #undef SIDE
        #undef TEMPLATE_SIDE
    @EndForSides
};
