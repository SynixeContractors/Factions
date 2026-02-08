class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        factionTest = QUOTE(PREFIX);
        displayName = "Police Base Unit";
        @Templated();
    };

    @For(Identities)
    class CLASS2(Base,$1): CLASS(Base) {
        displayName = "$1 Police Base Unit";
        @Identity($1);
    };
    @EndFor

    #include "CfgVehicles_Vehicles.hpp"

    @ForSides(OPFOR,BLUFOR,INDEP,CIV)
        #define TEMPLATE_SIDE $SIDE
        #define SIDE DOUBLES(NATION,$UPPER)
        #define FACTION QCLASS($LOWER)
        @For(Identities)
            #define NATION $1
            #include "CfgVehicles_T_Patrol.hpp"
            #include "CfgVehicles_T_SWAT.hpp"
            #include "CfgVehicles_T_Gendarmerie.hpp"
            #undef NATION
        @EndFor
        #undef FACTION
        #undef SIDE
        #undef TEMPLATE_SIDE
    @EndForSides
};
