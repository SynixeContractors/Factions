class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Treidan Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_rbs_rbs": 1,
                "synixe_mgp_g3_fleece_rgr_rbs": 1,
            },
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "MiniGrenade": 2,
            },
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_Headset_rgr_F": 1,
            "Aegis_H_Helmet_Virtus_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr_ess": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_rgr": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_rgr_ess": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_CTAR_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                    },
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });

        @Launchers({
            "weapons": {
                "JCA_launch_M72_olive_F": {
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_CTAR_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                        "1Rnd_HEDP_Grenade_shell": 5,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_Tracer_F": 4,
                    },
                    "magazinesBackpack": {
                        "100Rnd_580x42_Mag_Tracer_F": 4,
                    },
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_sgg": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
            },
        });

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_F": {
                    "magazinesVest": {
                        "Aegis_200Rnd_762x51_MAG_Green_Tracer_F": 2,
                    },
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Green_Tracer_F": 3,
                    },
                },
            },
            "optics": {
                "": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_sgg": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_sgg": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Green_Tracer_F": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
            },
            "magazines": {
                "MiniGrenade": 1,
            },
        });

        @Primary({
            "weapons": {
                "srifle_DMR_03_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    },
                },
            },
            "optics": {
                "tacgt_optic_DMS": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipod": {
                "bipod_01_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
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
                "t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_MRAWS_green_rail_F": {
                    "magazinesBackpack": {
                        "MRAWS_HEAT55_F": 2,
                        "MRAWS_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_sgg": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_sgg": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": {
                        "Titan_AT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_sgg": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_sage_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_sgg": 1,
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
                "B_Kitbag_sgg": 1,
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

    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_oli_F": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_MP5_FL_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x21_MP5_Mag": 4,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_B_visor_up": 1,
            "H_PilotHelmetHeli_B": 1,
            "H_CrewHelmetHeli_B": 1,
        });
    };
};

