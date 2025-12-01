class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "NGHI Base Special Forces";
        editorSubcategory = QGCLASS(sof);
        
        @Uniforms({
            "variants": {
                "Atlas_U_B_H_Soldier_commando_shortsleeve_F": 1,
                "Atlas_U_B_H_Soldier_commando_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_recon_olive_F": 1,
                "V_CarrierRigKBT_01_light_Olive_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_olive_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Shemag_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
                "arifle_SCAR_L_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
                "arifle_SCAR_L_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_high_black_sand_lxWS": 1,
                "optic_r1_high_lxWS": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
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
                },
            },
        });

        @Launchers({
            "weapons": {
                "": 0.8,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.2,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Launchers({
            "weapons": {
                "": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_SCAR_L_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_high_black_sand_lxWS": 1,
                "optic_r1_high_lxWS": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Tracer_F": 4,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_Tracer_F": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_FieldPack_oli": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_240_F": {
                    "magazinesVest": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 4,
                    },
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "optic_r1_low_lxWS": 1,
                "optic_rds_RF": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_oli": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_alt_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_Alt_Oli_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_SR25_blk_F": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_SMAG": 9,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
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

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_NLAW_F": {
                },
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_commando_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_TacticalPack_oli": 1,
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
};
