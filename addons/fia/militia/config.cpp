#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class GCLASS(Ram);
    class GCLASS(Ram_Covered);
    class GCLASS(Ram_HMG);
    class GCLASS(Ram_Fuel);
    class GCLASS(Ram_Rocket);

    @ForSides(BLUFOR,OPFOR,INDEP)
    #define SIDE $UPPER
    #define SIDE_NUMBER $SIDE
    #define SIDE_FACTION t4_$LOWER
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION
    @EndForSides
};
