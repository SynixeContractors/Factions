class CLASS2(SIDE,Gendarme): CLASS2(SIDE,Policeman) {
    @Role(Pistol);
    editorSubcategory = QCLASS2(NATION,Gendarmerie);
    faction = FACTION_GEND;
    @Headgear({
        "H_PASGT_basic_blue_F": 1,
    });
    @Vests({
        "variants": {
            "V_TacVest_gen_F": 2,
            "V_TacVest_gen_holster_RF": 3,
            "Atlas_V_OCarrierRig_Lite_alt_blk_F": 1,
        },
        "packs": [
            "t3_standard",
        ],
    });
};
class CLASS2(SIDE,GendarmeSMG): CLASS2(SIDE,Gendarme) {
    @Role(SMG);
    #include "weapons\smg.hpp"
};
class CLASS2(SIDE,GendarmeCrewman): CLASS2(SIDE,Gendarme) {
    @Role(Crewman);
    #include "weapons\smg.hpp"
    @Headgear({
        "lxWS_H_HelmetCrew_Blue": 1,
    });
};

class CLASS2(SIDE,GendarmeRifle): CLASS2(SIDE,Gendarme) {
    @Role(Rifleman);
    #include "weapons\rifle.hpp"
};
class CLASS2(SIDE,GendarmeBreacher): CLASS2(SIDE,Gendarme) {
    @Role(Breacher);
    #include "weapons\shotgun.hpp"
};
class CLASS2(SIDE,GendarmeSniper): CLASS2(SIDE,Gendarme) {
    @Role(Sniper);
    @Primary({
        "weapons": {
            "srifle_h6_blk_rf": {
                "probability": 1,
                "magazinesVest": {
                    "10Rnd_556x45_AP_Stanag_green_RF": 8,
                },
            },
        },
        "optics": {
            "optic_DMS": 1,
        },
    });
};

@Vehicles({
    "faction": "FACTION_GEND",
    "side": "SIDE_NUMBER",
    "camo": "Gendarmerie",
    "crew": "Gendarme",
    "prefix": "SIDE",
    "properties": {"editorSubcategory": "QCLASS2(NATION,Gendarmerie_vehicles)"},
    "vehicles": [
        {"class": "Offroad_Lights", "name": "Offroad"},
        {"class": "Offroad_Covered_Lights", "name": "Offroad_Covered"},
        "Offroad_Comms",
        {"class": "Van_Transport_Lights", "name": "Van_Transport"},
        {"class": "Van_Cargo_Lights", "name": "Van_Cargo"},
        "Ram",
        {"class": "Ram_Covered_Lights", "name": "Ram_Covered"},
        "Ram_Bars_Covered",
        "Ram_Bars",
        "Ram_Comms",
        {"class": "Otokar", "crew": "GendarmeCrewman"},
        {"class": "Otokar_HMG", "crew": "GendarmeCrewman"},
        {"class": "Otokar_RCWS", "crew": "GendarmeCrewman"},
    ],
});
