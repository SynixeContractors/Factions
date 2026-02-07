class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        faction = QGCLASS(police);
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
    #include "CfgVehicles_Sides.hpp"
    #undef SIDE
    #undef TEMPLATE_SIDE
    @EndForSides
};
