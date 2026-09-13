class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/XM3XX.hpp"
    #define TEMPLATE_CAMO WoodlandHex
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/apc/Otokar.hpp"
    #include "../../../templates/apc/BM2_AA.hpp"
    #include "../../../templates/apc/BTR.hpp"
    #include "../../../templates/apc/BTR_SPG.hpp"
    #include "../../../templates/apc/BTR_IFV.hpp"
    #include "../../../templates/cars/Karatel.hpp"
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Ammo.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Fuel.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"
    #include "../../../templates/helicopters/Mi35.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #include "../../../templates/planes/Yak130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Green
    #include "../../../templates/helicopters/MD500_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGreyHex
    #include "../../../templates/planes/SU75.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO GreenHex
    #include "../../../templates/statics/Mk6.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Cascadia Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_whex_F": 1,
                "Atlas_U_O_Afghanka_02_whex_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_PlateCarrier1_rgr_noflag_F": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_HelmetLuchnik_cover_whex_F": 1,
            "H_HelmetLuchnik_olive_F": 1,
            "H_HelmetLuchnik_headset_grn_F": 1,
        });

        @Facewear({
            "G_Shades_Black": 1,
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_olive_F": 1,
            "Aegis_G_Condor_EyePro_F": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_CTAR_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
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
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Primary({
            "weapons": {
                "arifle_CTAR_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    }
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 2,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_CTAR_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
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

        @Primary({
            "weapons": {
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 2,
                    },
                    "magazinesBackpack": {
                        "100Rnd_580x42_Mag_F": 4,
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
                        "9Rnd_45ACP_Mag": 2,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "MMG_01_black_F": {
                    "magazinesVest": {
                        "150Rnd_93x64_Mag": 2,
                    },
                    "magazinesBackpack": {
                        "150Rnd_93x64_Mag": 4,
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
    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
            },
            "magazines": {
                "150Rnd_93x64_Mag": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_07_blk_F": {
                    "magazinesVest": {
                        "20Rnd_650x39_Cased_Mag_F": 7,
                    }
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
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
                "JCA_launch_Mk153_PWS_olive_F": {
                    "magazinesBackpack": {
                        "JCA_MK153_HEAT_F": 1,
                        "JCA_MK153_HE_F": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
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
                "launch_O_Vorona_green_F": {
                    "magazinesBackpack": { 
                        "Vorona_HEAT": 2,
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
                "B_RadioBag_01_whex_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
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
                "B_FieldPack_owcamo": 1
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
                "V_TacVest_grn": 1,
            },
            "packs": [
                "t3_standard",
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

    class CLASS(FighterPilot): CLASS(Base) {
        @Role(FighterPilot);

        @Uniforms({
            "variants": {
                "Atlas_U_O_W_PilotCoveralls": 1,
            },
            "packs": [
                "rifleman_medical",
                "t3_standard",
            ],
        });

        @Vests({
            "variants": {
                "": 1,
            },
        });

        @Facewear({
            "": 1,
        });

        @Headgear({
            "H_PilotHelmetFighter_O": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_UMP_black_F": {
                    "magazinesUniform": {
                        "JCA_25Rnd_45ACP_UMP_Red_Mag": 5,
                    }
                },
            },
        });
    };
};
