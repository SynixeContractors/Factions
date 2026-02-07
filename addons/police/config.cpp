#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
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
    class GCLASS(police) {};
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
