#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(AidWorker),
            QCLASS(EOD),
            QCLASS(Paramedic),

            QCLASS(Jeep),
            QCLASS(Van_Ambulance),
            QCLASS(Van_Transport),
            QCLASS(Van_Cargo),
            QCLASS(Offroad),
            QCLASS(Offroad_Services),
            QCLASS(Offroad_Comms),
            QCLASS(Ram),
            QCLASS(Ram_Services),
            QCLASS(Ram_Water),
            QCLASS(Ram_Fuel),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_main"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
