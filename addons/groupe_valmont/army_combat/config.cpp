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
    class GCLASS(Dinghy);
    class GCLASS(Ram_MMG);
    class GCLASS(Ram_MRL);
    class GCLASS(Ram_AA);
    class GCLASS(Ram_AT);
    class GCLASS(Ram);
    class GCLASS(Ram_Comms);
    class GCLASS(LUT_MRL);
    class GCLASS(LUT_Transport);
    class GCLASS(LUT_TransportCovered);
    class GCLASS(LUT_Flatbed);
    class GCLASS(LUT_Fuel);
    class GCLASS(LUT_Medical);
    class GCLASS(LUT_Ammo);
    class GCLASS(LUT_Repair);
    class GCLASS(UGV);
    class GCLASS(UGV_RCWS);
    class GCLASS(Fennek);
    class GCLASS(Fennek_HMG);
    class GCLASS(Fennek_GMG);
    class GCLASS(QuadBike);
    class GCLASS(XM_HMG_Low);
    class GCLASS(XM_HMG_High);
    class GCLASS(Mk6Mortar);
    class GCLASS(Wildcat);
    class GCLASS(Wildcat_Pylons);

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
