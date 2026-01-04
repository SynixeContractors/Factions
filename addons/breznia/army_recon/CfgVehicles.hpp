class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Breznia Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
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
                "V_HarnessO_whex_F": 1,
                "V_lxWS_HarnessO_oli": 1,
                "Atlas_V_ORigLBV_khk_F": 1,
                "V_SmershVest_01_khaki_F": 1,
                "V_SmershVest_01_radio_khaki_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_mcamo": 1,
            "H_Booniehat_mcamo_hs": 1,
            "H_Watchcap_khk_hs": 1,
            "H_Watchcap_camo_hs": 1,
            "H_Watchcap_blk_hs": 1,
            "H_Watchcap_cbr_hs": 1,
            "H_Headset_Tactical_khk": 1,
            "H_Headset_Tactical_grn": 1,
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
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
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

        @Vests({
            "variants": {
                "V_HarnessO_whex_F": 1,
                "V_lxWS_HarnessO_oli": 1,
                "V_HarnessOGL_whex_F": 1,
                "V_HarnessOGL_brn": 1,
                "Atlas_V_ORigLBV_khk_F": 1,
                "V_SmershVest_01_khaki_F": 1,
                "V_SmershVest_01_radio_khaki_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_tan_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 9,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
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
        
        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
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
                },
                "Aegis_srifle_SVD_blk_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 9,
                    }
                },
            },
            "optics": {
                "optic_AMS": 1,
                "optic_DMS": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 0.6,
                "acc_pointer_IR": 0.4,
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

    class CLASS(Spotter): CLASS(Base) {
        @Role(Spotter);

        @Uniforms({
            "variants": {
                "U_B_FullGhillie_lsh": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_HarnessO_whex_F": 1,
                "V_lxWS_HarnessO_oli": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_LRR_camo_F": {
                    "magazinesVest": {
                        "7Rnd_408_Mag": 4,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
            "muzzles": {
                "muzzle_snds_408_black": 1,
            },
        });
    };
};
