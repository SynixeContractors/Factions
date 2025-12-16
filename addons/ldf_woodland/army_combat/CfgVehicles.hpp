class CfgVehicles {
    #include "CfgVehicles_APC.hpp"
    #include "CfgVehicles_Tank.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "LDF Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_F": 1,
                "U_I_E_Uniform_01_shortsleeve_F": 1,
                "U_I_E_Uniform_01_sweater_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "V_CarrierRigKBT_01_heavy_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetHBK_ear_F": 0.5,
            "H_HelmetHBK_headset_F": 0.5,
            "H_HelmetHBK_F": 0.5,
        });

        @Facewear({
            "G_Headset_Tactical": 1,
            "G_Headset_Tactical_grn": 1,
            "G_Headset_Tactical_khk": 1,
            "G_Headset_lxWS": 1,
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Combat_lxWS": 1,
            "tacs_Goggles_Black": 1,
            "tacs_Goggles_Green": 1,
            "tacs_Goggles_Tan": 1,
            "synixe_mgp_f_ess": 1,
        });

        @Primary({
            "weapons": {
                "arifle_MSBS65_camo_F": {
                    "magazinesVest": {
                        "tacgt_30Rnd_65x39_EPR_MSBS": 5,
                        "tacgt_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                    },
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
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
                "Binocular": 1,
            }
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.90,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.1,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Headgear({
            "H_HelmetHBK_headset_F": 1,
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
                "arifle_MSBS65_GL_camo_F": {
                    "magazinesVest": {
                        "tacgt_30Rnd_65x39_EPR_MSBS": 5,
                        "tacgt_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "tacgt_30Rnd_65x39_EPR_MSBS",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "tacgt_200Rnd_65x39_EPR_Belt": 4,
                    },
                    "magazinesBackpack": {
                        "tacgt_200Rnd_65x39_EPR_Belt": 4,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
        });
    };

    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_240_F": {
                    "magazinesVest": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 2,
                    },
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
                    },
                },
            },
            "optics": {
                "optic_Arco_AK_blk_F": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_MSBS65_Mark_camo_F": {
                    "magazinesVest": {
                        "tacgt_20Rnd_65x39_EPR_MSR_MSBS": 5,
                        "tacgt_30Rnd_65x39_AP_MSBS": 3,
                        "tacgt_20Rnd_65x39_Ball_Tracer_MSR_MSBS": 2,
                    }
                }
            },
            "optics": {
                "optic_MRCO": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
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
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
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
                "launch_PSRL1_PWS_geo_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HE_RF": 1,
                        "PSRL1_HEAT_RF": 1,
                    },
                    "loadedPrimary": "PSRL1_HE_RF",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_I_Titan_eaf_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                    "loadedPrimary": "Titan_AA",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                    "loadedPrimary": "Titan_AT",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_eaf_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
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
                "B_TacticalPack_eaf_F": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "V_CarrierRigKBT_01_heavy_EAF_F": 1,
            }
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
                "V_CarrierRigKBT_01_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_UMP_black_F": {
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Mag": 5,
                    }
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_Black_RF": 1,
            "H_PilotHelmetHeli_MilGreen_RF": 1,
            "H_PilotHelmetHeli_White_RF": 1,
        });

        @Vests({
            "variants": {
                "Aegis_V_TacVest_RigB_grn_RF": 1,
                "Aegis_V_TacVest_RigB_khk_RF": 1,
                "Aegis_V_TacVest_RigB_oli_RF": 1,
                
            },
            "packs": [
                "t2_standard",
            ],
        });
    };
};
