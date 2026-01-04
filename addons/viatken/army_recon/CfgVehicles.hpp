class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Viatken Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
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

        @Headgear({
            "Aegis_H_MilCap_tachs_grn_F": 1,
            "tacs_Hat_Boonie_RangerGreen": 1,
            "H_Watchcap_camo": 1,
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_Lite_ardi_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
                "V_Chestrig_rgr": 1,
                "Aegis_V_TacVest_RigB_oli_RF": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
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

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_Lite_ardi_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
                "V_Chestrig_rgr": 1,
                "Aegis_V_TacVest_RigB_oli_RF": 1,
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
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                        "30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F": 2,
                    }
                },
            },
            "optics": {
                "optic_Arco_AK_blk_F": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_blk": 1,
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
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_Green_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierGora_Lite_ardi_F": 1,
                "Atlas_V_OCarrierGora_Lite_grn_F": 1,
                "V_Chestrig_rgr": 1,
                "Aegis_V_TacVest_RigB_oli_RF": 1,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "SmokeShell": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_RPK12_F": {
                    "magazinesVest": {
                        "75rnd_762x39_AK12_Mag_Tracer_F": 6,
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
                        "17Rnd_9x21_Mag": 3,
                    },
                },
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
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_blk": 1,
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
                "B_LegStrapBag_black_F": 1,
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
        
        @Primary({
            "weapons": {
                "arifle_AK12_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_Green_F": 6,
                    }
                },
            },
            "optics": {
                "optic_Arco_AK_blk_F": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_blk": 1,
            }
        });

        @Uniforms({
            "variants": {
                "U_I_FullGhillie_sard": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_ChestrigF_rgr": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({});

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
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_LRR_F": {
                    "magazinesVest": {
                        "7Rnd_408_Mag": 8,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
        });
    };
};
