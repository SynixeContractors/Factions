class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Green
    #include "../../../templates/statics/Mk6.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO SFIA
    #include "../../../templates/tanks/T100.hpp"
    #include "../../../templates/apc/Otokar.hpp"
    #include "../../../templates/apc/BM2_AA.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #include "../../../templates/apc/BM2T.hpp"
    #include "../../../templates/apc/BTR.hpp"
    #include "../../../templates/apc/BTR_IFV.hpp"
    #include "../../../templates/apc/BTR_SPG.hpp"
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Ammo.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Fuel.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"
    #include "../../../templates/helicopters/Ka54.hpp"
    #include "../../../templates/helicopters/Mi35.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CAMO_SFIA
    #include "../../../templates/helicopters/Puma_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Rus
    #include "../../../templates/drones/Shahpar.hpp"
    
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Ngabiri Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "U_lxWS_SFIA_soldier_2_O": 1,
                "U_lxWS_SFIA_soldier_1_O": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_PlateCarrier2_alt_cbr": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_HelmetLuchnik_cover_sfia_F": 1,
            "H_HelmetLuchnik_headset_brn_F": 1,
        });

        @Facewear({
            "G_Balaclava_snd_lxWS": 1,
            "synixe_mgp_f_face_shield_khk_shemagh_rgr": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_khk": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_khk_ess": 1,
            "synixe_mgp_f_face_shield_khk_shemagh_rgr_ess": 1,
            "synixe_mgp_f_shemagh_khk": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_AKM74_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Green_F": 7,
                    },
                },
                "Aegis_arifle_AK74_oak_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Green_F": 6,
                    },
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "acc_pointer_IR_pistol_RF": 1,
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "Aegis_V_PlateCarrier2_alt_cbr": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
            "magazines": {
                "SmokeShellPurple": 1,
                "SmokeShellRed": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_AK12_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 6,
                        "30Rnd_545x39_AK12_Mag_Tracer_F": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_545x39_AK12_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "Aegis_arifle_AKM74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Green_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_545x39_Mag_Green_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
                        "Aegis_45Rnd_545x39_Mag_Tracer_Green_F": 6,
                    },
                    "magazinesBackpack": {
                        "Aegis_45Rnd_545x39_Mag_Tracer_Green_F": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "acc_pointer_IR_pistol_RF": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "MMG_01_tan_F": {
                    "magazinesVest": {
                        "150Rnd_93x64_Mag": 2,
                    },
                    "magazinesBackpack": {
                        "150Rnd_93x64_Mag": 3,
                    },
                },
            },
            "optics": {
                "": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_snd": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_cbr": 1,
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
                "srifle_DMR_01_tan_RF": {
                    "magazinesVest": {
                        "Aegis_10Rnd_762x54_SVD_Green_Mag_F": 9,
                    },
                },
            },
            "optics": {
                "optic_KHS_blk": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_snd": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });

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
                "launch_NLAW_F": {
                    "loadedPrimary": "NLAW_F",
                },
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
                "B_FieldPack_cbr": 1,
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
                "B_FieldPack_cbr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_coyote_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
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
                "B_AssaultPack_cbr": 1,
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
                "V_TacVest_khk": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I_I": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AKSM_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    },
                },
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_O_visor_up": 1,
            "H_PilotHelmetHeli_O": 1,
            "H_CrewHelmetHeli_O": 1,
        });
    };
};

