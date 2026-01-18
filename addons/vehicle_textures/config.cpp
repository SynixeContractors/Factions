#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_main"
        };
        skipWhenMissingDependencies = 1;
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};
