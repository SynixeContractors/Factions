class CfgVehicles {
    #include "CfgVehicles_APC.hpp"
    #include "CfgVehicles_Typhoon.hpp"
    #include "CfgVehicles_T100.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Serroise Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_CombatFatigues_ghex_F": 1,
                "Aegis_U_O_CombatFatigues_02_ghex_F": 1,
                "Aegis_U_O_CombatUniform_tshirt_ghex_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_PlateCarrierIA1_grn": 1,
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
            "Atlas_H_HelmetCCH_Cover_ghex_F": 1,
            "Atlas_H_HelmetCCH_HiCut_Cover_ghex_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_blk_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "atlas_arifle_famasG4_Grip_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                    }
                },
            },
            "optics": {
                "optic_Aco": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
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

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "V_PlateCarrierIA1_grn": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
                "HandGrenade": 1,
            },
        });

        @Primary({
            "weapons": {
                "atlas_arifle_famasG4_Grip_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 2,
                        "1Rnd_40mm_HE_lxWS": 3,
                        "1Rnd_50mm_Smoke_lxWS": 2,
                        "1Rnd_58mm_AT_lxWS": 2,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_msbs_mag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
            },
            "optics": {
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
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

        @Primary({
            "weapons": {
                "Atlas_Arifle_famasG4_GL_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_msbs_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
             "optics": {
                "optic_ACO": 1,
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "V_PlateCarrierIA1_grn": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                },
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
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
        
        @Backpacks({
            "variants": {
                "B_FieldPack_ghex_F": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "MMG_01_black_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_93x64_Mag_red": 2,
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_93x64_Mag_red": 2,
                    },
                },
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
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

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_ghex_F": 1,
            },
            "magazines": {
                "ACE_150Rnd_93x64_Mag_red": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "atlas_arifle_famasG4_Grip_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 5,
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 2,
                    }
                },
            },
            "optics": {
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG32_ghex_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_ghex_F": 1,
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
                "B_Carryall_owcamo": 1,
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
                "B_Carryall_owcamo": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ghex_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_ghex_F": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Carryall_ghex_F": 1
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
                "Atlas_U_O_Afghanka_01_ghex_F": 1,
                "Atlas_U_O_Afghanka_02_ghex_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
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
            "H_Tank_black_F": 1,
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

