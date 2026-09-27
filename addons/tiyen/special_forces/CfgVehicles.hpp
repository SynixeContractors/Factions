class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Tiyen Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_Luchnik_arid_F": 1,
                "Aegis_U_O_Luchnik_RolledUp_arid_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_combat_olive_F": 1,
            },
            "packs": [
                "military_standard",
                "t3_standard",
            ],
        });

        @Headgear({
            "H_HelmetSpecter_cover_arid_F": 1,
        });

        @Facewear({
            "G_Balaclava_blk_lxWS": 1,
            "JCA_G_Glasses_Tactical_tinted_black_F": 1,
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_CTAR_tan_f": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    },
                },
            },
            "optics": {
                "optic_r1_low_lxWS": 1,
            },
            "pointers": {
                "JCA_acc_LaserModule_black_Pointer": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 2,
                    },
                },
            },
            "pointers": {
                "JCA_acc_LightMount_Pistol_black": 1,
            },
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Aegis_arifle_CTAR_GL_tan_f": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_r1_low_lxWS": 1,
            },
            "pointers": {
                "JCA_acc_LaserModule_black_Pointer": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_CTARS_tan_f": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 3,
                    },
                    "magazinesBackpack": {
                        "100Rnd_580x42_Mag_F": 3,
                    },
                },
            },
            "optics": {
                "optic_r1_low_lxWS": 1,
            },
            "pointers": {
                "JCA_acc_LaserModule_black_Pointer": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
            },
        });

    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_07_blk_F": {
                    "magazinesVest": {
                        "20Rnd_650x39_Cased_Mag_F": 9,
                    },
                },
            },
            "optics": {
                "optic_DMS": 1,
            },
            "muzzles": {
                "muzzle_snds_65_TI_blk_F": 1,
            }
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
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

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
           "weapons": {
                "launch_PSRL1_PWS_black_RF": {
                    "magazinesBackpack": {
                        "RPG7_F": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_arid_F": 1,
            },
            "packs": [
                "jtac",
            ],
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
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
                "B_Carryall_green_F": 1,
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

        @Headgear({
            "H_Shemag_olive": 1,
            "H_Booniehat_khk": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "pointers": {
                "JCA_acc_LightMount_Pistol_black": 1,
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
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
                "srifle_DMR_04_F": {
                    "magazinesVest": {
                        "10Rnd_127x54_Mag": 6,
                    },
                },
            },
            "optics": {
                "optic_DMS_weathered_Kir_F": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });
    };
};
