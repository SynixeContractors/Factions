class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_CombatUniformNCU_01_mcam_wdl_F": 1,
                "Atlas_U_CombatUniformNCU_02_mcam_wdl_F": 1,
                "U_B_UBACS_tshirt_wdl_f": 5,
                "U_B_GhillieSuit_wdl_f": 0.2,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Chestrig_rgr": 1,
                "V_ChestrigF_rgr": 1,
                "V_TacChestrig_grn_F": 1,
                "Aegis_V_ChestrigEast_grn_F": 1,
                "V_SmershVest_01_F": 1,
                "V_SmershVest_01_radio_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_wdl_hs": 1,
            "H_Booniehat_wdl": 1,
            "H_Cap_headphones": 1,
            "H_Cap_headphones_rvs": 1,
            "H_Watchcap_wdlkhk_hsless": 0.5,
            "H_Watchcap_wdl_hsless": 0.5,
            "H_Watchcap_wdlkhk_hs": 0.5,
            "H_Watchcap_wdl_hs": 0.5,
        });

        @Facewear({
            "G_Bandanna_oli": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_tan": 1,
            "G_Shemag_tactical": 1,
            "G_Shemag_oli": 1,
            "G_Shemag_khk": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_blk_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_blk": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr": 1,
            "synixe_mgp_f_tactical": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_01_blk_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
                "Aegis_arifle_M4A1_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
                "Aegis_arifle_M4A1_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 0.6,
                "JCA_optic_MROS_black_magnifier": 0.6,
                "optic_MRCO": 0.2,
                "optic_Hamr": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
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

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

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

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_SPAR_01_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "Aegis_arifle_M4A1_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 0.6,
                "JCA_optic_MROS_black_magnifier": 0.6,
                "optic_MRCO": 0.2,
                "optic_Hamr": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_762x54_Box_red": 4,
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_762x54_Box_tracer_red": 4,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "Aegis_arifle_SR25_MR_blk_F": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_SMAG": 9,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_MRAWS_green_F": {
                    "magazinesBackpack": {
                        "MRAWS_HEAT55_F": 2,
                        "MRAWS_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_wdl_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
            },
            "packs": [
                "toolkit",
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

        @Vests({
            "variants": {
                "V_Chestrig_rgr": 1,
                "V_ChestrigF_rgr": 1,
                "V_TacChestrig_grn_F": 1,
                "Aegis_V_ChestrigEast_grn_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };

    class CLASS(Spotter): CLASS(Base) {
        @Role(Spotter);
        
        @Primary({
            "weapons": {
                "arifle_SPAR_01_blk_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
                "Aegis_arifle_M4A1_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
                "Aegis_arifle_M4A1_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 5,
                        "30Rnd_556x45_Stanag_Tracer_Yellow": 2,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 0.6,
                "JCA_optic_MROS_black_magnifier": 0.6,
                "optic_MRCO": 0.2,
                "optic_Hamr": 0.2,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
            },
        });

        @Uniforms({
            "variants": {
                "U_B_W_FullGhillie_wdl_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_ChestrigF_oli": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_DMR_02_F": {
                    "magazinesVest": {
                        "ACE_10Rnd_338_API526_Mag": 4,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_338_black": 1,
            },
        });
    };
};
