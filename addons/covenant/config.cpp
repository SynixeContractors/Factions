#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,COMPONENT) {
        name = QUOTE(COMPONENT);
        units[] = {
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles",
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class synixe_factions_generics {
    @ForSides(BLUFOR,INDEP,OPFOR,CIV)
        class CLASS($LOWER) {};
    @EndForSides
};

#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
