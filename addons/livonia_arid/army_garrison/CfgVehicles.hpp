class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Livonia Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);
        
        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_arid_F": 0.5,
                "U_I_E_Uniform_01_arid_shortsleeve_F": 0.5,
                "U_I_L_Uniform_01_camo_F": 0.1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_EAF_F": 1,
                "V_CarrierRigKBT_01_light_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_Beret_EAF_01_green": 0.6,
            "Aegis_H_MilCap_nohs_eaf_arid": 0.2,
            "H_MilCap_eaf_arid": 0.1,
            "H_Cap_eaf_arid_F": 0.1,
            "H_Cap_eaf_arid_hs_F": 0.1,
            "Atlas_H_FieldCap_hs_ldf": 0.1,
        });

        @Primary({
            "weapons": {
                "arifle_MSBS65_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 7,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                    },
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
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

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_MSBS65_GL_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 5,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "synixe_armoury_30Rnd_65x39_EPR_MSBS",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "synixe_armoury_200Rnd_65x39_EPR_Belt": 4,
                    },
                    "magazinesBackpack": {
                        "synixe_armoury_200Rnd_65x39_EPR_Belt": 4,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
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
                "t2_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_coveralls_F": 1,
            },
        });

        @Headgear({
            "H_Headset_Tactical": 1,
            "H_Headset_Tactical_grn": 1,
            "H_Headset_Tactical_khk": 1,
            "Atlas_H_FieldCap_hs_ldf": 1,
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
            "H_Headset_Tactical": 1,
            "H_Headset_Tactical_grn": 1,
            "H_Headset_Tactical_khk": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,
            "Atlas_H_FieldCap_hs_ldf": 1,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 1,
                "V_Safety_yellow_F": 1,
            },
        });

        @Primary({
            "weapons": {
                "": 0.85,
                "arifle_MSBS65_camo_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 7,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                    },
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
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
