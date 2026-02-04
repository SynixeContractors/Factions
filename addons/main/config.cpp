#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class SynixeIdentities {
    @For(Identities)
        class $1 {
            displayName = "$2";
        };
    @EndFor
};

#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWorlds.hpp"
