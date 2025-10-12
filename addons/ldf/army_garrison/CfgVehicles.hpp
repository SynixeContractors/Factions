class CfgVehicles {
    class PCLASS(Base);
        class CLASS(Base): PCLASS(Base) {
            displayName = "LDF Base Army Garrison";
            editorSubcategory = QGCLASS(army_garrison);
            
            @Uniforms({
                "variants": {
                    "Atlas_U_E_SF_CombatUniformNCU_01_F": 0.5,
                    "Atlas_U_E_SF_CombatUniformNCU_02_F": 0.5,
                },
                "packs": [
                    "t2_rifleman_medical",
                ],
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
            "Atlas_H_FieldCap_ldf": 0.2,
            "H_Watchcap_ldf_hsless": 0.1,
            "Atlas_H_FieldCap_hs_ldf": 0.1,
        });

        @Primary({
            "weapons": {
                "arifle_Mk20_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
                "arifle_Mk20C_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "JCA_optic_MROS_black_magnifier": 1,
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

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Tracer_F": 4,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_Tracer_F": 4,
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
                "arifle_Mk20_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                    }
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
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
