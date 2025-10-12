class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "JSR Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Uniforms({
            "variants": {
              "tacs_Uniform_combat_LS_ATACS_IX": 0.75,
              "tacs_Uniform_Combat_RS_ATACS_IX": 0.25,
            },
            "packs": [
                "t2_rifleman_medical",
                "t2_standard",
            ],
        });
        @Vests({
            "variants": {
                "V_TacVest_grn": 0.95,
                "V_PlateCarrierIA2_grn": 0.05,
            },
            "magazines": {
                "HandGrenade": 1,
                "SmokeShell": 1,
            },
        });
        @Headgear({
            "tacs_Helmet_modular_FG": 0.79,
            "tacs_Helmet_Modular_Ear_FG": 0.1,
            "tacs_Helmet_Modular_Headset_FG": 0.1,
            "tacs_Helmet_Modular_Chops_FG": 0.01,
        });
        @Facewear({
            "": 0.95,
            "G_Bandanna_oli": 0.05,
        });
        @Primary({
            "weapons": {
                "arifle_NCAR15_F": {
                    "probability": 0.95,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                    },
                },
                "arifle_NCAR15B_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                      "30Rnd_580x42_Mag_F": 8,
                    },
                },
            },
            "optics": {
                "": 0.85,
                "Aegis_optic_1p87": 0.1,
                "optic_LRCO_blk_F": 0.05,
            },
       });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);
        @Primary({
            "weapons": {
                "arifle_NCAR15B_F": {
                    "probability": 0.95,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                    },
                },
                "arifle_NCAR15_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 0.7,
                "optic_LRCO_blk_F": 0.3,
            },
       });
    };
    class CLASS(RiflemanSpecial): CLASS(Rifleman) {
        @Role(Hidden);
        @Primary({
            "weapons": {
                "arifle_NCAR15B_F": {
                    "probability": 0.95,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
                "arifle_NCAR15_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
            },
            "optics": {
                "": 0.6,
                "Aegis_optic_1p87": 0.3,
                "optic_LRCO_blk_F": 0.1,
            },
       });
    };
    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);
        @Primary({
            "weapons": {
                "arifle_NCAR15_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                        "1Rnd_HEDP_Grenade_shell": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 0.7,
                "optic_LRCO_blk_F": 0.3,
            },
       });
    };
    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);
        @Primary({
            "weapons": {
                "arifle_NCAR15_MG_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "ACE_100Rnd_580x42_Drum_tracer_red": 6,
                    },
                },
            },
            "optics": {
                "":0.6,
                "Aegis_optic_1p87": 0.2,
                "optic_LRCO_blk_F": 0.2,
            },
       });
    };
    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner); // i dont want this faction to have mg
    };
    class CLASS(AsstMachineGunner): CLASS(RiflemanSpecial) {
        @Role(AsstMachinegunner);
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "magazines": {
                "ACE_100Rnd_580x42_Drum_tracer_red": 6,
            },
       });
    };
    class CLASS(Medic): CLASS(RiflemanSpecial) {
        @Role(Medic);
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "packs": [
                "t2_medic",
            ],
          });
    };
    class CLASS(RiflemanAT): CLASS(Rifleman) {
        @Role(RiflemanAT);
        @Primary({
            "weapons": {
                "arifle_NCAR15B_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                    },
                },
            },
            "optics": {
                "": 0.85,
                "Aegis_optic_1p87": 0.1,
                "optic_LRCO_blk_F": 0.05,
            },
        });
        @Launchers({
            "weapons": {
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                    },
                },
            },
        });
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });
    };
    class CLASS(RiflemanAA): CLASS(RiflemanAT) {
        @Role(RiflemanAA);
        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 1,
                    },
                },
            },
        });
    };
    class CLASS(RiflemanHAT): CLASS(RiflemanAT) {
        @Role(RiflemanHAT);
        @Launchers({
            "weapons": {
                "launch_O_Vorona_green_F": {
                    "magazinesBackpack": {
                        "Vorona_HEAT": 1,
                    },
                },
            },
        });
    };
    class CLASS(Engineer): CLASS(RiflemanSpecial) {
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
    class CLASS(RadioOperator): CLASS(RiflemanSpecial) {
        @Role(RadioOperator);
        @Backpacks({
            "variants": {
                "B_RadioBag_01_green_F": 1,
            },
        });
    };
    class CLASS(Demolitions): CLASS(RiflemanSpecial) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
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
    class CLASS(Crewman): CLASS(RiflemanSpecial) {
        @Role(Crewman);
        @Headgear({
            "H_Tank_black_F": 0.75,
            "tacs_Helmet_Modular_Headset_FG": 0.25,
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
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);
        @Primary({
            "weapons": {
                "Aegis_srifle_SVD_blk_f": {
                    "probability": 1,
                    "magazinesVest": {
                        "Aegis_10Rnd_762x54_SVD_Red_Mag_F": 6,
                    },
                },
            },
            "optics": {
                "optic_DMS": 1,
            },
        });
        @Secondary({
            "weapons": {
                "Aegis_hgun_P320_khaki_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 1,
                    },
                },
            },
        });
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        @Primary({
            "weapons": {
                "srifle_DMR_05_ghex_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "10Rnd_93x64_DMR_05_Mag": 6,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
        });
    };
};
