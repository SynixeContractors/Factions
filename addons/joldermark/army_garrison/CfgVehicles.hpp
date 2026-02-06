class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Joldermark Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "U_O_R_officer_noInsignia_taiga_F": 1,
                "Opf_U_O_S_Uniform_01_taiga_F": 1,
                "Aegis_U_O_LightCombatFatigues_rutaiga_F": 1,
                "Atlas_U_O_Afghanka_01_rutaiga_F": 1,
                "Atlas_U_O_Afghanka_02_rutaiga_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Headgear({
            "Aegis_H_Milcap_nohs_taiga_F": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AUG_GL_black_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_AUG_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_556x45_AUG_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
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
