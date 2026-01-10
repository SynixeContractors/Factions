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
    class GCLASS(Jay_Fuel);
    class GCLASS(Jay_Flatbed);
    class GCLASS(Jay_Box);
    class GCLASS(LUT_Cargo);
    class GCLASS(LUT_Flatbed);
    class GCLASS(LUT_Transport);
    class GCLASS(LUT_TransportCovered);
    class GCLASS(Offroad);
    class GCLASS(Offroad_Covered);
    class GCLASS(Van_Cargo);
    class GCLASS(Van_Transport);

    #define SIDE OPFOR
    #define SIDE_NUMBER 0
    #define SIDE_FACTION t4_opfor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE INDEP
    #define SIDE_NUMBER 2
    #define SIDE_FACTION t4_indep
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION

    #define SIDE BLUFOR
    #define SIDE_NUMBER 1
    #define SIDE_FACTION t4_blufor
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION
};
