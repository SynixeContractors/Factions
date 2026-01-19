class CLASS3(NATION,SIDE,Policeman): CLASS2(Base,NATION) {
    @Role(Worker);
    side = TEMPLATE_SIDE;
    factions = QCLASS(police);
    editorSubcategory = QGCLASS(police);

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
class CLASS3(NATION,SIDE,PolicemanPistol): CLASS3(NATION,SIDE,Policeman) {
    @Role(Pistol);
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
class CLASS3(NATION,SIDE,PolicemanSMG): CLASS3(NATION,SIDE,PolicemanPistol) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS3(NATION,SIDE,PolicemanRifle):CLASS3(NATION,SIDE,PolicemanPistol) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS3(NATION,SIDE,PolicemanBreacher): CLASS3(NATION,SIDE,PolicemanPistol) {
    @Role(Breacher);
    #include "weapons/shotgun.hpp"
};
class CLASS3(NATION,SIDE,SWAT): CLASS3(NATION,SIDE,Policeman) {
    @Role(Hidden);
    editorSubcategory = QGCLASS(SWAT);
    @Headgear({
        "H_PASGT_basic_blue_F": 1,
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
class CLASS3(NATION,SIDE,SWATBreacher): CLASS3(NATION,SIDE,SWAT) {
    @Role(Breacher);
    #include "weapons/shotgun.hpp"
};
class CLASS3(NATION,SIDE,SWATSMG): CLASS3(NATION,SIDE,SWAT) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS3(NATION,SIDE,SWATRifle): CLASS3(NATION,SIDE,SWAT) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS3(NATION,SIDE,SWATDemo): CLASS3(NATION,SIDE,SWAT) {
    @Role(Demolitions);
    #include "weapons/smg.hpp"
    @Headgear({
        "H_HelmetHeavy_Black_RF": 1,
    });
    @Vests({
        "variants" : {
            "V_EOD_blue_F" : 1,
        },
        "packs" : [
            "t2_standard",
        ],
    });
};
class CLASS3(NATION,SIDE,SWATSniper): CLASS3(NATION,SIDE,Policeman) {
    //police snipers are usually not kitted up in tactical gear
    editorSubcategory = QGCLASS(SWAT);

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
    });
};
class CLASS3(NATION,SIDE,Gendarme): CLASS3(NATION,SIDE,Policeman) {
    @Role(Pistol);
    editorSubcategory = QGCLASS(gendarmerie);
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
class CLASS3(NATION,SIDE,GendarmeSMG): CLASS3(NATION,SIDE,Gendarme) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS3(NATION,SIDE,GendarmeRifle): CLASS3(NATION,SIDE,Gendarme) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS3(NATION,SIDE,GendarmeBreacher): CLASS3(NATION,SIDE,Gendarme) {
    @Role(Breacher);
    #include "weapons/shotgun.hpp"
};
class CLASS3(NATION,SIDE,GendarmeSniper): CLASS3(NATION,SIDE,Gendarme) {
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
    });
};
