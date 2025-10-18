class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_m81_m81": 0.5,
                "synixe_mgp_g3_tshirt_blk_m81": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "HandGrenade": 1,
            },
        });

        @Headgear({
            "H_HelmetB_plain_wdl": 0.2,
            "H_HelmetSpecB_wdl": 0.2,
            "H_HelmetB_camo_wdl": 0.4,
            "synixe_mgp_h_cap_m81_earphones": 0.2,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 0.2,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.2,
            "synixe_mgp_f_face_shield_rgr": 0.2,
            "synixe_mgp_f_face_shield_blk": 0.2,
            "synixe_mgp_f_face_shield_blk_tactical": 0.2,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_M4A1_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                    },
                },
                "Aegis_arifle_M4A1_grip_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.6,
                "optic_VRCO_RF": 0.4,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "": 0.5,
                "suppressor_l_lxWS": 0.5,
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "HandGrenade": 1,
                "SmokeShellRed": 1,
                "SmokeShellPurple": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Aegis_arifle_M4A1_GL_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.6,
                "optic_VRCO_RF": 0.4,
            },
            "pointers": {
                "acc_pointer_IR": 0.4,
            },
            "muzzles": {
                "": 0.4,
                "suppressor_l_lxWS": 0.6,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "ACE_200Rnd_556x45_Box_tracer_green": 2,
                    },
                    "magazinesBackpack": {
                        "ACE_200Rnd_556x45_Box_tracer_green": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 0.5,
                "": 0.5,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
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
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_F": {
                    "magazinesVest": {
                        "Aegis_200Rnd_762x51_MAG_Green_Tracer_F": 1,
                    },
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Green_Tracer_F": 2,
                    },
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
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
                "B_Kitbag_wdl_F": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Green_Tracer_F": 4,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_SPAR_03_blk_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "suppressor_h_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
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

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Launchers({
            "weapons": {
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
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

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

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

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "probability": 0.5,
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
                "launch_O_Vorona_green_F": {
                    "probability": 0.5,
                    "magazinesBackpack": { 
                        "Vorona_HEAT": 2,
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

        @Primary({
            "weapons": {
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 4,
                    }
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "optics": {
                "Aegis_optic_ICO": 0.5,
            },
        });

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

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

        @Primary({
            "weapons": {
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 4,
                    }
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "optics": {
                "Aegis_optic_ICO": 0.5,
            },
        });

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

        @Uniforms({
            "variants": {
                "synixe_mgp_g3_fleece_rgr_m81": 0.5,
                "synixe_mgp_g3_tshirt_blk_m81": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Rangemaster_belt": 1,
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
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 4,
                    }
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "optics": {
                "Aegis_optic_ICO": 0.5,
                "": 0.5,
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_B": 0.3,
            "H_CrewHelmetHeli_B": 0.5,
            "H_PilotHelmetHeli_B_visor_up": 0.2,
        });
    };

};

