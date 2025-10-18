class CfgVehicles {
        class PCLASS(Base);
        class CLASS(Base): PCLASS(Base) {
            displayName = "LDF Base National Reserves";
            editorSubcategory = QGCLASS(natres);
            
            @Uniforms({
                "variants": {
                    "Atlas_U_UniformBDU_03_reservist_F": 1,
                    "Atlas_U_UniformBDU_04_reservist_F": 1,
                },
                "packs": [
                    "t2_rifleman_medical",
                ],
            });

            @Vests({
                "variants": {
                    "Atlas_V_OCarrierRig_CQB_oli_F": 1,
                    "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                    "Atlas_V_ORigLBV_oli_F": 0.5,
                },
                "packs": [
                    "t2_standard",
                ],
            });

            @Headgear({
                    "Atlas_H_PASGT_Cover_I_EAF_R_F": 1,
                    "Atlas_H_FieldCap_pantera": 0.2,
                    "Atlas_H_FieldCap_hs_pantera": 0.2,
            });

            @Facewear({
                    "G_Headset_lxWS": 1,
                    "synixe_mgp_f_tactical": 1,
                    "Aegis_G_Condor_EyePro_F": 1,
                    "G_Combat_lxWS": 1,
                    "tacs_Goggles_Black": 1,
                    "tacs_Goggles_Green": 1,
                    "tacs_Goggles_Tan": 1,
                    "synixe_mgp_f_ess": 1,
            });
        };

        class CLASS(Rifleman): CLASS(Base) {
            @Role(Rifleman);

            @Primary({
                "weapons": {
                    "Aegis_arifle_M16A4_F": {
                        "probability": 1,
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        }
                    },
                    "Aegis_arifle_M16A4_FG_F": {
                        "probability": 1,
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        }
                    },
                    "Aegis_arifle_M4A1_F": {
                        "probability": 0.5,
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        }
                    },
                    "Aegis_arifle_M4A1_grip_F": {
                        "probability": 0.5,
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        }
                    },
                    "Aegis_arifle_M4A1_short_F": {
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        }
                    },
                },
                "optics": {
                    "JCA_optic_MROS_black_magnifier": 1,
                    "JCA_optic_MROS_black": 1,
                },
                "pointers": {
                    "saber_light_lxWS": 1,
                    "Aegis_acc_pointer_DM": 0.2,
                },
            });

            @Launchers({
                "weapons": {
                    "": 0.95,
                    "JCA_launch_M72_olive_F": {
                        "probability": 0.05,
                        "loadedPrimary": "JCA_M72_HEAT_F",
                    },
                },
            });
        };

        class CLASS(SquadLeader): CLASS(Rifleman) {
            @Role(SquadLeader);

            @Primary({
                "weapons": {
                    "Aegis_arifle_M4A1_F": {
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        },
                    },
                    "Aegis_arifle_M4A1_grip_F": {
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        },
                    },
                    "Aegis_arifle_M4A1_short_F": {
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                        }
                    },
                },
                "optics": {
                    "JCA_optic_MROS_black_magnifier": 1,
                    "JCA_optic_MROS_black": 1,
                },
                "pointers": {
                    "saber_light_lxWS": 0.6,
                    "Aegis_acc_pointer_DM": 0.4,
                },
            });

            @Launchers({
                "weapons": {
                    "": 1,
                },
            });
        };

        class CLASS(TeamLeader): CLASS(SquadLeader) {
            @Role(TeamLeader);

            @Primary({
                "weapons": {
                    "Aegis_arifle_M4A1_GL_F": {
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                            "1Rnd_HEDP_Grenade_shell": 9,
                        }
                    },
                },
                "optics": {
                    "JCA_optic_MROS_black_magnifier": 1,
                    "JCA_optic_MROS_black": 1,
                },
                "pointers": {
                    "saber_light_lxWS": 0.6,
                    "Aegis_acc_pointer_DM": 0.4,
                },
            });

            @Launchers({
                "weapons": {
                    "": 1,
                },
            });
        };

        class CLASS(Autorifleman): CLASS(Base) {
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
            
            @Backpacks({
                "variants": {
                    "B_AssaultPack_eaf_F": 1,
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

        class CLASS(RiflemanAT): CLASS(Rifleman) {
            @Role(RiflemanAT);

            @Launchers({
                "weapons": {
                    "Atlas_Launch_Pzf3_F": {
                        "magazinesBackpack": {
                            "Atlas_DM12_HEAT_F": 2,
                            "Atlas_DM32_HEAT_MP_F": 1,
                        },
                    },
                },
            });

            @Backpacks({
                "variants": {
                    "B_Kitbag_eaf_F": 1,
                },
            });
        };

        class CLASS(RadioOperator): CLASS(Rifleman) {
            @Role(RadioOperator);

            @Backpacks({
                "variants": {
                    "B_RadioBag_01_eaf_F": 1,
                },
            });
        };

        class CLASS(Engineer): CLASS(Rifleman) {
            @Role(Engineer);

            @Backpacks({
                "variants": {
                    "B_AssaultPack_eaf_F": 1,
                },
                "packs": [
                    "toolkit",
                ],
            });
        };

        class CLASS(Demolitions): CLASS(Rifleman) {
            @Role(Demolitions);

            @Backpacks({
                "variants": {
                    "B_TacticalPack_eaf_F": 1,
                },
                "packs": [
                    "eod",
                    "demo",
                ],
            });

            @Secondary({
                "weapons": {
                    "ACE_VMH3": {},
                },
            });
        };
    };
