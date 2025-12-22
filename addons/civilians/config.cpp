#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            @For(Identities)
                #define NATION $1
                QCLASS2(Motorboat,NATION),
                QCLASS2(RHIB,NATION),
                QCLASS2(CabinSkiff,NATION),
                QCLASS2(JetSki,NATION),
                QCLASS2(Dingy,NATION),
                QCLASS2(Jay_Box,NATION),
                QCLASS2(Jay_Flatbed,NATION),
                QCLASS2(Jay_Fuel,NATION),
                QCLASS2(Hatchback,NATION),
                QCLASS2(HatchbackSport,NATION),
                QCLASS2(SUV,NATION),
                QCLASS2(Tractor,NATION),
                QCLASS2(Jeep,NATION),
                QCLASS2(Offroad,NATION),
                QCLASS2(OffroadCovered,NATION),
                QCLASS2(Offroad_Comms,NATION),
                QCLASS2(Offroad_Services,NATION),
                QCLASS2(MD500,NATION),
                QCLASS2(Mohawk,NATION),
                QCLASS2(Mohawk_Executive,NATION),
                QCLASS2(Orca,NATION),
                QCLASS2(Puma,NATION),
                QCLASS2(PumaA,NATION),
                QCLASS2(CessnaTTx,NATION),
                QCLASS2(CessnaTTx_Racing,NATION),
                QCLASS2(Citizen_Polo_Shorts,NATION),
                QCLASS2(Citizen_Polo_Pants,NATION),
                QCLASS2(Citizen_PilotHelicopter,NATION),
                QCLASS2(Citizen_PilotPlane,NATION),
                QCLASS2(Citizen_Summer,NATION),
                QCLASS2(Citizen_Sport,NATION),
                QCLASS2(Citizen_Suit_Business,NATION),
                QCLASS2(Citizen_Suit_Formal,NATION),
                QCLASS2(Citizen_Djellaba,NATION),
                QCLASS2(Citizen_Construction,NATION),
                QCLASS2(Citizen_Farmer,NATION),
                QCLASS2(Citizen_Fisherman,NATION),
                #undef NATION
            @EndFor
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

#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
