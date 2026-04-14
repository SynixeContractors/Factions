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
    class GCLASS(Jay_Fuel);
    class GCLASS(Jay_Flatbed);
    class GCLASS(LUT_Ammo);
    class GCLASS(LUT_Cargo);
    class GCLASS(LUT_Flatbed);
    class GCLASS(LUT_Transport);
    class GCLASS(LUT_TransportCovered);
    class GCLASS(Offroad);
    class GCLASS(Offroad_Covered);
    class GCLASS(Offroad_AT);
    class GCLASS(Offroad_HMG);
    class GCLASS(Offroad_AA);
    class GCLASS(Offroad_Armored);
    class GCLASS(Offroad_Armored_AT);
    class GCLASS(Offroad_Armored_HMG);
    class GCLASS(Offroad_Armored_AA);
    class GCLASS(Van_Cargo);
    class GCLASS(Van_Transport);
    class GCLASS(QuadBike);
    class GCLASS(RSG60Mortar);
    class GCLASS(M2_High);
    class GCLASS(M2_Low);
    class GCLASS(MD500E);

    @ForSides(OPFOR,INDEP,BLUFOR)
    #define SIDE $UPPER
    #define SIDE_NUMBER $SIDE
    #define SIDE_FACTION t4_$LOWER
    #include "CfgVehicles.hpp"
    #undef SIDE
    #undef SIDE_NUMBER
    #undef SIDE_FACTION
    @EndForSides
};
