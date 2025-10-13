class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "BDF Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);
        
        @Uniforms({
            "variants": {
                "Atlas_U_CombatUniformNCU_01_mcam_F": 1,
                "Atlas_U_CombatUniformNCU_02_mcam_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Headgear({
            "H_Beret_ocamo": 1,
            "H_Cap_headphones_rvs_tan": 1,
            "H_Cap_headphones_tan": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 0.25,
            "G_Shemag_tactical": 0.15,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.15,
            "synixe_mgp_f_face_shield_mc_tactical": 0.15,
            "synixe_mgp_f_face_shield_khk_tactical": 0.15,
            "synixe_mgp_f_face_shield_cb_tactical": 0.15,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_khk_F": 1,
                "Atlas_V_OCarrierRig_CQB_khk_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_AK12_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
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
                "Atlas_V_OCarrierRig_CQB_alt_khk_F": 1,
                "Atlas_V_OCarrierRig_Lite_alt_khk_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "Aegis_arifle_AK74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(TeamLeader) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_RPK12_545_tan_F": {
                    "magazinesVest": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                    "magazinesBackpack": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                },
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                    "magazinesBackpack": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_MTP": 1,
            },
            "packs": [
                "t2_medic",
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
            "": 0.85,
            "weapons": {
                "probability": 0.15,
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Messenger_Coyote_F": 1,
            },
            "packs": [
                "toolkit",
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
                "arifle_AK12_545_tan_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Secondary({
            "": 0.85,
            "weapons": {
                "hgun_Rook40_F": {
                "probability": 0.15,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
    };
};
