class CfgVehicles {

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "JSR Base Army Reserve";
        editorSubcategory = QGCLASS(army_garrison);
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
                "V_TacChestrig_grn_F": 0.5,
            },
            "magazines": {
                "HandGrenade": 1,
                "SmokeShell": 1,
            },
        });
        @Headgear({
            "lxWS_H_ssh40_green": 0.9,
            "tacs_Helmet_modular_FG": 0.05,
            "tacs_Helmet_Modular_Ear_FG": 0.025,
            "tacs_Helmet_Modular_Headset_FG": 0.025,
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
                        "30Rnd_580x42_Mag_F": 4,
                    },
                },
                "arifle_NCAR15B_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                      "30Rnd_580x42_Mag_F": 4,
                    },
                },
            },
            "optics": {
                "": 0.95,
                "Aegis_optic_1p87": 0.03,
                "optic_LRCO_blk_F": 0.02,
            },
       });
    };

    class CLASS(RiflemanCarabine): CLASS(Rifleman) {
        @Role(Hidden);
        @Primary({
            "weapons": {
                "arifle_NCAR15B_F": {
                    "probability": 0.95,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 4,
                    },
                },
                "arifle_NCAR15_F": {
                    "probability": 0.05,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 4,
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
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        @Headgear({
            "tacs_Helmet_Modular_Ear_FG": 0.5,
            "tacs_Helmet_Modular_Headset_FG": 0.5,
        });
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
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
                "":0.8,
                "Aegis_optic_1p87": 0.1,
                "optic_LRCO_blk_F": 0.1,
            },
       });
    };
    class CLASS(Worker): CLASS(RiflemanCarabine) {
        @Role(Worker);
        @Headgear({
            "H_Tank_black_F": 0.75,
            "tacs_Helmet_Modular_Headset_FG": 0.25,
        });
    };
    class CLASS(Maintainer): CLASS(Worker) {
      @Role(Maintainer)
    };
};
