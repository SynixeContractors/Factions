class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t4_opfor)
    #define TEMPLATE_SIDE 0
    #define TEMPLATE_CAMO_LIST {\
        QUOTE(Olive),1,\
        QUOTE(Brown),1,\
    }
    #include "../../../templates/cars/Jeep.hpp"
    #include "../../../templates/cars/Jay.hpp"
    #undef TEMPLATE_CAMO_LIST
    #define TEMPLATE_CAMO_LIST {\
        QUOTE(Furious),1,\
        QUOTE(Graywatcher),1,\
        QUOTE(Shadow),1,\
        QUOTE(Jeans),1,\
        QUOTE(Vrana),1,\
    }
    #include "../../../templates/helicopters/MD500_Civilian.hpp"
    #undef TEMPLATE_CAMO_LIST

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Syndikat Bandit Base";
        editorSubcategory = QGCLASS(militia);
        @Uniforms({
            "variants": {
                "U_I_C_Soldier_Bandit_1_F": 1,
                "U_I_C_Soldier_Bandit_3_F": 1,
                "U_I_C_Soldier_Bandit_5_F": 1,
                "U_I_C_Soldier_Bandit_2_F": 1,
                "U_I_C_Soldier_Bandit_4_F": 1,
                "U_MU_B_GuerillaGarment2_tank_g": 1,
                "U_MU_B_GuerillaGarment3_tank": 1,
                "U_MU_B_GuerillaGarment3_skull": 1,
                "U_MU_B_GuerillaGarment3": 1,
                "U_MU_B_GuerillaGarment2_brown": 1,
                "U_MU_B_GuerillaGarment2_grey": 1,
                "U_MU_B_GuerillaGarment2_olive": 1,
            },
          });

        @Facewear({
            "variants" {
                "G_Aviator": 1,
                "G_Bandanna_aviator": 1,
                "G_Bandanna_beast": 1,
                "G_Bandanna_blk": 1,
                "G_Bandanna_khk": 1,
                "G_Bandanna_oli": 1,
                "G_Shades_Black": 1,
                "G_Bandanna_Skull1": 1,
                "G_Bandanna_Syndikat1": 1,
                "G_Bandanna_Skull2": 1,
                "G_Bandanna_Syndikat2": 1,
            }
        });

        @Vests({
            "variants": {
                "V_TacVest_grn": 1,
                "V_TacChestrig_cbr_F": 1,
                "V_TacChestrig_grn_F": 1,
                "V_TacChestrig_oli_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });

        @Headgear({
            "variants" {
                "": 1,
                "H_Booniehat_oli": 1,
                "H_Bandanna_cbr": 1,
                "H_Bandanna_khk": 1,
                "H_Bandanna_camo": 1,
            },
        });

        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand_red": 6,
                    },
                },
                "arifle_AKM_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 6,
                    },
                },
                "Aegis_arifle_AK74_oak_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_F": 6,
                    },
                },
                "Aegis_arifle_AKS74_oak_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_F": 6,
                    },
                },
                "arifle_AKS_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_F": 6,
                    },
                },
            },
        });
    };
    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "V_TacVest_grn": 1,
                "V_TacChestrig_cbr_F": 1,
                "V_TacChestrig_grn_F": 1,
                "V_TacChestrig_oli_F": 1,
            },
            "packs": [
                "binoculars",
            ],
        });
    };
    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Atlas_Arifle_famasG2_Grip_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 6,
                        "1Rnd_40mm_HE_lxWS": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
                "Atlas_Arifle_famasG2_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 6,
                        "1Rnd_40mm_HE_lxWS": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
                "arifle_AK12_GL_545_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Green_F": 6,
                        "1Rnd_40mm_HE_lxWS": 4,
                    },
                    "loadedPrimary": "30Rnd_545x39_Mag_Green_F",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
                "arifle_AK12_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 6,
                        "1Rnd_40mm_HE_lxWS": 4,
                    },
                    "loadedPrimary": "30Rnd_762x39_Mag_F",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
            },
        });
    };
    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_RPK_F": {
                    "probability": 1,
                    "magazinesBackpack": {
                        "75Rnd_762x39_Mag_F": 4,
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
    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "Aegis_MMG_FNMAG_old_F": {
                    "probability": 1,
                    "magazinesBackpack": {
                        "Aegis_200Rnd_762x51_MAG_Yellow_F": 3,
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
    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
            "packs": {
                "t4_medic"
            },
        });
    };
    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG7_F": {
                    "probability": 1,
                    "magazinesBackpack": {
                        "RPG7_F": 1,
                        "PSRL1_FRAG_RF": 1,
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
    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_FieldPack_khk": 1,
            },
            "packs": {
                "engineer"
            }
        });
    };
    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
            "packs": {
                "eod",
                "demo",
            }
        });
    };
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "Aegis_srifle_SVD_f": {
                    "probability": 1,
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 7,
                    },
                },
            },
            "optics": {
                "optic_DMS_weathered_F": 1,
            }
        });
    };

    class CLASS(HeliPilot): CLASS(Base) {
        @Role(HeliPilot);

        @Primary({
            "weapons": {
                "arifle_AKSM_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_F": 5,
                    },
                },
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
        });

        @Vests({
            "variants": {
                "V_TacVest_grn": 1,
                "V_TacChestrig_cbr_F": 1,
                "V_TacChestrig_grn_F": 1,
                "V_TacChestrig_oli_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
            "magazines": {
                "SmokeShell": 1,
            },
        });

        @Headgear({
            "variants" {
                "": 1,
                "H_Cap_marshal": 1,
            },
        });
    };
};
