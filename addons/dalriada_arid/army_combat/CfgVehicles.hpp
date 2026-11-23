class CfgVehicles {
    @Vehicles({
        "faction": "t2_opfor",
        "side": "OPFOR",
        "camo": "Hex",
        "vehicles": [
            "XM_GMG_High",
            "XM_GMG_Low",
            "XM_HMG_High",
            "XM_HMG_Low",
            "Radar02",
            "SAM02",
            "T14",
            "T14_RCWS",
            "T100",
            "T100_SPG",
            "Otokar",
            "Otokar_HMG",
            "Otokar_RCWS",
            "BM2_AA",
            "BM2_IFV2",
            "BM2_IFV1",
            "Karatel",
            "Karatel_HMG",
            "Karatel_GMG",
            "Typhoon_Bench",
            "Typhoon_Covered",
            "Typhoon_Cargo",
            "Typhoon_Fuel",
            "Typhoon_Ammo",
            "Typhoon_Device",
            "Typhoon_Repair",
            "Typhoon_Medical",
            "Ka54",
            "Taru",
            "Taru_Ammo",
            "Taru_Bench",
            "Taru_Container",
            "Taru_Fuel",
            "Taru_Medevac",
            "Taru_Repair",
            "Taru_Covered",
            "Yak130",
            "Mk6Mortar",
        ],
    });

    @Vehicles({
        "faction": "t2_opfor",
        "side": "OPFOR",
        "camo": "Opfor",
        "vehicles": [
            "Shahpar",
            "CH3A",
            "UGV",
            "UGV_RCWS",
            "Orca",
            "OrcaAR",
            "OrcaR",
            "OrcaArmed",
        ],
    });

    @Vehicles({
        "faction": "t2_opfor",
        "side": "OPFOR",
        "camo": "CamoHex",
        "vehicles": [
            "SU75",
            "SU75_Stealth",
        ],
    });

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

