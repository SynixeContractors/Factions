class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        factionTest = QUOTE(PREFIX);
        displayName = "Private Security Base Unit";
        @Templated();
    };

    @For(Identities)
    class CLASS2(Base,$1): CLASS(Base) {
        displayName = "$1 Private Security Base Unit";
        @Identity($1);
    };
    @EndFor

    @ForSides(OPFOR,BLUFOR,INDEP,CIV)
        #define TEMPLATE_SIDE $SIDE
        #define SIDE DOUBLES(NATION,$UPPER)
        #define FACTION QCLASS($LOWER)
        @For(Identities)
            #define NATION $1
            #include "CfgVehicles_T_Polo.hpp"
            #include "CfgVehicles_T_Suit.hpp"
            #include "CfgVehicles_T_Armor.hpp"
            #undef NATION
        @EndFor
        #undef FACTION
        #undef SIDE
        #undef TEMPLATE_SIDE
    @EndForSides
};
