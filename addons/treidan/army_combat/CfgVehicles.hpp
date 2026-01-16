class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Olive
    #include "../../../templates/apc/Badger.hpp"
    #include "../../../templates/cars/MATV.hpp"
    #include "../../../templates/helicopters/Apache.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO NATO_P
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Olive_green
    #include "../../../templates/tanks/Merkava.hpp"
    #include "../../../templates/tanks/Merkava_SPG.hpp"
    #include "../../../templates/apc/Namer.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO OLIVE
    #include "../../../templates/helicopters/Puma_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGrey
    #include "../../../templates/planes/JAS39.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Treidan Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_rbs_rbs": 1,
                "synixe_mgp_g3_fleece_rgr_rbs": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "WSLV_Platecarrier_GRN_NF": 1,
                "V_PlateCarrier1_rgr_noflag_F": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_Headset_rgr_F": 1,
            "Aegis_H_Helmet_Virtus_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr_shemagh_khk": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_khk_tactical": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_khk": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_khk_tactical": 1,
            "G_Balaclava_light_blk_F": 1,
            "synixe_mgp_f_tactical": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SA80_blk_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 7,
                    },
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "JCA_launch_M72_olive_F": {
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Secondary({
            "weapons": {
                "Aegis_hgun_P320_black_F": {
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
                "arifle_SA80_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_black_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

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
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "Aegis_hgun_P320_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
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

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_240_F": {
                    "magazinesVest": {
                        "Aegis_200Rnd_762x51_MAG_Red_Tracer_F": 2,
                    },
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Red_Tracer_F": 2,
                    },
                },
            },
            "optics": {
                "": 1,
                "optic_VRCO_RF": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });

        @Secondary({
            "weapons": {
                "Aegis_hgun_P320_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 2,
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

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Red_Tracer_F": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_EBR_blk_lxWS": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag_blk_lxWS": 7,
                    },
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "Aegis_hgun_P320_black_F": {
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
                "launch_MRAWS_green_rail_F": {
                    "magazinesBackpack": {
                        "MRAWS_HEAT55_F": 2,
                        "MRAWS_HE_F": 1,
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
                "B_RadioBag_01_green_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_TacticalPack_rgr": 1,
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
                "B_TacticalPack_rgr": 1,
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
                "Atlas_V_OCarrierRig_oli_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SA80_C_blk_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 4,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 1,
            "H_PilotHelmetHeli_B": 1,
            "H_CrewHelmetHeli_B": 1,
        });
    };
};
