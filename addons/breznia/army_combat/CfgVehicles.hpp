class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Breznia Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_CombatUniformNCU_01_mcam_F": 1,
                "Atlas_U_CombatUniformNCU_02_mcam_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_khk_F": 1,
                "Atlas_V_OCarrierRig_CQB_khk_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_Cover_mtp_F": 1,
            "Aegis_H_Helmet_Virtus_Scrim_mtp_F": 1,
            "Aegis_H_Helmet_Virtus_Headset_snd_F": 1,
            "Aegis_H_Helmet_Virtus_Headset_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_cbr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_tan_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 0.25,
            "G_Shemag_tactical": 0.15,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.15,
            "synixe_mgp_f_face_shield_mc_tactical": 0.15,
            "synixe_mgp_f_face_shield_khk_tactical": 0.15,
            "synixe_mgp_f_face_shield_cb_tactical": 0.15,
        });

        @Assigned(Military);

        @Primary({
            "weapons": {
                "arifle_AK12_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "arifle_AK12U_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.9,
                "launch_RPG7_F": {
                    "probability": 0.1,
                    "loadedPrimary": "RPG7_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_khk_F": 1,
                "Atlas_V_OCarrierRig_Lite_alt_khk_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_Tracer_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_AK74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
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
                "Atlas_V_OCarrierRig_CQB_alt_khk_F": 1,
                "Atlas_V_OCarrierRig_Lite_alt_khk_F": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_RPK12_545_tan_F": {
                    "magazinesVest": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                    "magazinesBackpack": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                },
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                    "magazinesBackpack": {
                        "Aegis_60Rnd_545x39_Mag_Tracer_Green_F": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "MMG_02_black_F": {
                    "magazinesVest": {
                        "ACE_130Rnd_338_Mag_green": 2,
                    },
                    "magazinesBackpack": {
                        "ACE_130Rnd_338_Mag_green": 3,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
            },
            "magazines": {
                "ACE_130Rnd_338_Mag_green": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_khk_F": 1,
                "Atlas_V_OCarrierRig_Lite_alt_khk_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "Aegis_srifle_SVD_blk_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 9,
                    }
                }
            },
            "optics": {
                "optic_DMS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_MTP": 1,
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
                "launch_PSRL1_PWS_sand_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_khk": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_launch_O_Titan_camo_FB_Titan_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_khk": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Titan_short_camo_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_khk": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_mtp_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
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
                "B_TacticalPack_khk": 1,
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
                "Atlas_V_OCarrierRig_Lite_alt_khk_F": 1,
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
                "arifle_AK12U_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
                "arifle_AKS_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 5,
                    }
                },
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
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

