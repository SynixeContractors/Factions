class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Blackmire Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_01_ardi_half_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_half_F": 1,
                "Atlas_U_O_Afghanka_01_ruarid_F": 1,
                "Atlas_U_O_Afghanka_02_ruarid_F": 1,
                "Atlas_U_O_Afghanka_01_rutaiga_F": 1,
                "Atlas_U_O_Afghanka_02_rutaiga_F": 1,
                "Atlas_U_O_Afghanka_01_khk_F": 1,
                "Atlas_U_O_Afghanka_02_khk_F": 1,
                "Atlas_U_O_Afghanka_01_whex_F": 1,
                "Atlas_U_O_Afghanka_02_whex_F": 1,
            },
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_whex_F": 1,
                "Atlas_V_OCarrierRig_CQB_WHex_F": 1,
                "Atlas_V_OCarrierRig_Lite_khk_F": 1,
                "Atlas_V_OCarrierRig_CQB_khk_F": 1,
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_HelmetLuchnik_cover_whex_F": 1,
            "H_HelmetLuchnik_cover_ardi_F": 1,
            "H_HelmetLuchnik_cover_rutaiga_F": 1,
            "H_HelmetLuchnik_cover_ruarid_F": 1,
            "H_HelmetLuchnik_headset_khk_F": 1,
            "H_HelmetLuchnik_headset_grn_F": 1,
        });

        @Facewear({
            "G_Balaclava_oli": 1,
            "G_Balaclava_oli_lxWS": 1,
            "G_Balaclava_light_blk_F": 1,
            "G_Balaclava_blk": 1,
        });

        @Assigned(Military);

        @Primary({
            "weapons": {
                "arifle_AK12U_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AKS_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "Aegis_arifle_AKS74_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "Aegis_arifle_AK74_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "Aegis_arifle_AKM74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AK12_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AK12_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                    }
                },
                "arifle_AK12U_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                    }
                },
                "Aegis_arifle_AK103_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                    }
                },
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                    }
                },
                "arifle_AKM_FL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                    }
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 0.5,
                "Aegis_optic_ACOG": 0.5,
            },
            "pointers": {
                "saber_light_lxWS": 2,
                "Aegis_acc_pointer_DM": 1,
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

    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_Pistol_01_F": {
                    "magazinesVest": {
                        "10Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "arifle_AK12_GL_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_AKM74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_AK74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_AK74_GL_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 0.5,
                "Aegis_optic_ACOG": 0.5,
            },
            "pointers": {
                "saber_light_lxWS": 2,
                "Aegis_acc_pointer_DM": 1,
            },
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
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
                "": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 0.5,
                "Aegis_optic_ACOG": 0.5,
            },
            "pointers": {
                "saber_light_lxWS": 2,
                "Aegis_acc_pointer_DM": 1,
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

    class CLASS(Machinegunner): CLASS(Base) {
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
                "": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 0.5,
                "Aegis_optic_ACOG": 0.5,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_Pistol_01_F": {
                    "magazinesVest": {
                        "10Rnd_9x21_Mag": 3,
                    },
                },
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
                "B_AssaultPack_wdl_F": 1,
            },
            "magazines": {
                "100Rnd_762x51_S77_Yellow_lxWS": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "Aegis_srifle_SVD_blk_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 9,
                    }
                },
                "Aegis_srifle_SVD_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 9,
                    }
                },
                "Aegis_srifle_SVD_plum_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 9,
                    }
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_Pistol_01_F": {
                    "magazinesVest": {
                        "10Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
                "tacs_Backpack_Kitbag_Medic_Tan": 1,
                "tacs_Backpack_Kitbag_Medic_RGR": 1,
                "tacs_Backpack_Kitbag_Medic_Green": 1,
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t3_medic",
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
                        "PSRL1_HEAT_RF": 1,
                    },
                },
                "Aegis_launch_RPG7M_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
                "launch_RPG32_camo_F": {
                    "magazinesBackpack": {
                        "RPG32_HE_F": 2,
                        "RPG32_F": 1,
                    },
                },
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_HE_F": 2,
                        "RPG32_F": 1,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
                "B_RadioBag_01_whex_F": 1,
                "B_RadioBag_01_taiga_F": 1,
                "B_RadioBag_01_arid_F": 1,
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
                "B_TacticalPack_rgr": 1,
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

        @Vests({
            "variants": {
                "V_lxWS_TacVestIR_oli": 1,
                "V_HarnessOSpec_brn": 1,
                "V_HarnessOSpec_oicamo": 1,
                "V_HarnessOSpec_whex_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_Tank_black_F": 1,
            "lxWS_H_Tank_tan_F": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AK12U_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AKS_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                    }
                },
                "arifle_AK12U_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                    }
                },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 0.5,
                },
            "pointers": {
                "saber_light_lxWS": 2,
                "Aegis_acc_pointer_DM": 1,
                },
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_Pistol_01_F": {
                    "magazinesVest": {
                        "10Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_Black_RF": 1,
            "H_PilotHelmetHeli_MilGreen_RF": 1,
            "H_PilotHelmetHeli_White_RF": 1,
        });
    };
};
