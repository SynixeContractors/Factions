class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "JSR Base Army Airborne";
        editorSubcategory = QGCLASS(army_airborne);
    };
    class CLASS(Rifleman): CLASS(Base) {
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
        @Vests({
            "variants": {
                "V_TacVest_grn": 0.5,
                "V_PlateCarrierIA2_grn": 0.5,
            },
            "magazines": {
                "HandGrenade": 1,
                "SmokeShell": 1,
            },
        });
        @Headgear({
            "tacs_Helmet_modular_FG": 0.29,
            "tacs_Helmet_Modular_Ear_FG": 0.5,
            "tacs_Helmet_Modular_Headset_FG": 0.1,
            "tacs_Helmet_Modular_Chops_FG": 0.01,
        });
        @Facewear({
            "": 0.65,
            "G_Bandanna_oli": 0.35,
        });
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
                "Aegis_arifle_CTAR_GL_tan_f": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                        "1Rnd_HEDP_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
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
