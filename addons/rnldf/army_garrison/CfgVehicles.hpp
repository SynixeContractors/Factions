class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Atlas_U_CombatUniformNCU_02_mcam_wdl_F": 0.5,
                "Atlas_U_CombatUniformNCU_01_mcam_wdl_F": 0.5,
            },
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        @Facewear({
            "synixe_mgp_f_tactical": 0.3,
            "G_Headset_light": 0.2,
            "G_Shemag_tactical": 0.1,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.1,
            "synixe_mgp_f_face_shield_mc_tactical": 0.1,
            "synixe_mgp_f_face_shield_khk_tactical": 0.1,
            "synixe_mgp_f_face_shield_cb_tactical": 0.1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "WSLV_Platecarrier_GRN_NF": 0.25,
                "V_MU_PlateCarrier2_2_rgr": 0.25,
                "V_PlateCarrier4_rgr_F": 0.5,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Headgear({
            "H_Beret_gen_F": 0.6,
            "H_Booniehat_woodland": 0.2,
            "H_Watchcap_wdl_hsless": 0.1,
            "H_Watchcap_wdlkhk_hsless": 0.1,
        });

        @Primary({
            "weapons": {
                "arifle_AUG_black_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_AUG_Mag_F": 5,
                    }
                },
            },
            "optics": {
                "optic_Hamr": 0.6,
                "optic_MRCO": 0.2,
                "optic_Holosight_blk_F": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AUG_GL_black_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_AUG_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
            },
            "optics": {
                "optic_Hamr": 0.6,
                "optic_MRCO": 0.2,
                "optic_Holosight_blk_F": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "V_MU_PlateCarrier_green": 0.25,
                "V_PlateCarrier2_rgr_noflag_F": 0.25,
                "V_PlateCarrier1_rgr_noflag_F": 0.5,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_762x54_Box_red": 4,
                    }
                }
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
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

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_G17_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
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
                "arifle_AUG_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_556x45_AUG_Mag_F": 5,
                    }
                },
            },
            "optics": {
                "optic_Hamr": 0.6,
                "optic_MRCO": 0.2,
                "optic_Holosight_blk_F": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_G17_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
    };
};
