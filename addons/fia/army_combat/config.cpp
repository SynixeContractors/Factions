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
    class GCLASS(BTR);
    class GCLASS(BTR_SPG);
    class GCLASS(Ram_MMG);
    class GCLASS(Ram_RCWS);
    class GCLASS(Ram_M134);
    class GCLASS(Ram_Comms);
    class GCLASS(Ram_MRL);
    class GCLASS(Ram_AA);
    class GCLASS(Ram_AT);
    class GCLASS(LUT_MRL);
    class GCLASS(LUT_Ammo);


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
