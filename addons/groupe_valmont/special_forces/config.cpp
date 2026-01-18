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

    #define SIDE OPFOR
    #define SIDE_NUMBER 0
    #define SIDE_FACTION t2_opfor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE INDEP
    #define SIDE_NUMBER 2
    #define SIDE_FACTION t2_indep
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION
};
