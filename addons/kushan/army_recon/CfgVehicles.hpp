class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Kushan Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_dst_F": 1,
                "Atlas_U_O_Afghanka_02_dst_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
                "Aegis_V_ChestrigEast_tan_F": 1,
                "Aegis_V_TacVest_RigB_khk_RF": 1,
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
            "lxWS_H_turban_02_sand": 2,
            "lxWS_H_turban_02_green": 2,
            "H_Booniehat_oicamo": 1,
            "H_Booniehat_oicamo_hs": 1,
            "H_Cap_oicamo": 0.5,
            "H_Cap_oicamo_hs": 0.5,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Balaclava_snd_lxWS": 1,
            "G_Balaclava_blk_lxWS": 1,
            "G_Bandanna_oli": 1,
            "G_Bandanna_khk": 1,
            "G_Shades_Black": 1,
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
                "Aegis_optic_ICO_sand": 1,
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
                "": 0.6,
                "hgun_ACPC2_black_F": {
                    "probability": 0.4,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
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
                "Aegis_optic_ICO_sand": 2,
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
                "": 1,
                "optic_Arco_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
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
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
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

        @Uniforms({
            "variants": {
                "U_O_C_D_Sniper_oicamo_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_HarnessO_brn": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "MiniGrenade": 1,
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

        @Headgear({});

        @Facewear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_DMR_05_hex_F": {
                    "magazinesVest": {
                        "10Rnd_93x64_DMR_05_Mag": 6,
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
                "muzzle_snds_93mmg": 1,
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
