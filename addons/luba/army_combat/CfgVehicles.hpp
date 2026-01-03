class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "..\..\..\templates\statics\M2.hpp"
    #define TEMPLATE_CAMO Desert
    #include "..\..\..\templates\cars\LSV.hpp"
    #undef  TEMPLATE_CAMO
    #define TEMPLATE_CAMO Blufor
    #include "..\..\..\templates\cars\HEMTT.hpp"
    #include "CfgVehicles_Cars.hpp"
    #include "CfgVehicles_APC.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Luban Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        @Uniforms({
            "variants": {
                "U_lxWS_UN_Camo2": 0.3,
                "U_lxWS_UN_Camo3": 0.7,
            },
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_HarnessO_brn": 0.5,
                "V_HarnessOSpec_brn": 0.5,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_MK7_sand_F": 1,
        });

        @Facewear({
            "": 1,
        });

        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        @Primary({
            "weapons": {
                "Aegis_arifle_M4A1_sand_F": {
                    "probability": 0.6,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand": 8,
                    },
                },
                "Aegis_arifle_M4A1_grip_sand_F": {
                    "probability": 0.3,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand": 8,
                    },
                },
                "Aegis_arifle_M4A1_short_sand_F": {
                    "probability": 0.1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand": 8,
                    },
                },
            },
            "optics": {
                "": 0.6,
                "Aegis_optic_1p87_snd": 0.3,
                "optic_VRCO_tan_RF": 0.1,
            },
        });
        @Launchers({
            "weapons": {
                "": 0.9,
                "Atlas_Launch_Pzf3_F": {
                    "probability": 0.1,
                    "loadedPrimary": "Atlas_DM12_HEAT_F",
                },
            },
        });
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\weapons\carabine.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
            },
        });
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        @Primary({
            "weapons": {
                "Aegis_arifle_M4A1_GL_sand_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand": 8,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 0.4,
                "optic_VRCO_tan_RF": 0.6,
            },
        });
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        @Primary({
            "weapons": {
                "Aegis_arifle_M16A4_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand": 8,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 0.4,
                "optic_VRCO_tan_RF": 0.6,
            },
        });
    };
    class CLASS(Machinegunner): CLASS(Rifleman) {
        @Role(Machinegunner);
        #include "..\weapons\mg.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(RiflemanBackpack) {
        @Role(AsstMachinegunner);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
            },
            "magazines": {
                "100Rnd_762x51_S77_Red_lxWS": 4,
            },
        });
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
            },
            "packs": [
                "t3_medic",
            ],
        });
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        @Launchers({
            "weapons": {
                "Atlas_Launch_Pzf3_F": {
                    "magazinesBackpack": {
                        "Atlas_DM12_HEAT_F": 2,
                    },
                },
            },
        });
    };
    class CLASS(RiflemanAA): CLASS(RiflemanBackpack) {
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
    class CLASS(RiflemanHAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanHAT);
        @Launchers({
            "weapons": {
                "launch_O_Vorona_brown_F": {
                    "magazinesBackpack": {
                        "Vorona_HEAT": 1,
                    },
                },
            },
        });
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
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
                "B_RadioBag_01_coyote_F": 1,
            },
        });
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
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
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 1,
        });
    };
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);
        #include "..\weapons\marksman.hpp"
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        #include "..\weapons\sniper.hpp"
    };
};
