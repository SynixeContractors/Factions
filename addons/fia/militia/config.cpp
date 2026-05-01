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
    class GCLASS(LUT_AA);
    class GCLASS(LUT_Cargo);
    class GCLASS(LUT_Flatbed);
    class GCLASS(LUT_Fuel);
    class GCLASS(LUT_Medical);
    class GCLASS(LUT_Repair);
    class GCLASS(LUT_Transport);
    class GCLASS(LUT_TransportCovered);
    class GCLASS(Ram);
    class GCLASS(Ram_Covered);
    class GCLASS(Ram_Fuel);
    class GCLASS(Ram_HMG);
    class GCLASS(Ram_Rocket);
    class GCLASS(Offroad);
    class GCLASS(Offroad_AA);
    class GCLASS(Offroad_AT);
    class GCLASS(Offroad_Armored);
    class GCLASS(Offroad_Armored_AA);
    class GCLASS(Offroad_Armored_AT);
    class GCLASS(Offroad_Armored_HMG);
    class GCLASS(Offroad_Comms);
    class GCLASS(Offroad_Covered);
    class GCLASS(Offroad_HMG);
    class GCLASS(Offroad_Services);

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
