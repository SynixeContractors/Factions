class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "BMS Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

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
                "Atlas_V_ORigLBV_Whex_F": 1,
                "Atlas_V_ORigLBV_khk_F": 1,
                "Atlas_V_ORigLBV_oli_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_Beret_ocamo": 1,
            "H_Beret_CSAT_01_F": 1,
            "Atlas_H_MilCap_nohs_whex_F": 1,
            "H_MilCap_whex_F": 1,
            "Aegis_H_Milcap_nohs_taiga_F": 1,
            "Aegis_H_MilCap_tachs_taiga_F": 1,
            "H_MilCap_taiga": 1,
            "H_Booniehat_taiga": 1,
            "H_Booniehat_taiga_hs": 1,
            "H_Booniehat_whex_hs_F": 1,
            "H_Watchcap_flora": 1,
            "H_Watchcap_blk": 1,
            "H_Watchcap_black_hsless": 1,
            "H_Watchcap_camo": 1,
            "H_Watchcap_grey_hsless": 1,
            "H_Watchcap_blu_hsless": 1,
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
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "arifle_AKS_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AKS74_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AK74_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AKM74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "arifle_AK12_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "arifle_AK12_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                    }
                },
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 7,
                    }
                },
                "arifle_AK12U_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 7,
                    }
                },
                "Aegis_arifle_AK103_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 7,
                    }
                },
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 7,
                    }
                },
                "arifle_AKM_FL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 7,
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
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "arifle_AK12_GL_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "arifle_AK12_GL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "Aegis_arifle_AKM74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "Aegis_arifle_AK74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "Aegis_arifle_AK74_GL_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
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

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "75Rnd_762x39_Mag_F": 4,
                    },
                },
                "arifle_RPK_F": {
                    "magazinesVest": {
                        "75Rnd_762x39_Mag_F": 4,
                    },
                },
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
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
    };

    class CLASS(Medic): CLASS(Rifleman) {
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

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_Headset_Tactical": 0.4,
            "H_Headset_Tactical_grn": 0.3,
            "H_Headset_Tactical_khk": 0.3,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Primary({
            "weapons": {
                "": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 8,
                "hgun_Rook40_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_Pistol_01_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "10Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Messenger_Olive_F": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Worker): CLASS(Maintainer) {
        @Role(Worker);

        @Headgear({
            "H_Headset_Tactical": 0.2,
            "H_Headset_Tactical_grn": 0.2,
            "H_Headset_Tactical_khk": 0.2,
            "H_Construction_earprot_white_F": 0.2,
            "H_Construction_earprot_yellow_F": 0.2,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 0.5,
                "V_Safety_yellow_F": 0.5,
            },
        });

        @Primary({
            "weapons": {
                "": 5,
                "arifle_AK12U_545_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "arifle_AKS_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "Aegis_arifle_AKS74_oak_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "Aegis_arifle_AK74_oak_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "Aegis_arifle_AKM74_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "arifle_AK12_545_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "arifle_AK12_545_tan_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "arifle_AK12_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 5,
                    }
                },
                "arifle_AK12U_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 5,
                    }
                },
                "Aegis_arifle_AK103_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 5,
                    }
                },
                "arifle_AKM_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 5,
                    }
                },
                "arifle_AKM_FL_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 5,
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
};
