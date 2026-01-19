class CLASS3(Policeman,NATION,SIDE): CLASS2(Base,NATION) {
    SCOPE_DLC;
    displayName = "Police (Worker)";
    side = TEMPLATE_SIDE;
    factions = QCLASS(police);

    @Uniforms({
        "variants": {
            "U_B_GEN_Soldier_F": 0.8,
            "U_B_GEN_Commander_F": 0.2,
        },
    });
    @Secondary({
        "weapons": {
            "hgun_P07_blk_F": {
                "magazinesUniform": {
                    "16Rnd_9x21_Mag_v2": 2,
                },
            },
        },
    });
};
class CLASS3(PolicemanPistol,NATION,SIDE): CLASS3(Policeman,NATION,SIDE) {
    displayName = "Police (Pistol)";
    @Headgear({
        "" : 1,
        "H_Cap_police": 1,
        "H_Cap_police_headset": 1,
        "H_Beret_blk_POLICE": 1,
        "Aegis_H_Milcap_nohs_blue_F": 1,
        "Aegis_H_MilCap_tachs_blue_F": 1,
        "H_MilCap_blue": 1,
    });
    @Vests({
        "variants" : {
            "V_TacVest_blk_POLICE" : 1,
        },
        "packs" : [
            "t2_standard",
        ],
    });
};
class CLASS3(PolicemanSMG,NATION,SIDE): CLASS3(PolicemanPistol,NATION,SIDE) {
    displayName = "Police (SMG)";
    #include "weapons/smg.hpp"
};
class CLASS3(PolicemanRifle,NATION,SIDE): CLASS3(PolicemanPistol,NATION,SIDE) {
    displayName = "Police (Rifle)";
    #include "weapons/rifle.hpp"
};
class CLASS3(PolicemanBreacher,NATION,SIDE): CLASS3(PolicemanPistol,NATION,SIDE) {
    displayName = "Police (Shotgun)";
    #include "weapons/shotgun.hpp"
};
class CLASS3(PolicemanSniper,NATION,SIDE): CLASS3(PolicemanPistol,NATION,SIDE) {
    displayName = "Police (Sniper)";
    @Primary({
        "weapons": {
            "srifle_h6_blk_rf": {
                "probability": 1,
                "magazinesVest": {
                    "10Rnd_556x45_AP_Stanag_green_RF": 8,
                },
            },
        },
    });
};
class CLASS3(Gendarme,NATION,SIDE): CLASS3(Policeman,NATION,SIDE) {
    displayName = "Gendarme (Pistol)";
    @Headgear({
        "H_PASGT_basic_blue_F": 1,
    });
    @Vests({
        "variants" : {
            "V_TacVest_gen_F": 2,
            "V_TacVest_gen_holster_RF": 3,
            "Atlas_V_OCarrierRig_Lite_alt_blk_F": 1,
        },
        "packs" : [
            "t2_standard",
        ],
    });
};
class CLASS3(GendarmeSMG,NATION,SIDE): CLASS3(Gendarme,NATION,SIDE) {
    displayName = "Gendarme (SMG)";
    #include "weapons/smg.hpp"
};
class CLASS3(GendarmeRifle,NATION,SIDE): CLASS3(Gendarme,NATION,SIDE) {
    displayName = "Gendarme (Rifle)";
    #include "weapons/rifle.hpp"
};
class CLASS3(GendarmeBreacher,NATION,SIDE): CLASS3(Gendarme,NATION,SIDE) {
    displayName = "Gendarme (Shotgun)";
    #include "weapons/shotgun.hpp"
};
class CLASS3(GendarmeSniper,NATION,SIDE): CLASS3(Gendarme,NATION,SIDE) {
    displayName = "Gendarme (Sniper)";
    @Primary({
        "weapons": {
            "srifle_h6_blk_rf": {
                "probability": 1,
                "magazinesVest": {
                    "10Rnd_556x45_AP_Stanag_green_RF": 8,
                },
            },
        },
    });
};
