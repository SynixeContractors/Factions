#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class CfgEditorSubcategories {
    class CLASS(men_winter) {
        displayName = "Men (Winter)";
    };
};

#include "CfgVehicles.hpp"
