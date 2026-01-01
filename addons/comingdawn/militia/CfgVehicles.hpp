class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Coming Dawn Militia";
        editorSubcategory = QGCLASS(Militia);
        
        @Uniforms({
            "variants": {
                "U_B_ION_Uniform_01_poloshirt_blue_F": 1,
                "U_B_ION_Uniform_01_tshirt_black_F": 1,
                "U_lxWS_ION_Casual5": 1,
                "casual_plaid_blue_khaki_uniform": 1,
                "casual_plaid_gray_denim_uniform": 1,
                "casual_plaid_purple_khaki_uniform": 1,
                "casual_plaid_yellow_gray_uniform": 1,
                "U_C_ArtTShirt_01_v5_F": 1,
                "U_C_ArtTShirt_01_v3_F": 1,
                "U_C_ArtTShirt_01_v6_F": 1,
                "U_C_ArtTShirt_01_v1_F": 1,
                "U_C_ArtTShirt_01_v2_F": 1,
                "Atlas_U_C_Uniform_01_shirt_pattern_F": 1,
                "casual_solid_white_khaki_uniform": 1,
                "casual_solid_purple_khaki_uniform": 1,
                "casual_solid_navy_sage_uniform": 1,
                "casual_solid_cyan_denim_uniform": 1,
                "Opf_U_I_I_Uniform_01_tshirt_black_F": 1,
                "U_I_L_Uniform_01_tshirt_sport_F": 1,
                "U_I_L_Uniform_01_tshirt_skull_F": 1,
                "U_I_L_Uniform_01_tshirt_black_F": 1,
                "Atlas_U_C_Uniform_01_tshirt_white_F": 1,
                "U_MU_B_GuerillaGarment7_blue": 1,
                "U_MU_B_GuerillaGarment7_brown": 1,
                "U_MU_B_GuerillaGarment7_dirty": 1,
                "U_MU_B_GuerillaGarment7_grey": 1,
                "U_MU_B_GuerillaGarment7_redcamo": 1,
                "U_MU_B_GuerillaGarment7_green": 1,
                "U_MU_B_GuerillaGarment7_olive": 1,
                "U_MU_B_GuerillaGarment7_orange": 1,
                "U_MU_B_GuerillaGarment7_skull": 1,
                "U_MU_B_GuerillaGarment7": 1,
                "U_MU_B_GuerillaGarment7_yellow": 1,
                "U_MU_B_GuerillaGarment5_blue": 1,
                "U_MU_B_GuerillaGarment5_brown": 1,
                "U_MU_B_GuerillaGarment5_dirty": 1,
                "U_MU_B_GuerillaGarment5_grey": 1,
                "U_MU_B_GuerillaGarment5_redcamo": 1,
                "U_MU_B_GuerillaGarment5_green": 1,
                "U_MU_B_GuerillaGarment5_olive": 1,
                "U_MU_B_GuerillaGarment5_orange": 1,
                "U_MU_B_GuerillaGarment5_skull": 1,
                "U_MU_B_GuerillaGarment5": 1,
                "U_MU_B_GuerillaGarment5_yellow": 1,
            },
            "packs": [
                "t4_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_TacVest_blk": 1,
                "V_TacVest_khk": 1,
                "V_TacVest_oli": 1,
                "V_TacVest_camo": 1,
                "Atlas_Tacvest_Ard_F": 1,
                "V_TacVest_rig_blk_RF": 1,
                "V_TacVest_rig_khk_RF": 1,
                "V_TacVest_rig_oli_RF": 1,
                "V_BandollierB_blk": 1,
                "V_BandollierB_cbr": 1,
                "V_BandollierB_rgr": 1,
                "V_HarnessO_brn": 1,
                "V_HarnessO_whex_F": 1,
                "V_HarnessO_tan": 1,
                "V_lxWS_HarnessO_oli": 1,
                "V_lxWS_TacVestIR_oli": 1,
                "V_HarnessOSpec_brn": 1,
                "V_HarnessOSpec_whex_F": 1,
                "V_HarnessOSpec_tan": 1,
                "V_ChestrigF_blk": 1,
                "V_ChestrigF_rgr": 1,
                "V_ChestrigF_khk": 1,
                "V_ChestrigF_oli": 1,
                "V_PlateCarrierIA1_oli": 1,
                "V_PlateCarrierIA1_khk": 1,
                "V_CF_CarrierRig_Lite_F": 1,
                "Aegis_V_ChestrigEast_grn_F": 1,
                "Aegis_V_ChestrigEast_khk_F": 1,
                "Aegis_V_ChestrigEast_oli_F": 1,
                "Aegis_V_ChestrigEast_tan_F": 1,
                "V_TacChestrig_cbr_F": 1,
                "V_TacChestrig_grn_F": 1,
                "V_TacChestrig_oli_F": 1,
                "WSLV_Platecarrier_BLK_NF": 1,
                "WSLV_Platecarrier_GRN_NF": 1,
                "WSLV_Platecarrier_KHK_NF": 1,
                "WSLV_Platecarrier_SNK_NF": 1,
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });

        @Headgear({
            "H_Bandanna_gry": 1,
            "H_Bandanna_blu": 1,
            "H_Bandanna_cbr": 1,
            "V_TacVest_camo": 1,
            "H_Bandanna_khk": 1,
            "H_Bandanna_mcamo": 1,
            "H_Bandanna_sgg": 1,
            "H_Bandanna_sand": 1,
            "H_Bandanna_surfer_blk": 1,
            "H_Bandanna_surfer": 1,
            "H_Bandanna_surfer_grn": 1,
            "H_Bandanna_camo": 1,
            "H_Watchcap_cbr": 1,
            "H_Watchcap_blk": 1,
            "H_Watchcap_camo": 1,
            "H_Watchcap_khk": 1,
            "H_Watchcap_sgg": 1,
            "H_Cap_blu": 1,
            "H_Cap_blk": 1,
            "H_Cap_grn": 1,
            "H_Cap_red": 1,
            "H_Cap_tan": 1,
            "H_Cap_headphones_gry": 1,
            "H_Cap_headphones_tan": 1,
            "H_Cap_headphones": 1,
            "synixe_mgp_h_cap_blk": 1,
            "synixe_mgp_h_cap_blk_backwards": 1,
            "synixe_mgp_h_cap_cb": 1,
            "synixe_mgp_h_cap_cb_backwards": 1,
            "synixe_mgp_h_cap_gry": 1,
            "synixe_mgp_h_cap_gry_backwards": 1,
            "synixe_mgp_h_cap_m81": 1,
            "synixe_mgp_h_cap_m81_backwards": 1,
            "": 1,
        });

        @Facewear({
            "G_Bandanna_aviator": 1,
            "G_Bandanna_beast": 1,
            "G_Bandanna_blk": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_oli": 1,
            "G_Bandanna_OrangeFlame1": 1,
            "G_Bandanna_shades": 1,
            "G_Bandanna_sport": 1,
            "G_Bandanna_tan": 1,
            "G_Bandanna_Vampire_01": 1,
            "G_Bandanna_BlueFlame1": 1,
            "G_Bandanna_BlueFlame2": 1,
            "G_Bandanna_CandySkull": 1,
            "G_Bandanna_RedFlame2": 1,
            "G_Bandanna_shemag": 1,
            "G_Bandanna_Skull1": 1,
            "G_Bandanna_Syndikat1": 1,
            "G_Bandanna_Skull2": 1,
            "G_Bandanna_kawaii": 1,
            "G_Bandanna_Syndikat2": 1,
            "": 1,
        });

        @Assigned(Military);

        @Primary({
            "weapons": {
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 7,
                    }
                },
                "arifle_AKM_FL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 7,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 7,
                    }
                },
                "Aegis_arifle_AK103_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_M16A4_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M16A4_FG_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M4A1_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M4A1_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "arifle_SCAR_L_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "arifle_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "arifle_SCAR_L_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "sgun_Mp153_classic_F": {
                    "magazinesVest": {
                        "4Rnd_12Gauge_Pellets": 14,
                    }
                },
                "sgun_Mp153_black_F": {
                    "magazinesVest": {
                        "4Rnd_12Gauge_Pellets": 14,
                    }
                },
                "sgun_M4_F": {
                    "magazinesVest": {
                        "8Rnd_12Gauge_Pellets": 7,
                    }
                },
                "sgun_HunterShotgun_01_F": {
                    "magazinesVest": {
                        "2Rnd_12Gauge_Pellets": 21,
                    }
                },
                "sgun_HunterShotgun_01_sawedoff_F": {
                    "magazinesVest": {
                        "2Rnd_12Gauge_Pellets": 21,
                    }
                },
                "arifle_SLR_V_lxWS": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_slr_reload_tracer_yellow_lxWS": 7,
                    }
                },
                "arifle_SLR_lxWS": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_slr_reload_tracer_yellow_lxWS": 7,
                    }
                },
                "JCA_smg_MP5_FL_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 7,
                    }
                },
                "JCA_smg_MP5_VFG_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 21,
                    }
                },
                "JCA_smg_UMP_black_F": {
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Mag": 21,
                    }
                },
                "JCA_smg_UMP_VFG_black_F": {
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Mag": 7,
                    }
                },
                "hgun_PDW2000_F": {
                    "magazinesVest": {
                        "30Rnd_9x21_Mag_v2": 7,
                    }
                },
                "SMG_02_F": {
                    "magazinesVest": {
                        "30Rnd_9x21_Mag_SMG_02": 7,
                    }
                },
                "SMG_03C_black": {
                    "magazinesVest": {
                        "50Rnd_570x28_SMG_03": 7,
                    }
                },
                "SMG_03C_TR_black": {
                    "magazinesVest": {
                        "50Rnd_570x28_SMG_03": 7,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
                "hgun_ACPC2_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
                "hgun_DEagle_classic_RF": {
                    "magazinesVest": {
                        "7Rnd_50AE_Mag_RF": 3,
                    },
                },
                "Aegis_hgun_P320_sand_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "Aegis_hgun_Pistol_R57_silver_F": {
                    "magazinesVest": {
                        "Aegis_20rnd_570x28_RP57_Mag": 3,
                    },
                },
                "hgun_Pistol_01_F": {
                    "magazinesVest": {
                        "10Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
                "": {},
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.9,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.1,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "75Rnd_762x39_Mag_F": 4,
                    },
                    "magazinesBackpack": {
                        "75Rnd_762x39_Mag_F": 4,
                    },
                },
                "Aegis_arifle_M4A1_grip_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_556x45_Drum_yellow": 2,
                        "30Rnd_556x45_Stanag": 4,
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_556x45_Drum_yellow": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
                "B_AssaultPackSpec_blk": 1,
                "B_AssaultPack_cbr": 1,
                "B_AssaultPackSpec_cbr": 1,
                "B_AssaultPack_rgr": 1,
                "B_AssaultPackSpec_rgr": 1,
                "B_FieldPack_blk": 1,
                "B_FieldPack_ardi": 1,
                "B_FieldPack_cbr": 1,
                "B_FieldPack_green_F": 1,
                "B_FieldPack_khk": 1,
                "B_FieldPack_oli": 1,
            },
        });
    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_762x54_Box_red": 4,
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_762x54_Box_tracer_red": 4,
                    },
                },
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_F": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_F": 4,
                    },
                },
                "arifle_RPK_F": {
                    "magazinesVest": {
                        "75Rnd_762x39_Mag_F": 4,
                    },
                    "magazinesBackpack": {
                        "75Rnd_762x39_Mag_F": 4,
                    },
                },
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
                        "Aegis_45Rnd_545x39_Mag_F": 6,
                    },
                    "magazinesBackpack": {
                        "Aegis_45Rnd_545x39_Mag_F": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "Aegis_arifle_SR25_MR_blk_F": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_SMAG": 7,
                    }
                },
                "srifle_DMR_06_camo_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 7,
                    }
                },
                "srifle_DMR_06_hunter_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 7,
                    }
                },
                "srifle_DMR_06_olive_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 7,
                    }
                },
                "arifle_SLR_V_lxWS": {
                    "magazinesVest": {
                        "20Rnd_762x51_slr_lxWS": 7,
                    }
                },
                "arifle_SLR_lxWS": {
                    "magazinesVest": {
                        "20Rnd_762x51_slr_lxWS": 7,
                    }
                },
                "Aegis_srifle_SVD_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 7,
                    }
                },
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Black": 1,
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
                "tacs_Backpack_Kitbag_Medic_Green": 1,
                "tacs_Backpack_Kitbag_Medic_Grey": 1,
                "tacs_Backpack_Kitbag_Medic_RGR": 1,
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
                "tacs_Backpack_Kitbag_Medic_Tan": 1,
            },
            "packs": [
                "t4_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_MRAWS_green_F": {
                    "magazinesBackpack": {
                        "MRAWS_HEAT55_F": 2,
                        "MRAWS_HE_F": 1,
                    },
                },
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HE_RF": 1,
                    },
                },
                "Aegis_launch_RPG7M_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HE_RF": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_blk": 1,
                "B_Kitbag_cbr": 1,
                "B_Kitbag_rgr": 1,
                "B_Kitbag_khk": 1,
                "B_Kitbag_sgg": 1,
                "B_Kitbag_tan": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
                "B_AssaultPackSpec_blk": 1,
                "B_AssaultPack_cbr": 1,
                "B_AssaultPackSpec_cbr": 1,
                "B_AssaultPack_rgr": 1,
                "B_AssaultPackSpec_rgr": 1,
                "B_FieldPack_blk": 1,
                "B_FieldPack_ardi": 1,
                "B_FieldPack_cbr": 1,
                "B_FieldPack_green_F": 1,
                "B_FieldPack_khk": 1,
                "B_FieldPack_oli": 1,
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
                "B_TacticalPack_khk": 1,
                "B_TacticalPack_rgr": 1,
                "B_TacticalPack_oli": 1,
                "B_TacticalPack_sgg": 1,
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
};
