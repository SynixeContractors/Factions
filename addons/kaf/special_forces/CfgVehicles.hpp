class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "KAF Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_m81_rgr": 1,
                "synixe_mgp_g3_field_set_m81_m81": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_blk": 0.5,
            "synixe_mgp_f_face_shield_blk_tactical": 0.5,
        });

        @Primary({
           "weapons": {
                "arifle_SPAR_01_blk_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_AP_Stanag_green_RF": 6,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "muzzle_snds_M": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_teamleader_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

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
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_hgunner_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "probability": 0.5,                    
                    "magazinesVest": {
                        "150Rnd_762x54_Box": 4,
                    },
                },
                "arifle_SPAR_02_blk_F": {
                    "probability": 0.5,                    
                    "magazinesVest": {
                        "75Rnd_556x45_Stanag_green_lxWS": 8,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_blk": 1,
                "muzzle_snds_M": 1,
            }
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_03_blk_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "suppressor_h_lxWS": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_medic_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
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
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_rgr": 1,
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
                "synixe_mgp_bp_molle_pointman_rgr": 1,
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
                "synixe_mgp_bp_molle_tomahawk_rgr": 1,
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

    class CLASS(Spotter): CLASS(Base) {
        @Role(Spotter);
        
        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });

        @Headgear({
            "synixe_mgp_h_cap_m81_earphones": 1,
            "synixe_mgp_h_cap_m81": 1,
            "synixe_mgp_h_cap_m81_backwards": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
            },
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "srifle_DMR_04_F": {
                    "magazinesVest": {
                        "10Rnd_127x54_Mag": 4,
                    },
                },
            },
            "optics": {
                "optic_DMS_weathered_Kir_F": 1,
                "optic_tws_sniper": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });
    };
};
