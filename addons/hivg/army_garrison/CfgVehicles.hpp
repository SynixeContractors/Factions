class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "NGHI Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);
        
        @Uniforms({
            "variants": {
                "Atlas_U_UniformBDU_02_HI_F": 1,
                "Atlas_U_UniformBDU_01_HI_F": 1,
                "Atlas_U_B_H_Soldier_F": 1,
                "Atlas_U_B_H_Soldier_2_F": 1,
                "Atlas_U_B_H_Soldier_3_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_jungle": 1,
            "H_Booniehat_jungle_hs": 1,
            "Atlas_H_MilCap_nohs_jungle": 1,
            "Atlas_H_MilCap_tachs_Jungle": 1,
            "H_MilCap_jungle": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Shemag_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
                "arifle_SCAR_L_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
                "arifle_SCAR_L_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_40mm_HE_lxWS": 3,
                    }
                },
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_40mm_HE_lxWS": 3,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "arifle_SCAR_L_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_HEDP_Grenade_shell": 3,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_40mm_HE_lxWS": 2,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_40mm_HE_lxWS": 2,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(Autorifleman): CLASS(TeamLeader) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Tracer_F": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_t3_medic",
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

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_ACPC2_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Messenger_Coyote_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
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
                "": 0.85,
                "arifle_SCAR_L_grip_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
                "arifle_SCAR_L_short_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
                "arifle_SCAR_L_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_40mm_HE_lxWS": 3,
                    }
                },
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "1Rnd_40mm_HE_lxWS": 3,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_ACPC2_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };
};
