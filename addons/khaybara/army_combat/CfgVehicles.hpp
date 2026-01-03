class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_blufor)
    #define TEMPLATE_SIDE 1
    #include "..\..\..\templates\statics\M2.hpp"
    #define TEMPLATE_CAMO Blufor
    #include "..\..\..\templates\cars\HEMTT.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO KZG_01
    #include "..\..\..\templates\tanks\leopard.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Blufor
    #include "..\..\..\templates\cars\MATV.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Khaybara Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\uniform.hpp"

        @Vests({
            "variants": {
                "V_HarnessO_brn": 0.5,
                "V_HarnessOSpec_brn": 0.5,
            },
            "packs": [
                "t2_standard",
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
        #include "..\weapons\rifle.hpp"
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
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
        #include "..\weapons\gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "..\weapons\mg.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Machinegunner): CLASS(Rifleman) {
        @Role(Machinegunner);
        #include "..\weapons\mg.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(RiflemanBackpack) {
        @Role(AsstMachinegunner);
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
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        #include "..\weapons\sniper.hpp"
    };
};
