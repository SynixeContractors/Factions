class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO ardistan
    #include "../../../templates/apc/BTR.hpp"
    #include "../../../templates/apc/BTR_IFV.hpp"
    #include "../../../templates/apc/BTR_SPG.hpp"
    #include "../../../templates/apc/BM2K.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Ardistan
    #include "../../../templates/helicopters/Mi35.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Ammo.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"
    #include "../../../templates/planes/Yak130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Ardistan_green
    #include "../../../templates/tanks/T100.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Green_green
    #include "../../../templates/tanks/T100_SPG.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Green
    #include "../../../templates/apc/BM2_AA.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Viatka Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_01_ardi_half_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_half_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "G_Balaclava_blk": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_CQB_ardi_F": 1,
                "Atlas_V_OCarrierGora_Lite_ardi_F": 1,
                "Atlas_V_OCarrierGora_CQB_grn_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "H_HelmetLuchnik_cover_grn_F": 1,
            "H_HelmetLuchnik_cover_ardi_F": 1,
            "H_HelmetLuchnik_olive_F": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                    }
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "JCA_launch_M72_olive_F": {
                    "probability": 1,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_CQB_ardi_F": 1,
                "Atlas_V_OCarrierGora_Lite_ardi_F": 1,
                "Atlas_V_OCarrierGora_CQB_grn_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                        "30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F": 2,
                    }
                },
            },
            "optics": {
                "optic_Arco_AK_blk_F": 1,
                "Aegis_optic_ICO": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_Green_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
                "": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });
        
        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_RPK12_F": {
                    "magazinesVest": {
                        "75rnd_762x39_AK12_Mag_Tracer_F": 5,
                    },
                },
            },
            "optics": {
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
        
    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "LMG_S77_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Green_Tracer_lxWS": 3,
                    },
                    "magazinesBackpack": {
                        "100Rnd_762x51_S77_Green_Tracer_lxWS": 2,
                    },
                },
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
                "B_FieldPack_ardi": 1,
            },
            "magazines": {
                "100Rnd_762x51_S77_Green_Tracer_lxWS": 6,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_01_black_RF": {
                    "magazinesVest": {
                        "Aegis_10Rnd_762x54_SVD_Green_Mag_F": 9,
                    }
                }
            },
            "optics": {
                "optic_DMS": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
            "bipod": {
                "bipod_02_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
                    },
                },
            },
        });
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
                "launch_NLAW_F": {
                    "loadedPrimary": 
                        "NLAW_F",
                },
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
                "B_FieldPack_green_F": 1,
                "B_FieldPack_ardi": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Base) {
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
                "B_FieldPack_green_F": 1,
                "B_FieldPack_ardi": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_LegStrapBag_olive_F": 1,
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
                "B_FieldPack_green_F": 1,
                "B_FieldPack_ardi": 1,
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
                "V_ChestrigF_rgr": 1,
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
                "JCA_smg_MP5_FL_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 4,
                    }
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
