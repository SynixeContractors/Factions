class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
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
                "t3_rifleman_medical",
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
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                    },
                },
                                "arifle_SCAR_short_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 7,
                    },
                },
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    },
                },
                "arifle_SCAR_L_short_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    },
                },
                "arifle_Galat_lxWS": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_F": 7,
                    },
                },
                "arifle_AK12_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_F": 7,
                    },
                },
                "sgun_aa40_lxWS": {
                    "probability": 1,
                    "magazinesVest": {
                        "8Rnd_12Gauge_AA40_HE_lxWS": 7,
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
                    "probability": 1,
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
                "hgun_G17_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 2,
                "JCA_launch_M72_olive_F": {
                    "probability": 1,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_545_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "Aegis_45Rnd_545x39_Mag_F": 7,
                    },
                },
                "arifle_SCAR_L_short_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "75Rnd_556x45_Stanag_lxWS": 7,
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
                "muzzle_snds_545": 1,
                "muzzle_snds_M": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 5,
                    },
                    "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "Atlas_Arifle_famasG2_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                        "1Rnd_HE_Grenade_shell": 5,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "arifle_SCAR_L_GL_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                        "1Rnd_HE_Grenade_shell": 5,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "arifle_AK12_GL_545_F": {
                    "probability": 1,
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

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_RPK12_545_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_F": 8,
                    },
                },
                "arifle_MX_SW_Black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "100Rnd_65x39_caseless_black_mag_tracer": 5,
                    },
                },
                "LMG_03_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "200Rnd_556x45_Box_F": 3,
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
    };

    class CLASS(Machinegunner): CLASS(Base) {
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
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
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

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_AK12_545_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Yellow_F": 8,
                    },
                },
                "arifle_MXM_Black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
                "arifle_SCAR_grip_black_F": {
                    "probability": 1,
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

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_PSRL1_black_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_FRAG_RF": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);

        @Primary({
            "weapons": {
                "arifle_AKSM_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                    },
                },
                "SMG_03C_TR_black": {
                    "probability": 1,
                    "magazinesVest": {
                        "50Rnd_570x28_SMG_03": 7,
                    },
                },
                "JCA_smg_MP5_FL_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 7,
                    },
                },
                "JCA_smg_UMP_VFG_black_F": {
                    "probability": 1,
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

    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);

        @Primary({
            "weapons": {
                "arifle_AKSM_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                    },
                },
                "SMG_03C_TR_black": {
                    "probability": 1,
                    "magazinesVest": {
                        "50Rnd_570x28_SMG_03": 7,
                    },
                },
                "JCA_smg_MP5_FL_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 7,
                    },
                },
                "JCA_smg_UMP_VFG_black_F": {
                    "probability": 1,
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

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_green_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
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

    class CLASS(HeliPilot): CLASS(Base) {
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

        Primary({
            "weapons": {
                "arifle_AKSM_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Yellow_F": 4,
                    },
                },
                "SMG_03C_TR_black": {
                    "probability": 1,
                    "magazinesVest": {
                        "50Rnd_570x28_SMG_03": 4,
                    },
                },
                "JCA_smg_MP5_FL_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 4,
                    },
                },
                "JCA_smg_UMP_VFG_black_F": {
                    "probability": 1,
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
};
