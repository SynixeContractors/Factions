#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    @For(Identities)
    class PCLASS(DOUBLES(Base,$1));
    @EndFor
    @ForSides(OPFOR,BLUFOR,INDEP)
    #define SIDE_NUMBER $SIDE
    #define SIDE DOUBLES(NATION,$UPPER)
    #define FACTION QPCLASS($LOWER)
        @For(Identities)
        #define NATION $1
        #include "CfgVehicles_T_Units.hpp"
        @Vehicles({
            "faction": "FACTION",
            "side": "SIDE_NUMBER",
            "prefix": "SIDE",
            "properties": {"editorSubcategory": "QGCLASS(TRIPLES(generics,cars,NATION))"},
            "vehicles": [
                "Ram",
                "Ram_Covered",
                "Ram_HMG",
                "Ram_Fuel",
                "Ram_Rocket",
                "LUT_Transport",
                "LUT_TransportCovered",
                "LUT_Repair",
                "LUT_Medical",
                "LUT_Fuel",
                "LUT_Cargo",
                "LUT_Flatbed",
                "LUT_AA",
            ],
        });

        // Offroad
        @Vehicles({
            "faction": "FACTION",
            "side": "SIDE_NUMBER",
            "prefix": "SIDE",
            "properties": {"editorSubcategory": "QGCLASS(TRIPLES(generics,cars,NATION))"},
            "vehicles": [
                "Offroad",
                "Offroad_Covered",
                "Offroad_Comms",
                "Offroad_Services",
                "Offroad_HMG",
                "Offroad_AT",
                "Offroad_AA",
                "Offroad_Armored",
                "Offroad_Armored_AT",
                "Offroad_Armored_HMG",
                "Offroad_Armored_AA",
            ],
        });

        #undef NATION
        @EndFor
    #undef FACTION
    #undef SIDE
    #undef SIDE_NUMBER
    @EndForSides
};
