class CfgVehicles {
    #include "CfgVehicles_LUT.hpp"
    #include "CfgVehicles_RHIB.hpp"
    #include "CfgVehicles_Pandur.hpp"


    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "KAF Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_UniformBDU_01_m81_F": 1,
                "Atlas_U_UniformBDU_02_m81_F": 0.5,
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
                "arifle_SPAR_02_blk_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 6,
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
                "arifle_SPAR_01_GL_blk_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag_red",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.6,
                "optic_VRCO_RF": 0.4,
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
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Atlas_LMG_Negev_black_F": {
                    "magazinesVest": {
                        "Atlas_150Rnd_762x51_Box_Red": 2,
                    },
                    "magazinesBackpack": {
                        "Atlas_150Rnd_762x51_Box_Red": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
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
                "MMG_01_black_F": {
                    "magazinesVest": {
                        "150Rnd_93x64_Mag": 1,
                    },
                    "magazinesBackpack": {
                        "150Rnd_93x64_Mag": 2,
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
                "150Rnd_93x64_Mag": 4,
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
            "bipods": {
                "bipod_01_F_blk": 1,
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
                "arifle_SPAR_01_blk_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 4,
                    }
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "optics": {
                "Aegis_optic_ICO": 1,
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
                "arifle_SPAR_01_blk_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 5,
                    }
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "optics": {
                "Aegis_optic_ICO": 1,
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
                "Atlas_U_UniformBDU_01_m81_F": 1,
                "Atlas_U_UniformBDU_02_m81_F": 1,
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
                "JCA_smg_UMP_black_F": {
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Mag": 4,
                    }
                },
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

