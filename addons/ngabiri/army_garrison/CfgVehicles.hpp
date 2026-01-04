class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Nyrland Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "U_lxWS_SFIA_soldier_2_O": 0.3,
                "U_lxWS_SFIA_soldier_1_O": 0.7,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "synixe_mgp_f_face_shield_khk_shemagh_rgr": 0.2,
            "synixe_mgp_f_face_shield_blk_shemagh_khk": 0.2,
            "synixe_mgp_f_shemagh_khk": 0.1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Aegis_V_PlateCarrier2_alt_cbr": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Headgear({
            "H_HelmetLuchnik_cover_sfia_F": 0.2,
            "H_HelmetLuchnik_headset_brn_F": 0.2,
            "H_Booniehat_khk": 0.3,
            "H_Beret_Headset_lxWS": 0.3,
            
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_AKM74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 6,
                    },
                },
            },
            "optics": {
                "": 0.4,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Aegis_arifle_AKM74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Tracer_Green_F": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_545x39_Mag_Tracer_Green_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_1p87": 0.5,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
                        "Aegis_45Rnd_545x39_Mag_Tracer_Green_F": 4,
                    }
                }
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
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

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
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
            "H_HeadSet_olive_F": 0.3,
            "H_HeadSet_black_F": 0.3,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_Rook40_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Headgear({
            "H_EarProtectors_black_F": 0.3,
            "H_Construction_earprot_white_F": 0.4,
            "H_Construction_earprot_yellow_F": 0.4,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 0.5,
                "V_Safety_yellow_F": 0.5,
            },
        });
    };
};
