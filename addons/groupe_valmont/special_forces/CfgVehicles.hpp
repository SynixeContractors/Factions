class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "GV Base Special Forces";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_blk_rgr": 1,
                "synixe_mgp_g3_field_set_flecktarn_rgr": 1,
                "synixe_mgp_g3_field_set_flecktarn_blk": 1,
                "synixe_mgp_g3_field_set_mc_blk": 1,
                "synixe_mgp_g3_field_set_mc_rgr": 1,
                "synixe_mgp_g3_field_set_rgr_blk": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_mc_belt": 1,
                "synixe_mgp_vest_mmac_assaulter_rgr_belt": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "HandGrenade": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "synixe_mgp_helmet_airframe_01_blk": 1,
            "synixe_mgp_helmet_airframe_01_cb_hexagon": 1,
            "synixe_mgp_helmet_airframe_01_khk": 1,
            "synixe_mgp_helmet_airframe_01_rgr_hexagon": 1,
            "synixe_mgp_helmet_airframe_01_rgr": 1,
            "synixe_mgp_helmet_airframe_01_blk_mcb": 1,
        });

        @Facewear({
            "G_Balaclava_light_blk_F": 1,
            "G_Balaclava_light_G_blk_F": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_ess": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_ess": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_mc": 1,
            "synixe_mgp_f_face_shield_mc_ess": 1,
            "synixe_mgp_f_face_shield_mc_tactical": 1,
        });

        @Assigned(Military);

        @Primary({
            "weapons": {
                "arifle_MX_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
                "optic_ERCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
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
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "acc_flashlight_IR_pistol_RF": 1,
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
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_teamleader_mc_belt": 1,
                "synixe_mgp_vest_mmac_teamleader_rgr_belt": 1,
            },
            "magazines": {
                "SmokeShell": 2,
                "HandGrenade": 1,
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

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_grenadier_mc_belt": 1,
                "synixe_mgp_vest_mmac_grenadier_rgr_belt": 1,
            },
            "magazines": {
                "SmokeShell": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_MX_GL_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_black_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
                "optic_ERCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_MX_SW_Black_F": {
                    "magazinesVest": {
                        "100Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
                "optic_ERCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            }
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_MXM_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_DMS": 1,
                "optic_tws": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            }
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_medic_mc_belt": 1,
                "synixe_mgp_vest_mmac_medic_rgr_belt": 1,
            },
            "magazines": {
                "SmokeShell": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_MXC_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            }
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Primary({
            "weapons": {
                "arifle_MXC_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            }
        });

        @Launchers({
            "weapons": {
                "launch_PSRL1_PWS_black_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_FRAG_RF": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
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
                "synixe_mgp_bp_molle_tomahawk_rgr": 1,
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
                "synixe_mgp_bp_molle_breacher_rgr": 1,
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
                "arifle_MX_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "JCA_optic_MROS_black": 1,
                "optic_ERCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
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
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "acc_flashlight_IR_pistol_RF": 1,
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
            }
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_mc_belt": 1,
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
            "magazines": {
                "SmokeShell": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "srifle_DMR_02_F": {
                    "magazinesVest": {
                        "10Rnd_338_Mag": 8,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
                "optic_tws_sniper": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_338_black": 1,
            },
        });
    };
};
