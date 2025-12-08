class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Kushan Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_CombatFatigues_dst_F": 1,
                "Aegis_U_O_CombatFatigues_02_dst_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_cbr_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "MiniGrenade": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_HiCut_Cover_dst_F": 1,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Balaclava_light_blk_F": 1,
            "G_Balaclava_light_G_blk_F": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SA80_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 6,
                    }
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
                "optic_Holosight": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
                "muzzle_snds_H_snd_F": 1,
            }
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

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

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
                "arifle_SA80_GL_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 9,
                        "1Rnd_HE_Grenade_shell": 4,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_black_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
                "optic_Holosight": 2,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
                "muzzle_snds_H_snd_F": 1,
            }
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_F": {
                    "magazinesVest": {
                        "200Rnd_65x39_cased_Box_Tracer_Red": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_65x39_cased_Box_Tracer_Red": 2,
                    },
                },
            },
            "optics": {
                "optic_Holosight": 1,
                "optic_Arco_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            }
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_SA80_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 6,
                    }
                },
            },
            "optics": {
                "optic_DMS": 1,

            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
                "muzzle_snds_H_snd_F": 1,
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

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
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
                "launch_RPG32_tan_lxWS": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_oicamo_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_cbr": 1,
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
                "B_Kitbag_cbr": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_heavy_Coyote_F": 1,
            }
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
                "arifle_SA80_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 5,
                    },
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });

        @Headgear({
            "lxWS_H_turban_03_sand": 1,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_DMR_04_Tan_F": {
                    "magazinesVest": {
                        "10Rnd_127x54_Mag": 6,
                    },
                },
            },
            "optics": {
                "optic_DMS_weathered_Kir_F": 1,
                "optic_tws_sniper": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
            },
        });
    };
};
