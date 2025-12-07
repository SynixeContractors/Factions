class CfgVehicles {
    class COMBATCLASS(Rifleman);
    class CLASS(Rifleman): COMBATCLASS(Rifleman) {
        editorSubcategory = QGCLASS(army_recon);
        @Role(Rifleman);
        @Uniforms({
            "variants": {
                "tacs_Uniform_Combat_LS_ATACS_IX": 0.75,
                "tacs_Uniform_Combat_RS_ATACS_IX": 0.25,
            },
            "packs": [
                "t3_rifleman_medical",
                "t3_standard",
            ],
        });
        @Headgear({
            "Aegis_H_Milcap_nohs_grn_F": 0.4,
            "Aegis_H_MilCap_tachs_grn_F": 0.2,
            "H_MilCap_grn": 0.1,
            "": 0.1,
            "tacs_Helmet_modular_FG": 0.05,
            "tacs_Helmet_Modular_Ear_FG": 0.05,
            "tacs_Helmet_Modular_Headset_FG": 0.04,
            "tacs_Helmet_Modular_Chops_FG": 0.01,
        });
        @Facewear({
            "": 0.95,
            "G_Bandanna_oli": 0.05,
        });
        @Primary({
            "weapons": {
                "arifle_NCAR15_F": {
                    "probability": 0.7,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
                "Aegis_arifle_CTAR_tan_f": {
                    "probability": 0.3,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
            },
            "optics": {
                "": 0.4,
                "Aegis_optic_1p87": 0.4,
                "optic_LRCO_blk_F": 0.2,
            },
        });
    };
    class CLASS(RiflemanCarabine): CLASS(Rifleman) {
        @Role(Hidden);
        @Primary({
            "weapons": {
                "arifle_NCAR15B_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
                "Aegis_arifle_CTAR_tan_f": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
            },
            "optics": {
                "": 0.2,
                "Aegis_optic_1p87": 0.6,
                "optic_LRCO_blk_F": 0.2,
            },
        });
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);
        @Primary({
            "weapons": {
                "arifle_NCAR15_GL_F": {
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
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_Tracer_F": 6,
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
    class CLASS(Medic): CLASS(RiflemanCarabine) {
        @Role(Medic);
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "packs": [
                "t3_medic",
            ],
          });
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanCarabine) {
        @Role(RiflemanMAT);
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
    class CLASS(Engineer): CLASS(RiflemanCarabine) {
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
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        @Backpacks({
            "variants": {
                "B_RadioBag_01_green_F": 1,
            },
        });
    };
    class CLASS(Demolitions): CLASS(RiflemanCarabine) {
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
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);
        @Primary({
            "weapons": {
                "Aegis_srifle_SVD_blk_f": {
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
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        @Primary({
            "weapons": {
                "srifle_DMR_05_blk_F": {
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
