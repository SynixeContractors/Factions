class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Swift Response Battalions";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Opf_U_B_P_FieldJacket_01_F": 1,
                "Opf_U_B_P_FieldJacket_02_F": 1,
                "Opf_U_B_P_FieldJacket_03_F": 1,
                "Opf_U_B_P_Uniform_01_F": 1,
                "Opf_U_B_P_Uniform_01_Shortsleeve_F": 1,
                "U_I_C_Soldier_Para_2_F": 1,
                "U_I_C_Soldier_Para_3_F": 1,
                "U_I_C_Soldier_Para_5_F": 1,
                "U_I_C_Soldier_Para_4_F": 1,
                "U_I_C_Soldier_Para_1_F": 1,
                "U_MU_I_CombatUniform_para": 1,
                "U_MU_I_CombatUniform_para_vest": 1,
                "U_MU_B_GuerillaGarment6_tank_g": 1,
                "U_MU_B_GuerillaGarment6_tank": 1,
                "U_MU_B_GuerillaGarment6_brown": 1,
                "U_MU_B_GuerillaGarment6_dirty": 1,
                "U_MU_B_GuerillaGarment6_grey": 1,
                "U_MU_B_GuerillaGarment6_green": 1,
                "U_MU_B_GuerillaGarment6_olive": 1,
                "U_MU_B_GuerillaGarment6_skull": 1,
                "U_MU_B_GuerillaGarment6": 1,
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
            "H_PASGT_basic_green_F": 1,
            "H_PASGT_basic_sand_F": 1,
            "Atlas_H_PASGT_Cover_HIMF_F": 1,
            "V_TacVest_camo": 1,
            "H_PASGT_basic_black_F": 1,
            "H_PASGT_basic_olive_F": 1,
            "Atlas_H_PASGT_Cover_wdl_F": 1,
            "Atlas_H_PASGT_Cover_I_EAF_F": 1,
            "H_PASGT_neckprot_black_F": 1,
            "lxWS_H_ssh40_black": 1,
            "lxWS_H_ssh40_green": 1,
            "lxWS_H_ssh40_sand": 1,
            "H_Beret_blk": 1,
            "H_Beret_grn": 1,
            "H_Beret_blk_POLICE": 1,
            "H_Beret_red": 1,
            "H_Booniehat_jungle": 1,
            "H_Booniehat_flecktarn": 1,
            "Aegis_H_Milcap_nohs_wdl_F": 1,
            "H_Cap_eaf_F": 1,
            "Aegis_H_Milcap_nohs_eaf_F": 1,
            "Atlas_H_MilCap_nohs_whex_F": 1,
            "lxWS_H_turban_04_sand": 1,
            "lxWS_H_turban_02_sand": 1,
            "lxWS_H_turban_03_sand": 1,
            "lxWS_H_turban_01_sand": 1,
            "lxWS_H_turban_04_green": 1,
            "lxWS_H_turban_02_green": 1,
            "lxWS_H_turban_03_green": 1,
            "lxWS_H_turban_01_green": 1,
            "": 1,
        });

        @Facewear({
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
            },
            "optics": {
                "": 8,
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 9,
                "launch_RPG7_F": {
                    "probability": 1,
                    "loadedPrimary": "PSRL1_AT_RF",
                },
                "Aegis_launch_RPG7M_F": {
                    "probability": 1,
                    "loadedPrimary": "PSRL1_AT_RF",
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
                "": 8,
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
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
                "LMG_S77_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 2,
                    },
                    "magazinesBackpack": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 4,
                    },
                },
                "LMG_S77_Compact_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 2,
                    },
                    "magazinesBackpack": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 4,
                    },
                },
            },
            "optics": {
                "": 8,
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
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

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

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
            "magazines": {
                "100Rnd_762x51_S77_Yellow_lxWS": 4,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
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
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
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

    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        @Headgear({
            "H_Tank_black_F": 1,
            "lxWS_H_Tank_tan_F": 1,
        });
    };
};
