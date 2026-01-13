class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Viatka Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F":1,
                "Atlas_U_I_Afghanka_02_ardi_full_F":1,
                "Atlas_U_I_Afghanka_01_ardi_half_F":1,
                "Atlas_U_I_Afghanka_02_ardi_half_F":1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "G_Balaclava_blk": 1,
            "synixe_mgp_f_face_shield_blk": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_CQB_grn_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Milcap_nohs_grn_F": 1,
            "tacs_Hat_Boonie_RangerGreen": 1,
            "H_Watchcap_camo": 1,
            "H_Beret_Headset_lxWS": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                    }
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
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
                "arifle_AK12_GL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_Green_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_CQB_grn_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_RPK12_F": {
                    "magazinesVest": {
                        "75rnd_762x39_AK12_Mag_Tracer_F": 5,
                    },
                },
            },
            "optics": {
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
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
                "hgun_G17_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
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
    };
};
