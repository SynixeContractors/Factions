#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            QCLASS(Rifleman),
            QCLASS(TeamLeader),
            QCLASS(RiflemanCarabine),
            QCLASS(SquadLeader),
            QCLASS(Autorifleman),
            QCLASS(Machinegunner),
            QCLASS(AsstMachineGunner),
            QCLASS(Medic),
            QCLASS(RifelmanMAT),
            QCLASS(RiflemanAA),
            QCLASS(RiflemanHAT),
            QCLASS(Engineer),
            QCLASS(RadioOperator),
            QCLASS(Demolitions),
            QCLASS(Crewman),
            QCLASS(HeliPilot),
            QCLASS(Marksman),
            QCLASS(Sniper),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
