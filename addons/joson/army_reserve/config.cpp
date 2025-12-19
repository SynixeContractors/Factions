#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            QCLASS(Rifleman),
            QCLASS(TeamLeader),
            QCLASS(RiflemanCarabine),
            QCLASS(SquadLeader),
            QCLASS(Autorifleman),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
