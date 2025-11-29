#include "script_component.hpp"

class CfgPatches {
    class ADDON {
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
            QCLASS(RiflemanAA),
            QCLASS(RiflemanHAT),
            QCLASS(RadioOperator),
            QCLASS(Engineer),
            QCLASS(Demolitions),
            QCLASS(Crewman),
            QCLASS(HeliPilot),

            QCLASS(Warrior),
            QCLASS(Badger),
            QCLASS(Badger_Command),
            QCLASS(Badger_Mortar),
            QCLASS(Badger_ATGM),
            QCLASS(Badger_Medical),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
