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
                "t3_rifleman_medical",
            ],
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_rgr": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_rgr_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
            },
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_Headset_rgr_F": 1,
            "Aegis_H_Helmet_Virtus_rgr_F": 1,
            "H_Booniehat_oli": 1,
            "H_Cap_oli": 1,
        });

        @Primary({
            "weapons": {
                "arifle_CTAR_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 6,
                    },
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

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_CTAR_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 6,
                        "1Rnd_HEDP_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
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
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 5,
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

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
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
                "hgun_P07_blk_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_LegStrapBag_olive_F": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Headgear({
            "H_EarProtectors_red_F": 1,
            "H_EarProtectors_white_F": 1,
            "H_EarProtectors_orange_F": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 1,
                "V_Safety_yellow_F": 1,
            },
        });
    };
};
