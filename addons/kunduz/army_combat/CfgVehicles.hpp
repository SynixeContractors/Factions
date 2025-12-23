class CfgVehicles {
    #include "CfgVehicles_Cars.hpp"

    #define TEMPLATE_FACTION QPCLASS(t4_indep)
    #define TEMPLATE_SIDE 2
    #include "..\..\..\templates\statics\M2.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Kunduz Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_01_ardi_half_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_half_F": 1,
            },
            "packs": [
                "t4_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_Lite_khk_F": 1,
                "Atlas_V_OCarrierRig_CQB_khk_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });

        @Headgear({
            "synixe_mgp_h_cap_khk": 1,
            "synixe_mgp_h_cap_khk_backwards": 1,
            "synixe_mgp_h_cap_khk_earphones": 1,
            "H_PASGT_basic_olive_F": 1,
            "H_PASGT_basic_sand_F": 1,
            "lxWS_H_ssh40_green": 1,
            "lxWS_H_ssh40_sand": 1,
        });

        @Facewear({
            "Aegis_G_Armband_IND_F": 1,
        });

        @Assigned(Military);

         @Primary({
            "weapons": {
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 7,
                    }
                },
                "arifle_AKM_FL_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 7,
                    }
                },
                "Aegis_arifle_AKS74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 7,
                    }
                },
                "Aegis_arifle_AK74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_Tracer_F": 7,
                    }
                },
                "Aegis_arifle_AK103_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_polymer_Black_Mag_F": 7,
                    }
                },
                "Aegis_arifle_M16A4_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M16A4_FG_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M4A1_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M4A1_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "Aegis_arifle_M4A1_short_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                    }
                },
                "arifle_SLR_V_lxWS": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_slr_reload_tracer_yellow_lxWS": 7,
                    }
                },
                "arifle_SLR_lxWS": {
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_slr_reload_tracer_yellow_lxWS": 7,
                    }
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
                "Aegis_optic_ACOG": 0.2,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.9,
                "launch_RPG7_F": {
                    "probability": 0.1,
                    "loadedPrimary": "RPG7_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
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

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Aegis_arifle_AKM74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                        "1Rnd_HEDP_Grenade_shell": 7,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_AK74_GL_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                        "1Rnd_HEDP_Grenade_shell": 7,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_AK74_GL_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Black_Mag_F": 7,
                        "1Rnd_HEDP_Grenade_shell": 7,
                    },
                    "loadedPrimary": "30Rnd_545x39_Black_Mag_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                 "Aegis_arifle_M16A4_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                        "1Rnd_HEDP_Grenade_shell": 7,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
                "Aegis_arifle_M4A1_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 7,
                        "1Rnd_HEDP_Grenade_shell": 7,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
                "Aegis_optic_ACOG": 0.2,
            },
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);


        @Primary({
            "weapons": {
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
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "LMG_S77_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 2,
                    },
                    "magazinesBackpack": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 4,
                    },
                },
                "LMG_S77_Compact_lxWS": {
                    "magazinesVest": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 2,
                    },
                    "magazinesBackpack": {
                        "100Rnd_762x51_S77_Yellow_lxWS": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87_snd": 1,
                "Aegis_optic_1p87": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_r1_high_lxWS": 1,
                "optic_r1_low_lxWS": 1,
                "optic_VRCO_RF": 1,
                "Aegis_optic_ICO": 1,
                "": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
            },
            "magazines": {
                "100Rnd_762x51_S77_Yellow_lxWS": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_SLR_V_lxWS": {
                    "magazinesVest": {
                        "20Rnd_762x51_slr_lxWS": 7,
                    }
                },
                "arifle_SLR_lxWS": {
                    "magazinesVest": {
                        "20Rnd_762x51_slr_lxWS": 7,
                    }
                },
                "Aegis_srifle_SVD_f": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 7,
                    }
                },
            },
            "optics": {
                "optic_AMS": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
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
                "tacs_Backpack_Kitbag_Medic_Black": 1,
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
                "tacs_Backpack_Kitbag_Medic_Green": 1,
                "tacs_Backpack_Kitbag_Medic_Grey": 1,
                "tacs_Backpack_Kitbag_Medic_RGR": 1,
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
                "tacs_Backpack_Kitbag_Medic_Tan": 1,
            },
            "packs": [
                "t4_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HE_RF": 1,
                    },
                },
                "Aegis_launch_RPG7M_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HE_RF": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_blk": 1,
                "B_Kitbag_cbr": 1,
                "B_Kitbag_rgr": 1,
                "B_Kitbag_khk": 1,
                "B_Kitbag_sgg": 1,
                "B_Kitbag_tan": 1,
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
                "toolkit",
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

    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        @Headgear({
            "H_HelmetCrew_I_I": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_O_visor_up": 1,
            "H_PilotHelmetHeli_O": 1,
            "H_CrewHelmetHeli_O": 1,
        });
    };
};

