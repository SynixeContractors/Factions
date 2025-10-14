class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Kushan Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_dst_F": 0.5,
                "Atlas_U_O_Afghanka_02_dst_F": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 0.5,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 0.5,
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
            "Atlas_H_HelmetCCH_Cover_dst_F": 0.3,
            "H_Booniehat_oicamo": 0.2,
            "H_Cap_oicamo": 0.2,
            "lxWS_H_turban_03_sand": 0.1,
            "lxWS_H_turban_03_green": 0.1,
            "lxWS_H_turban_03_black": 0.1,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 0.2,
            "G_Balaclava_snd_lxWS": 0.2,
            "G_Balaclava_blk_lxWS": 0.3,
            "G_Bandanna_oli": 0.1,
            "G_Bandanna_khk": 0.1,
            "G_Shades_Black": 0.1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_SA80_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 6,
                    }
                },
            },
            "optics": {
                "": 0.3,
                "optic_Arco_blk_F": 0.3,
                "optic_Holosight": 0.4
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1
            },
            "muzzles": {
                "": 0.8,
                "muzzle_snds_H": 0.1,
                "muzzle_snds_H_snd_F": 0.1
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
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "magazines": {
                "SmokeShell": 2,
                "MiniGrenade": 1,
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

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_SA80_GL_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 9,
                        "1Rnd_HE_Grenade_shell": 4,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    }
                },
            },
            "optics": {
                "optic_Arco_blk_F": 0.2,
                "optic_Holosight": 0.8
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1
            },
            "muzzles": {
                "": 0.8,
                "muzzle_snds_H": 0.1,
                "muzzle_snds_H_snd_F": 0.1
            }
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Vests({
            "magazines": {
                "SmokeShell": 1,
            },
        });

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
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
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
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);


        @Primary({
            "weapons": {
                "MMG_01_tan_F": {
                    "magazinesVest": {
                        "ACE_150Rnd_93x64_Mag_red": 2,
                    },
                    "magazinesBackpack": {
                        "ACE_150Rnd_93x64_Mag_red": 2,
                    },
                },
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
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
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
            "magazines": {
                "ACE_150Rnd_93x64_Mag_red": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Vests({
            "magazines": {
                "SmokeShell": 2
            },
        });

        @Primary({
            "weapons": {
                "arifle_SA80_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 6
                    }
                },
            },
            "optics": {
                "optic_DMS": 1

            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1
            },
            "muzzles": {
                "muzzle_snds_H": 0.5,
                "muzzle_snds_H_snd_F": 0.5
            }
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3
                    },
                },
            },
        });

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1
            },
            "packs": [
                "t2_medic"
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG32_tan_lxWS": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_coyote_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Vorona_brown_F": {
                    "magazinesBackpack": { 
                        "Vorona_HEAT": 2
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_oicamo_F": 1
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_cbr": 1
            },
            "packs": [
                "toolkit"
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1
            },
            "packs": [
                "eod",
                "demo"
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
                "V_CarrierRigKBT_01_Coyote_F": 1
            },
            "packs": [
                "t2_standard"
            ],
        });

        @Headgear({
            "lxWS_H_HelmetCrew_I": 1
        });

        @Primary({
            "weapons": {
                "arifle_SA80_C_snd_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 4
                    }
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 0.2,
            "H_PilotHelmetHeli_B": 0.4,
            "H_CrewHelmetHeli_B": 0.4
        });
    };

};

