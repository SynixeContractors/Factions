#include "CfgVehicles_Dinghy.hpp"
#include "CfgVehicles_Fennek.hpp"
#include "CfgVehicles_LUT.hpp"
#include "CfgVehicles_Mk6Mortar.hpp"
#include "CfgVehicles_Quad.hpp"
#include "CfgVehicles_Ram.hpp"
#include "CfgVehicles_UGV.hpp"
#include "CfgVehicles_XM.hpp"
#include "CfgVehicles_Wildcat.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "GV Base Army Combat";
    editorSubcategory = QGCLASS(army_combat);
    
    @Uniforms({
        "variants": {
            "eou_gorka_7": 1,
            "eou_gorka_6": 1,
            "eou_gorka_39": 1,
            "eou_gorka_9": 1,
            "eou_gorka_8": 1,
            "eou_gorka_2": 1,
            "eou_gorka_24": 1,
            "eou_gorka_27": 1,
            "casual_plaid_black_denim_uniform": 1,
            "casual_plaid_black_khaki_uniform": 1,
            "casual_plaid_black_sage_uniform": 1,
            "casual_plaid_gray_denim_uniform": 1,
            "casual_plaid_gray_khaki_uniform": 1,
            "casual_plaid_gray_sage_uniform": 1,
            "casual_plaid_navy_black_uniform": 1,
            "casual_plaid_navy_khaki_uniform": 1,
            "casual_plaid_navy_sage_uniform": 1,
            "casual_plaid_orange_black_uniform": 1,
            "casual_plaid_orange_gray_uniform": 1,
            "casual_plaid_orange_khaki_uniform": 1,
            "casual_plaid_red_khaki_uniform": 1,
            "casual_plaid_red_denim_uniform": 1,
            "casual_solid_gray_khaki_uniform": 1,
            "casual_solid_gray_sage_uniform": 1,
            "casual_solid_navy_gray_uniform": 1,
            "casual_solid_navy_khaki_uniform": 1,
            "casual_solid_navy_sage_uniform": 1,
            "casual_solid_red_khaki_uniform": 1,
            "casual_solid_red_sage_uniform": 1,
            "casual_solid_red_black_uniform": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "Aegis_V_CarrierRigKBT_01_cqb_mtp_F": 1,
            "Aegis_V_CarrierRigKBT_01_cqb_olive_F": 1,
            "Aegis_V_CarrierRigKBT_01_cqb_black_F": 1,
            "Aegis_V_CarrierRigKBT_01_cqb_cbr_F": 1,
            "V_CarrierRigKBT_01_light_Black_F": 1,
            "V_CarrierRigKBT_01_light_MTP_F": 1,
            "V_CarrierRigKBT_01_light_Olive_F": 1,
            "V_CarrierRigKBT_01_light_Coyote_F": 1,
        },
        "magazines": {
            "SmokeShell": 1,
            "HandGrenade": 1,
        },
        "packs": [
            "t3_standard",
        ],
    });

    @Headgear({
        "synixe_mgp_helmet_airframe_01_blk": 1,
        "synixe_mgp_helmet_airframe_01_cb_hexagon": 1,
        "synixe_mgp_helmet_airframe_01_cb": 1,
        "synixe_mgp_helmet_airframe_01_khk": 1,
        "synixe_mgp_helmet_airframe_01_rgr_hexagon": 1,
        "synixe_mgp_helmet_airframe_01_rgr": 1,
        "synixe_mgp_helmet_airframe_01_blk_mcb": 1,
    });

    @Facewear({
        "G_Balaclava_light_blk_F": 1,
        "G_Balaclava_light_G_blk_F": 1,
        "synixe_mgp_f_face_shield_blk": 1,
        "synixe_mgp_f_face_shield_blk_ess": 1,
        "synixe_mgp_f_face_shield_blk_tactical": 1,
        "synixe_mgp_f_face_shield_rgr": 1,
        "synixe_mgp_f_face_shield_rgr_ess": 1,
        "synixe_mgp_f_face_shield_rgr_tactical": 1,
        "synixe_mgp_f_face_shield_mc": 1,
        "synixe_mgp_f_face_shield_mc_ess": 1,
        "synixe_mgp_f_face_shield_mc_tactical": 1,
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "arifle_AK12_545_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                },
            },
            "arifle_SCAR_short_black_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                },
            },
            "Atlas_Arifle_famasG2_Grip_F": {
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SCAR_L_short_black_F": {
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_Galat_lxWS": {
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_F": 7,
                },
            },
            "arifle_AK12_F": {
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_F": 7,
                },
            },
            "sgun_aa40_lxWS": {
                "magazinesVest": {
                    "20Rnd_12Gauge_AA40_Pellets_lxWS": 7,
                },
            },
            "arifle_VelkoR5_lxWS": {
                "magazinesVest": {
                    "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS": 7,
                },
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
            "": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "muzzles": {
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "muzzle_snds_M": 1,
            "suppressor_h_lxWS": 1,
        },
    });

    @Secondary({
        "weapons": {
            "hgun_Pistol_heavy_01_black_F": {
                "magazinesVest": {
                    "11Rnd_45ACP_Mag": 3,
                },
            },
            "hgun_G17_black_F": {
                "magazinesVest": {
                    "17Rnd_9x21_Mag": 3,
                },
            },
        },
    });
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);

    @Launchers({
        "weapons": {
            "": 2,
            "JCA_launch_M72_olive_F": {
                "loadedPrimary": "JCA_M72_HEAT_F",
            },
        },
    });
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,Rifleman) {
    @Role(SquadLeader);

    @Primary({
        "weapons": {
            "arifle_AK12_545_F": {
                "magazinesVest": {
                    "Aegis_45Rnd_545x39_Mag_F": 7,
                },
            },
            "arifle_SCAR_L_short_black_F": {
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 7,
                },
            },
            "arifle_VelkoR5_lxWS": {
                "magazinesVest": {
                    "50Rnd_556x45_Velko_reload_tracer_yellow_lxWS": 7,
                },
            },
        },
        "optics": {
            "": 1,
            "optic_Holosight_blk_F": 1,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
            "optic_Hamr": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "muzzles": {
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "muzzle_snds_M": 1,
        },
    });
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Base) {
    @Role(TeamLeader);

    @Primary({
        "weapons": {
            "arifle_AK12_GL_F": {
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_F": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_F",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "Atlas_Arifle_famasG2_GL_F": {
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_556x45_Stanag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_SCAR_L_GL_black_F": {
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_556x45_Stanag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_AK12_GL_545_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_545x39_Black_Mag_Yellow_F",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
    });
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Base) {
    @Role(Autorifleman);

    @Primary({
        "weapons": {
            "Aegis_arifle_RPK12_545_F": {
                "magazinesVest": {
                    "Aegis_60Rnd_545x39_Mag_Tracer_F": 4,
                },
                "magazinesBackpack": {
                    "Aegis_60Rnd_545x39_Mag_Tracer_F": 4,
                },
            },
            "LMG_Zafir_black_F": {
                "magazinesVest": {
                    "ACE_150Rnd_762x54_Box_tracer_yellow": 2,
                },
                "magazinesBackpack": {
                    "ACE_150Rnd_762x54_Box_tracer_yellow": 2,
                },
            },
            "LMG_03_F": {
                "magazinesVest": {
                    "200Rnd_556x45_Box_F": 2,
                },
                "magazinesBackpack": {
                    "200Rnd_556x45_Box_F": 2,
                },
            },
            "arifle_RPK12_F": {
                "magazinesVest": {
                    "75rnd_762x39_AK12_Mag_F": 4,
                },
                "magazinesBackpack": {
                    "75rnd_762x39_AK12_Mag_F": 4,
                },
            },
        },
        "optics": {
            "": 1,
            "optic_Holosight_blk_F": 1,
            "optic_Hamr": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
    });

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr": 1,
        },
    });
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,Base) {
    @Role(Machinegunner);

    @Primary({
        "weapons": {
            "MMG_02_black_F": {
                "magazinesVest": {
                    "130Rnd_338_Mag": 2,
                },
                "magazinesBackpack": {
                    "130Rnd_338_Mag": 3,
                },
            },
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
        "optics": {
            "": 1,
            "optic_Hamr": 1,
        },
    });

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr": 1,
        },
    });
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,Base) {
    @Role(AsstMachinegunner);

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr_F": 1,
        },
        "magazines": {
            "130Rnd_338_Mag": 3,
        },
    });   
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,Base) {
    @Role(Marksman);

    @Primary({
        "weapons": {
            "arifle_AK12_545_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 8,
                },
            },
            "arifle_MXM_Black_F": {
                "magazinesVest": {
                    "30Rnd_65x39_caseless_black_mag": 8,
                },
            },
            "arifle_SCAR_grip_black_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 8,
                },
            },
        },
        "optics": {
            "optic_DMS": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
        "muzzles": {
            "muzzle_snds_H": 1,
            "suppressor_h_lxWS": 1,
        },
    });
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,Base) {
    @Role(Medic);

    @Backpacks({
        "variants": {
            "tacs_Backpack_Kitbag_Medic_Green": 1,
        },
        "packs": [
            "t2_t3_medic",
        ],
    });
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,Base) {
    @Role(RiflemanMAT);

    @Launchers({
        "weapons": {
            "launch_PSRL1_black_RF": {
                "magazinesBackpack": {
                    "PSRL1_AT_RF": 2,
                    "PSRL1_FRAG_RF": 2,
                },
            },
            "launch_MRAWS_green_rail_F": {
                "magazinesBackpack": {
                    "MRAWS_HEAT55_F": 2,
                    "MRAWS_HE_F": 2,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_AssaultPackSpec_rgr": 1,
            "B_AssaultPackSpec_blk": 1,
            "B_AssaultPackSpec_cbr": 1,
        },
    });
};

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,Base) {
    @Role(RiflemanAA);

    @Primary({
        "weapons": {
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                },
            },
            "SMG_03C_TR_black": {
                "magazinesVest": {
                    "50Rnd_570x28_SMG_03": 7,
                },
            },
            "JCA_smg_MP5_FL_black_F": {
                "magazinesVest": {
                    "JCA_30Rnd_9x21_MP5_Mag": 7,
                },
            },
            "JCA_smg_UMP_VFG_black_F": {
                "magazinesVest": {
                    "JCA_25Rnd_45ACP_UMP_Mag": 7,
                },
            },
        },
        "optics": {
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
            "optic_Holosight_blk_F": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "muzzles": {
            "muzzle_snds_L": 1,
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "muzzle_snds_570": 1,
            "muzzle_snds_o45": 1,
        },
    });

    @Launchers({
        "weapons": {
            "launch_Titan_blk_F": {
                "magazinesBackpack": {
                    "Titan_AA": 2,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_Kitbag_rgr": 1,
        },
    });
};

class CLASS2(SIDE,RiflemanHAT): CLASS2(SIDE,Base) {
    @Role(RiflemanHAT);

    @Primary({
        "weapons": {
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                },
            },
            "SMG_03C_TR_black": {
                "magazinesVest": {
                    "50Rnd_570x28_SMG_03": 7,
                },
            },
            "JCA_smg_MP5_FL_black_F": {
                "magazinesVest": {
                    "JCA_30Rnd_9x21_MP5_Mag": 7,
                },
            },
            "JCA_smg_UMP_VFG_black_F": {
                "magazinesVest": {
                    "JCA_25Rnd_45ACP_UMP_Mag": 7,
                },
            },
        },
        "optics": {
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
            "optic_Holosight_blk_F": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "muzzles": {
            "muzzle_snds_L": 1,
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "muzzle_snds_570": 1,
            "muzzle_snds_o45": 1,
        },
    });

    @Launchers({
        "weapons": {
            "launch_Titan_short_blk_F": {
                "magazinesBackpack": { 
                    "Titan_AT": 2,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_Kitbag_rgr": 1,
        },
    });
};

class CLASS2(SIDE,RadioOperator): CLASS2(SIDE,Base) {
    @Role(RadioOperator);

    @Backpacks({
        "variants": {
            "B_RadioBag_01_green_F": 1,
        },
    });
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,Base) {
    @Role(Engineer);

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr": 1,
        },
        "packs": [
            "engineer",
        ],
    });
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,Base) {
    @Role(Demolitions);

    @Backpacks({
        "variants": {
            "B_TacticalPack_blk": 1,
        },
        "packs": [
            "eod",
            "demo",
        ],
    });

    @Secondary({
        "weapons": {
            "ACE_VMH3": {},
        },
    });
};

class CLASS2(SIDE,HeliPilot): CLASS2(SIDE,Base) {
    @Role(HeliPilot);

    @Vests({
        "variants": {
            "V_CarrierRigKBT_01_Black_F": 1,
            "V_CarrierRigKBT_01_Coyote_F": 1,
        },
        "magazines": {
            "SmokeShell": 1,
        },
        "packs": [
            "t3_standard",
        ],
    });

    @Primary({
        "weapons": {
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 4,
                },
            },
            "SMG_03C_TR_black": {
                "magazinesVest": {
                    "50Rnd_570x28_SMG_03": 4,
                },
            },
            "JCA_smg_MP5_FL_black_F": {
                "magazinesVest": {
                    "JCA_30Rnd_9x21_MP5_Mag": 4,
                },
            },
            "JCA_smg_UMP_VFG_black_F": {
                "magazinesVest": {
                    "JCA_25Rnd_45ACP_UMP_Mag": 4,
                },
            },
        },
        "optics": {
            "": 1,
        },
    });

    @Headgear({
        "H_CrewHelmetHeli_O": 1,
    });
};
