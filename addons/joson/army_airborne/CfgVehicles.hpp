class CfgVehicles {
    class COMBATCLASS(Rifleman);
    class CLASS(Rifleman): COMBATCLASS(Rifleman) {
        editorSubcategory = QGCLASS(army_airborne);
        @Role(Rifleman);
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
        @Backpacks({
            "variants": {
                "ACE_NonSteerableParachute": 1,
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
                "Aegis_arifle_CTARS_tan_f": {
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
    class CLASS(RiflemanMAT): CLASS(RiflemanCarabine) {
        @Role(RiflemanMAT);
        @Launchers({
            "weapons": {
                "JCA_launch_M72_olive_F": {
                },
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
};
