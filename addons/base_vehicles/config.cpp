#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_main",

            // Warrior
            "A3_Aegis_Armor_F_Aegis_APC_Tracked_03",
            // Badger
            "A3_Aegis_Armor_F_Aegis_APC_Wheeled_01",
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
