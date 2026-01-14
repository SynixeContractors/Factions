class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/XM3XX.hpp"
    #define TEMPLATE_CAMO Grey
    #include "../../../templates/tanks/T14.hpp"
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #include "../../../templates/planes/Xian.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO MarineHex
    #include "../../../templates/apc/Otokar.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Black
    #include "../../../templates/helicopters/Ka54.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #include "../../../templates/helicopters/Taru.hpp"
    #include "../../../templates/cars/Ram_Civilian.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Dal Riada Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_CombatFatigues_mhex_F": 1,
                "Atlas_U_O_CombatFatigues_mhex_02_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_black_F": 1,
                "V_CarrierRigKBT_01_light_Black_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "HandGrenade": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_Cover_mhex_F": 1,
            "Atlas_H_HelmetCCH_HiCut_cover_mhex_F": 1,
            "Atlas_H_HelmetCCH_HiCut_Headset_blk_F": 1,
            "Atlas_H_HelmetCCH_Headset_blk_F": 1,
        });

        @Facewear({
            "G_Balaclava_light_G_blk_F": 1,
            "G_Balaclava_light_blk_F": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        #include "..\..\dalriada\weapons\Rifleman.hpp"

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
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
                "V_CarrierRigKBT_01_light_Black_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
                "HandGrenade": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\..\dalriada\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Black_F": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        #include "..\..\dalriada\weapons\Autorifleman.hpp"

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        #include "..\..\dalriada\weapons\Machinegunner.hpp"

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_Kitbag_blk": 1,
            },
            "magazines": {
                "ACE_150Rnd_93x64_Mag_red": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        #include "..\..\dalriada\weapons\Marksman.hpp"
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Black": 1,
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
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_blk": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
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
                "B_Carryall_blk": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
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
                "B_Carryall_blk": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_black_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
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
                "B_Carryall_blk": 1
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

        @Uniforms({
            "variants": {
                "Atlas_U_O_CombatFatigues_mhex_F": 1,
                "Atlas_U_O_CombatFatigues_mhex_02_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_Black_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "lxWS_H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_UMP_black_F": {
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Red_Mag": 5,
                    }
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Uniforms({
            "variants": {
                "Aegis_U_O_CombatFatigues_oli_F": 1,
                "Aegis_U_O_CombatFatigues_02_oli_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 1,
            "H_PilotHelmetHeli_B": 1,
            "H_CrewHelmetHeli_B": 2,
        });
    };

};

