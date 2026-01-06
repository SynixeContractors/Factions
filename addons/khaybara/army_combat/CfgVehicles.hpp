class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_blufor)
    #define TEMPLATE_SIDE 1
    #include "..\..\..\templates\statics\M2.hpp"
    #define TEMPLATE_CAMO Blufor
    #include "..\..\..\templates\cars\HEMTT.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Karzeg_01
    #include "..\..\..\templates\apc\Pandur.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO KZG_01
    #include "..\..\..\templates\tanks\Leopard.hpp"
    #include "..\..\..\templates\tanks\Merkava.hpp"
    #include "..\..\..\templates\tanks\Merkava_SPG.hpp"
    #include "..\..\..\templates\apc\Namer.hpp"
    #include "..\..\..\templates\cars\Fennek.hpp"
    #include "..\..\..\templates\cars\Polaris.hpp"
    #include "..\..\..\templates\cars\Ram_Civilian.hpp"
    #include "..\..\..\templates\cars\Ram_Armed.hpp"
    #include "..\..\..\templates\cars\Ram_Advanced.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO KZG
    #include "..\..\..\templates\cars\Offroad_Civilian.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Khaybara Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\uniform.hpp"

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_khk_F": 0.2,
                "Aegis_V_CarrierRigKBT_01_tac_khk_F": 0.5,
                "Aegis_V_CarrierRigKBT_01_recon_khk_F": 0.3,
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
        #include "..\weapons\launcher.hpp"
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
        #include "..\weapons\lmg.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Machinegunner): CLASS(Rifleman) {
        @Role(Machinegunner);
        #include "..\weapons\mg.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(RiflemanBackpack) {
        @Role(AsstMachinegunner);
        #include "..\weapons\backpack_mg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "..\weapons\mat.hpp"
    };
    class CLASS(RiflemanAA): CLASS(RiflemanBackpack) {
        @Role(RiflemanAA);
        #include "..\weapons\aa.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanHAT);
        #include "..\weapons\mat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
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
        #include "..\weapons\pdw.hpp"
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        @Headgear({
            "tacs_Helmet_PilotHeli_Tan": 1,
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
