class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/XM3XX.hpp"
    #define TEMPLATE_CAMO Hex
    #include "../../../templates/tanks/T14.hpp"
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/tanks/T100_SPG.hpp"
    #include "../../../templates/apc/Otokar.hpp"
    #include "../../../templates/apc/BM2_AA.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #include "../../../templates/apc/BM2T.hpp"
    #include "../../../templates/cars/Karatel.hpp"
    #include "../../../templates/cars/Typhoon.hpp"
    #include "../../../templates/helicopters/Ka54.hpp"
    #include "../../../templates/helicopters/Taru.hpp"
    #include "../../../templates/planes/Yak130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Opfor
    #include "../../../templates/drones/Shahpar.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoHex
    #include "../../../templates/planes/SU75.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Dal Riada Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_CombatFatigues_semiarid_F": 1,
                "Atlas_U_O_CombatFatigues_02_semiarid_F": 1,
                "Atlas_U_O_CombatUniform_tshirt_semiarid_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_PlateCarrierIA1_grn": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard"
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_Cover_semiarid_F": 1,
            "Atlas_H_HelmetCCH_HiCut_Cover_semiarid_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_blk_tactical": 1,
            "synixe_mgp_f_face_shield_khk_tactical": 1,
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
                "B_FieldPack_semiarid": 1,
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

        @Backpacks({
            "variants": {
                "B_FieldPack_semiarid": 1,
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_semiarid": 1,
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
                "tacs_Backpack_Kitbag_Medic_Green": 1,
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
                "B_AssaultPack_rgr": 1,
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
                "B_Carryall_semiarid": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Carryall_semiarid": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_semiarid_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
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
                "B_Carryall_semiarid": 1
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
                "Atlas_U_O_Afghanka_01_semiarid_F": 1,
                "Atlas_U_O_Afghanka_02_semiarid_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_TacVest_grn": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I_I": 1,
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

        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 1,
            "H_PilotHelmetHeli_B": 1,
            "H_CrewHelmetHeli_B": 2,
        });
    };

};

