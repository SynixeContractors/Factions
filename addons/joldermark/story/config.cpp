#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles",
            "A3_Characters_F"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgIdentities.hpp"
#include "CfgVehicles.hpp"
