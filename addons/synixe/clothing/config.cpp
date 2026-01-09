#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {
            QCLASS(Uniform_Combat_LS_Synixe_BP_BB),
            QCLASS(Uniform_Combat_RS_Synixe_BP_BB),
            QCLASS(Uniform_Contractor_Shirt)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
