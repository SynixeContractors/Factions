class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/XM3XX.hpp"
    #define TEMPLATE_CAMO Hex
    #include "../../../templates/statics/SAM02.hpp"
    #include "../../../templates/statics/Mk6.hpp"
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/tanks/T100_SPG.hpp"
    #include "../../../templates/apc/Otokar.hpp"
    #include "../../../templates/apc/BM2_AA.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #include "../../../templates/apc/BM2T.hpp"
    #include "../../../templates/cars/Karatel.hpp"
    #include "../../../templates/cars/Typhoon.hpp"
    #include "../../../templates/helicopters/Mi35.hpp"
    #include "../../../templates/planes/Yak130.hpp"
    #include "../../../templates/planes/C130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Opfor
    #include "../../../templates/drones/CH3A.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CSAT
    #include "../../../templates/helicopters/Puma_Military.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Mbakora Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_dst_F": 1,
                "Atlas_U_O_Afghanka_02_dst_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "MiniGrenade": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_Cover_dst_F": 1,
            "Atlas_H_HelmetCCH_HiCut_Cover_dst_F": 1,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Balaclava_snd_lxWS": 1,
            "G_Balaclava_blk_lxWS": 1,
            "G_Bandanna_oli": 1,
            "G_Bandanna_khk": 1,
            "G_Shades_Black": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        #include "..\weapons\Rifleman.hpp"

        @Secondary({
            "weapons": {
                "": 0.6,
                "hgun_ACPC2_black_F": {
                    "probability": 0.4,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 0.5,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 0.5,
            },
            "magazines": {
                "SmokeShell": 2,
                "MiniGrenade": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        #include "..\weapons\Secondary.hpp"
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        #include "..\weapons\Autorifleman.hpp"

        #include "..\weapons\Secondary.hpp"
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        #include "..\weapons\Machinegunner.hpp"
        #include "..\weapons\Secondary.hpp"

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
            "magazines": {
                "ACE_150Rnd_93x64_Mag_red": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
            "packs": [
                "t3_standard",
            ],
        });

        #include "..\weapons\Marksman.hpp"
        #include "..\weapons\Secondary.hpp"

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG32_tan_lxWS": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_coyote_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Vorona_brown_F": {
                    "magazinesBackpack": { 
                        "Vorona_HEAT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_oicamo_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_cbr": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
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

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_Coyote_F": 1
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "lxWS_H_HelmetCrew_I": 1,
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 0.2,
            "H_PilotHelmetHeli_B": 0.4,
            "H_CrewHelmetHeli_B": 0.4,
        });
    };
};
