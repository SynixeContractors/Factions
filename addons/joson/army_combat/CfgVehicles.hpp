class CfgVehicles {
    class PCLASS(base);
    class CLASS(base): PCLASS(base) {
        displayName = "JSR Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
    };
    class CLASS(rifleman): CLASS(base) {
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
            "tacs_Helmet_modular_FG": 1,
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
            "": 0.7,
                "Aegis_optic_1p87": 0.2,
                "optic_LRCO_blk_F": 0.1,
            },
        });
    };
};
