#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            QCLASS(Rifleman),
            QCLASS(SquadLeader),
            QCLASS(TeamLeader),
            QCLASS(Autorifleman),
            QCLASS(Medic),
            QCLASS(RiflemanMAT),
            QCLASS(RadioOperator),
            QCLASS(Engineer),
            QCLASS(Demolitions),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
