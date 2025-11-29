#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(van),
            QCLASS(unit_casual),
        };
        weapons[] = {
            QCLASS(casual),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_main"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
