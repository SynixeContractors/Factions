class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "VDF Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 0.25,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 0.25,
                "Atlas_U_I_Afghanka_01_ardi_half_F": 0.25,
                "Atlas_U_I_Afghanka_02_ardi_half_F": 0.25,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 0.25,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.25,
            "G_Balaclava_blk": 0.25,
            "G_Bandanna_blk": 0.25,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_CQB_ardi_F": 0.25,
                "Atlas_V_OCarrierGora_Lite_ardi_F": 0.25,
                "Atlas_V_OCarrierGora_CQB_grn_F": 0.25,
                "Atlas_V_OCarrierGora_Lite_grn_F": 0.25,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "HandGrenade": 1,
            },
        });

        @Headgear({
            "H_I_Helmet_canvas_Green": 0.4,
            "Aegis_H_MilCap_tachs_grn_F": 0.2,
            "tacs_Hat_Boonie_RangerGreen": 0.2,
            "H_Watchcap_camo": 0.2,
        });

        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                    }
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.5,
                "": 0.5,
            },
            "pointers": {
                "saber_light_lxWS": 1,
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

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_CQB_ardi_F": 0.25,
                "Atlas_V_OCarrierGora_Lite_ardi_F": 0.25,
                "Atlas_V_OCarrierGora_CQB_grn_F": 0.25,
                "Atlas_V_OCarrierGora_Lite_grn_F": 0.25,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
                "HandGrenade": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                        "30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F": 2,
                    }
                },
            },
            "optics": {
                "optic_Arco_AK_blk_F": 0.5,
                "Aegis_optic_ICO": 0.5,
            },
            "pointers": {
                "saber_light_lxWS": 1,
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
                "arifle_AK12_GL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    }
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.5,
                "": 0.5,
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
                "Atlas_V_OCarrierGora_CQB_ardi_F": 0.25,
                "Atlas_V_OCarrierGora_Lite_ardi_F": 0.25,
                "Atlas_V_OCarrierGora_CQB_grn_F": 0.25,
                "Atlas_V_OCarrierGora_Lite_grn_F": 0.25,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "SmokeShell": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_RPK12_F": {
                    "magazinesVest": {
                        "75rnd_762x39_AK12_Mag_Tracer_F": 4,
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
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
        
        @Launchers({
            "weapons": {
                "": 1,
            },
        });
    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "LMG_S77_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Green_Tracer_lxWS": 3,
                    },
                    "magazinesBackpack": {
                        "100Rnd_762x51_S77_Green_Tracer_lxWS": 2,
                    },
                },
            },
            "pointers": {
                "saber_light_lxWS": 1,
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

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
            "magazines": {
                "100Rnd_762x51_S77_Green_Tracer_lxWS": 6,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_01_black_RF": {
                    "magazinesVest": {
                        "Aegis_10Rnd_762x54_SVD_Green_Mag_F": 9,
                    }
                }
            },
            "optics": {
                "optic_DMS": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
            "bipod": {
                "bipod_02_F_blk": 1,
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
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_NLAW_F": {
                    "loadedPrimary": 
                        "NLAW_F",
                },
            },
        });

    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Vorona_green_F": {
                    "magazinesBackpack": { 
                        "Vorona_HEAT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_LegStrapBag_olive_F": 1,
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
                "B_FieldPack_green_F": 1,
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
                "V_ChestrigF_rgr": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_Tank_black_F": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_MP5_FL_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 4,
                    }
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_O_visor_up": 0.3,
            "H_PilotHelmetHeli_O": 0.4,
            "H_CrewHelmetHeli_O": 0.3,
        });
    };

};

