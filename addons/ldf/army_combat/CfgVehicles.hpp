class CfgVehicles {
        class PCLASS(Base);
        class CLASS(Base): PCLASS(Base) {
            displayName = "LDF Base Army Combat";
            editorSubcategory = QGCLASS(army_combat);
            
            @Uniforms({
                "variants": {
                    "Atlas_U_E_SF_CombatUniformNCU_01_F": 0.5,
                    "Atlas_U_E_SF_CombatUniformNCU_02_F": 0.5,
                },
                "packs": [
                    "t2_rifleman_medical",
                ],
            });

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
                    "Atlas_H_PASGT_Cover_I_EAF_F": 1,
            });

            @Facewear({
                    "G_Headset_Tactical": 1,
                    "G_Headset_Tactical_grn": 1,
                    "G_Headset_Tactical_khk": 1,
                    "G_Headset_lxWS": 1,
                    "synixe_mgp_f_tactical": 1,
                    "Aegis_G_Condor_EyePro_F": 1,
                    "G_Combat_lxWS": 1,
                    "tacs_Goggles_Black": 1,
                    "tacs_Goggles_Green": 1,
                    "tacs_Goggles_Tan": 1,
                    "synixe_mgp_f_ess": 1,
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

        class CLASS(Rifleman): CLASS(Base) {
            @Role(Rifleman);

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
                    "arifle_Mk20_GL_black_F": {
                        "magazinesVest": {
                            "30Rnd_556x45_Stanag": 9,
                            "1Rnd_HEDP_Grenade_shell": 9,
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

        class CLASS(Machinegunner): CLASS(Autorifleman) {
            @Role(Machinegunner);

            @Primary({
                "weapons": {
                    "Aegis_MMG_FNMAG_240_F": {
                        "magazinesVest": {
                            "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 2,
                        },
                        "magazinesBackpack": {
                            "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
                        },
                    },
                },
                "optics": {
                    "optic_Arco_AK_blk_F": 1,
                },
            });

            @Backpacks({
                "variants": {
                    "B_AssaultPack_eaf_F": 1,
                },
            });
        };

        class CLASS(AsstMachinegunner): CLASS(Rifleman) {
            @Role(AsstMachinegunner);

            @Backpacks({
                "variants": {
                    "B_AssaultPack_eaf_F": 1,
                },
                "magazines": {
                    "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
                },
            });
        };

        class CLASS(Marksman): CLASS(Rifleman) {
            @Role(Marksman);

            @Primary({
                "weapons": {
                    "arifle_SPAR_03_blk_F": {
                        "magazinesVest": {
                            "20Rnd_762x51_Mag": 9,
                        }
                    }
                },
                "optics": {
                    "optic_DMS": 1,
                },
                "pointers": {
                    "Aegis_acc_pointer_DM": 1,
                },
                "bipod": {
                    "bipod_01_F_blk": 1,
                },
            });

            @Launchers({
                "weapons": {
                    "": 1,
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

        class CLASS(RiflemanAA): CLASS(Rifleman) {
            @Role(RiflemanAA);

            @Launchers({
                "weapons": {
                    "launch_I_Titan_eaf_F": {
                        "magazinesBackpack": {
                            "Titan_AA": 2,
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

        class CLASS(RiflemanHAT): CLASS(Rifleman) {
            @Role(RiflemanHAT);

            @Launchers({
                "weapons": {
                    "launch_I_Titan_short_F": {
                        "magazinesBackpack": { 
                            "Titan_AT": 2,
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

        class CLASS(Crewman): CLASS(Base) {
            @Role(Crewman);

            @Vests({
                "variants": {
                    "V_CarrierRigKBT_01_EAF_F": 1,
                },
                "packs": [
                    "t2_standard",
                ],
            });

            @Headgear({
                "H_HelmetCrew_I": 1,
            });

            @Primary({
                "weapons": {
                    "JCA_smg_UMP_black_F": {
                        "magazinesVest": {
                            "JCA_25Rnd_45ACP_UMP_Mag": 5,
                        }
                    },
                },
            });
        };

        class CLASS(HeliPilot): CLASS(Crewman) {
            @Role(HeliPilot);

            @Headgear({
                    "H_PilotHelmetHeli_Black_RF": 1,
                    "H_PilotHelmetHeli_MilGreen_RF": 1,
                    "H_PilotHelmetHeli_White_RF": 1,
            });

            @Vests({
                "variants": {
                    "Aegis_V_TacVest_RigB_grn_RF": 1,
                    "Aegis_V_TacVest_RigB_khk_RF": 1,
                    "Aegis_V_TacVest_RigB_oli_RF": 1,
                    
                },
                "packs": [
                    "t2_standard",
                ],
            });
        };

    };
