class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/XM3XX.hpp"
    #define TEMPLATE_CAMO GreenHex
    #include "../../../templates/statics/SAM02.hpp"
    #include "../../../templates/statics/Mk6.hpp"
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/tanks/T100_SPG.hpp"
    #include "../../../templates/apc/BM2_AA.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #include "../../../templates/apc/BM2T.hpp"
    #include "../../../templates/cars/Karatel.hpp"
    #include "../../../templates/cars/Typhoon.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #include "../../../templates/helicopters/Ka54.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Opfor
    #include "../../../templates/drones/CH3A.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Grey
    #include "../../../templates/planes/Yak130.hpp"
    #include "../../../templates/planes/Xian.hpp"
    #include "../../../templates/planes/C130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGreyHex
    #include "../../../templates/planes/SU75.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO MarineHex
    #include "../../../templates/apc/Otokar.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Navarre Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_LightCombatFatigues_urb_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_CQB_olive_F": 1,
                "JCA_V_CarrierRigKBT_01_combat_olive_F": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

        #include "..\weapons\Rifleman.hpp"

        @Primary({
            "muzzles": {
                "": 4,
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.6,
                "hgun_Pistol_heavy_01_black_F": {
                    "probability": 0.4,
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

        @Headgear({
            "H_HelmetSpecter_cover_uhex_F": 1,
        });

        @Facewear({
            "JCA_G_balaclava_01_glasses_black_F": 1,
            "JCA_G_balaclava_01_glasses_olive_F": 1,
            "synixe_mgp_f_face_shield_rgr_ess": 1,
            "synixe_mgp_f_face_shield_blk_ess": 1,
            "JCA_G_Glasses_Tactical_tinted_black_F": 1,
            "synixe_mgp_f_ess": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.7,
                "launch_NLAW_F": {
                    "probability": 0.3, 
                    "loadedPrimary": "NLAW_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);

        #include "..\weapons\Rifleman.hpp"

        #include "..\weapons\Secondary.hpp"
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        #include "..\weapons\Autorifleman.hpp"
        #include "..\weapons\Secondary.hpp"
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        #include "..\weapons\Machinegunner.hpp"
        #include "..\weapons\Secondary.hpp"
    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "magazines": {
                "150Rnd_93x64_Mag": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\weapons\Marksman.hpp"
        #include "..\weapons\Secondary.hpp"
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG32_black_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_oucamo_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_rgr": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Carryall_oucamo": 1,
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

    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        #include "..\weapons\Crewman.hpp"
        #include "..\weapons\Secondary.hpp"

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_crew_olive_F": 1
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_I_E_visor_up": 0.2,
            "H_PilotHelmetHeli_I_E": 0.4,
            "H_CrewHelmetHeli_I_E": 0.4,
        });
    };
};
