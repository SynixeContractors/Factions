#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class CfgVehicles {

    #define SIDE OPFOR
    #define SIDE_NUMBER 0
    #define SIDE_FACTION t3_opfor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE INDEP
    #define SIDE_NUMBER 2
    #define SIDE_FACTION t3_indep
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE BLUFOR
    #define SIDE_NUMBER 1
    #define SIDE_FACTION t3_blufor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION
};
