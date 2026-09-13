class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Courdane Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_combat_olive_F": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_mgrn": 1,
            "synixe_mgp_h_cap_rgr": 1,
            "H_Watchcap_camo": 1,
        });

        @Facewear({
            "": 1,
            "synixe_mgp_f_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "lot_SCAR_L_grip_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "lot_SCAR_L_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "JCA_30Rnd_556x45_PMAG",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Red_F": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_Red_F": 2,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_Headset_Tactical": 1,
            "H_Watchcap_camo": 1,
            "": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "JCA_hgun_P226_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_LegStrapBag_black_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Headgear({
            "H_EarProtectors_black_F": 1,
            "H_EarProtectors_yellow_F": 1,
            "H_EarProtectors_white_F": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 1,
                "V_Safety_yellow_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "JCA_hgun_P226_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 3,
                    },
                },
            },
        });
    };
};
