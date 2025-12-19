#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
            QCLASS(Rifleman),
            QCLASS(SquadLeader),
            QCLASS(TeamLeader),
            QCLASS(Autorifleman),
            QCLASS(Machinegunner),
            QCLASS(AsstMachinegunner),
            QCLASS(Marksman),
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
