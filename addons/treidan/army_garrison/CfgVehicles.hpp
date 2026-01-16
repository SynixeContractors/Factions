class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Treidan Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_rbs_rbs": 1,
                "synixe_mgp_g3_fleece_rgr_rbs": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "V_PlateCarrier1_rgr_noflag_F": 1,
            },
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_rgr_F": 1,
            "H_Booniehat_oli": 1,
            "H_Cap_oli": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SA80_blk_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 7,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
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
                "arifle_SA80_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_black_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });

        @Secondary({
            "weapons": {
                "Aegis_hgun_P320_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
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
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_Headset_Tactical": 1,
            "H_HeadSet_black_F": 1,
            "H_HeadSet_olive_F": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "Aegis_hgun_P320_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_LegStrapBag_olive_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Headgear({
            "": 1,
            "H_EarProtectors_red_F": 1,
            "H_EarProtectors_white_F": 1,
            "H_EarProtectors_orange_F": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,
        });

        @Primary({
            "weapons": {
                "": 0.85,
                "arifle_SA80_blk_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 3,
                    },
                },
            },
        });

        @Vests({
            "variants": {
                "": 1,
                "V_Safety_blue_F": 1,
                "V_Safety_yellow_F": 1,
            },
        });
    };
};
