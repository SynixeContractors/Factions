class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #define TEMPLATE_CAMO HIMF
    #include "../../../templates/apc/Otokar.hpp"
    #include "../../../templates/planes/C130.hpp"
    #include "../../../templates/planes/Cessna.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Jungle
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Fuel.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "NGHI Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        @Uniforms({
            "variants": {
                "Atlas_U_UniformBDU_02_HI_F": 1,
                "Atlas_U_UniformBDU_01_HI_F": 1,
                "Atlas_U_B_H_Soldier_F": 1,
                "Atlas_U_B_H_Soldier_2_F": 1,
                "Atlas_U_B_H_Soldier_3_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Atlas_H_PASGT_Cover_HIMF_F": 1,
            "H_PASGT_basic_olive_F": 0.2,
            "H_PASGT_basic_green_F": 0.2,
            "H_Booniehat_jungle": 0.2,
            "H_Booniehat_jungle_hs": 0.2,
            "Atlas_H_MilCap_nohs_jungle": 0.2,
            "Atlas_H_MilCap_tachs_Jungle": 0.2,
            "H_MilCap_jungle": 0.2,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Shemag_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
                "arifle_SCAR_L_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
                "arifle_SCAR_L_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                        "1Rnd_40mm_HE_lxWS": 3,
                    }
                },
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                        "1Rnd_40mm_HE_lxWS": 3,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Launchers({
            "weapons": {
                "": 0.95,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.05,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
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

        @Launchers({
            "weapons": {
                "": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_SCAR_L_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                        "1Rnd_40mm_HE_lxWS": 3,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                        "1Rnd_40mm_HE_lxWS": 3,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Tracer_F": 4,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_Tracer_F": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
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
                "B_FieldPack_oli": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_old_F": {
                    "magazinesVest": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 4,
                    },
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 4,
                    },
                },
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_oli": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "arifle_SLR_V_lxWS": {
                    "magazinesVest": {
                        "20Rnd_762x51_slr_lxWS": 9,
                    }
                }
            },
            "optics": {
                "optic_DMS": 1,
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

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
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
                },
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
                "B_Kitbag_sgg": 1,
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
                "B_Kitbag_sgg": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_jungle_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_FieldPack_oli": 1,
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
                "B_TacticalPack_oli": 1,
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
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "SMG_05_F": {
                    "magazinesVest": {
                        "30Rnd_9x21_Mag_SMG_02": 5,
                    }
                },
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

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_O_visor_up": 1,
            "H_PilotHelmetHeli_O": 1,
            "H_CrewHelmetHeli_O": 1,
        });
    };
};
