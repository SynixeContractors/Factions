#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(AidWorker),
            QCLASS(EOD),
            QCLASS(Paramedic),

            QCLASS(Jeep),
            QCLASS(VanAmbulance),
            QCLASS(VanTransport),
            QCLASS(VanCargo),
            QCLASS(Offroad),
            QCLASS(OffroadServices),
            QCLASS(OffroadComms),
            QCLASS(Ram),
            QCLASS(RamServices),
            QCLASS(RamWater),
            QCLASS(RamFuel),
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
