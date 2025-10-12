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
              "tacs_Uniform_combat_LS_ATACS_IX": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });
        @Vests({
            "variants": {
                "V_TacVest_grn": 0.9,
                "V_PlateCarrierIA2_dgtl": 0.1,
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
                        "30Rnd_580x42_Mag_F": 8,
                        "1Rnd_HEDP_Grenade_shell": 9,
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
    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);
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
