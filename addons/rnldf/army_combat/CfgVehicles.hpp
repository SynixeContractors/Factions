class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_CombatUniformNCU_02_mcam_wdl_F": 0.5,
                "Atlas_U_CombatUniformNCU_01_mcam_wdl_F": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_PlateCarrier4_rgr_F": 0.5,
                "WSLV_Platecarrier_GRN_NF": 0.25,
                "V_MU_PlateCarrier2_2_rgr": 0.25,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_Cover_wdl_F": 0.6,
            "Aegis_H_Helmet_Virtus_Scrim_wdl_F": 0.4,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 0.25,
            "G_Shemag_tactical": 0.15,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.15,
            "synixe_mgp_f_face_shield_mc_tactical": 0.15,
            "synixe_mgp_f_face_shield_khk_tactical": 0.15,
            "synixe_mgp_f_face_shield_cb_tactical": 0.15,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_AUG_black_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_AUG_Mag_F": 9,
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
                "V_PlateCarrier1_rgr_noflag_F": 0.40,
                "V_PlateCarrier2_rgr_noflag_F": 0.30,
                "V_MU_PlateCarrier_green": 0.30,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
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

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AUG_GL_black_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_AUG_Mag_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
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
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "V_PlateCarrier1_rgr_noflag_F": 0.5,
                "V_MU_PlateCarrier_green": 0.25,
                "V_PlateCarrier2_rgr_noflag_F": 0.25,
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
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_762x54_Box_tracer_red": 4,
                    },
                },
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
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Vests({
            "variants": {
                "V_PlateCarrier1_rgr_noflag_F": 0.5,
                "V_MU_PlateCarrier_green": 0.25,
                "V_PlateCarrier2_rgr_noflag_F": 0.25,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "MMG_01_black_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_93x64_Mag_red": 2,
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_93x64_Mag_red": 3,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
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
                "B_AssaultPack_wdl_F": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
            },
            "magazines": {
                "ACE_150Rnd_93x64_Mag_red": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "V_PlateCarrier1_rgr_noflag_F": 0.5,
                "V_MU_PlateCarrier_green": 0.25,
                "V_PlateCarrier2_rgr_noflag_F": 0.25,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_SR25_MR_blk_F": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_SMAG": 9,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
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

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_MRAWS_green_F": {
                    "magazinesBackpack": {
                        "MRAWS_HEAT55_F": 2,
                        "MRAWS_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
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
                "B_Kitbag_wdl_F": 1,
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
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_wdl_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
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
                "B_TacticalPack_rgr": 1,
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
                "V_PlateCarrier4_rgr_F": 1,
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
                "JCA_smg_MP5_FL_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 5,
                    }
                },
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
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

