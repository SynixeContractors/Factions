class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        factionTest = QUOTE(PREFIX);
        displayName = "The Professionals Base Unit";
        @Templated();
        @Assigned(Military);
    };

    @For(Identities)
    class CLASS2(Base,$1): CLASS(Base) {
        displayName = "$1 The Professionals Base Unit";
        @Identity($1);
    };
    @EndFor

    @ForSides(OPFOR,INDEP)
        #define SIDE_NUMBER $SIDE
        #define SIDE DOUBLES(NATION,$UPPER)
        #define FACTION QCLASS($LOWER)
        @For(Identities)
            #define NATION $1
            #include "CfgVehicles_T_Armor.hpp"
            #include "CfgVehicles_T_Suit.hpp"
            #include "CfgVehicles_T_Vest.hpp"
            #include "CfgVehicles_T_Vehicles.hpp"
            #undef NATION
        @EndFor
        #undef FACTION
        #undef SIDE
        #undef SIDE_NUMBER
    @EndForSides
};
