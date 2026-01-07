class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #include "..\..\..\templates\statics\M2.hpp"
    #define TEMPLATE_CAMO Maze
    #include "../../../templates/cars/Fennek.hpp"
    #include "../../../templates/cars/Typhoon.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Maze_jungle
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/tanks/T100_Railgun.hpp"
    #include "../../../templates/tanks/T100_SPG.hpp"


    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "JSR Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Uniforms({
            "variants": {
                "tacs_Uniform_Combat_LS_ATACS_IX": 0.75,
                "tacs_Uniform_Combat_RS_ATACS_IX": 0.25,
            },
            "packs": [
                "rifleman_medical",
                "t3_standard",
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
    class CLASS(RiflemanCarabine): CLASS(Rifleman) {
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
    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);
        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "magazinesVest": {
                        "150Rnd_762x54_Box": 1,
                    },
                },
            },
            "optics": {
                "":0.2,
                "Aegis_optic_1p87": 0.4,
                "optic_LRCO_blk_F": 0.4,
            },
        });
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "magazines": {
                "150Rnd_762x54_Box": 2,
            },
        });
    };
    class CLASS(AsstMachineGunner): CLASS(RiflemanCarabine) {
        @Role(AsstMachinegunner);
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "magazines": {
                "150Rnd_762x54_Box": 2,
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
                "t2_t3_medic",
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
    class CLASS(RiflemanAA): CLASS(RiflemanCarabine) {
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
    class CLASS(RiflemanHAT): CLASS(RiflemanCarabine) {
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
    class CLASS(Engineer): CLASS(RiflemanCarabine) {
        @Role(Engineer);
        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
            },
            "packs": [
                "engineer",
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
    class CLASS(Crewman): CLASS(RiflemanCarabine) {
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
