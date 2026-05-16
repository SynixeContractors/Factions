class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t4_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO_LIST {\
        QUOTE(Olive),1,\
        QUOTE(Brown),1,\
    }
    #include "../../../templates/cars/Quadbike.hpp"
    #undef TEMPLATE_CAMO_LIST
    #define TEMPLATE_CAMO_LIST {\
        QUOTE(Guerilla_04),1,\
        QUOTE(Guerilla_05),1,\
        QUOTE(Guerilla_07),1,\
        QUOTE(Guerilla_08),1,\
        QUOTE(Guerilla_09),1,\
    }
    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #include "../../../templates/cars/Offroad_Armed.hpp"
    #include "../../../templates/cars/Offroad_AA.hpp"
    #undef TEMPLATE_CAMO_LIST

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Syndikat Paramilitary Base";
        editorSubcategory = QGCLASS(deserters);
        @Assigned(Military);

        @Uniforms({
            "variants": {
                "U_I_C_Soldier_Para_2_F": 1,
                "U_I_C_Soldier_Para_3_F": 1,
                "U_I_C_Soldier_Para_5_F": 1,
                "U_I_C_Soldier_Para_4_F": 1,
                "U_I_C_Soldier_Para_1_F": 1,
                "U_I_C_Soldier_Camo_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
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
            "G_Balaclava_blk_lxWS": 1,
        });
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "V_TacVest_grn": 2,
                "V_TacChestrig_cbr_F": 2,
                "V_TacChestrig_grn_F": 2,
                "V_TacChestrig_oli_F": 2,
                "Atlas_V_ORigLBV_oli_F": 2,
                "Atlas_V_OCarrierRig_CQB_oli_F": 0.4,
                "Atlas_V_OCarrierRig_oli_F": 0.4,
                "Atlas_V_OCarrierRig_Lite_oli_F": 0.4,
            },
            "packs": [
                "t4_standard",
            ],
            "magazines": {
                "HandGrenade": 1,
                "SmokeShell": 1,
            },
        });

        @Headgear({
            "": 1,
            "H_PASGT_basic_olive_F": 0.5,
            "Atlas_H_PASGT_Cover_HIMF_F": 0.5,
            "H_Booniehat_jungle": 1,
            "H_Booniehat_oli": 1,
            "Atlas_H_MilCap_nohs_jungle": 1,
            "Aegis_H_Milcap_nohs_grn_F": 1,
            "H_Bandanna_cbr": 1,
            "H_Bandanna_khk": 1,
            "H_Bandanna_camo": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SCAR_L_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_Sand_red": 6,
                    },
                },
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
                "arifle_AK12_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_F": 6,
                    },
                },
                "arifle_AK12_545_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_F": 6,
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
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
                "Atlas_V_OCarrierRig_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
            "magazines": {
                "HandGrenade": 1,
                "SmokeShell": 1,
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
                "arifle_SCAR_L_GL_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 6,
                        "1Rnd_HEDP_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
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

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "200Rnd_556x45_Box_F": 3,
                    },
                },
                "arifle_RPK_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "75Rnd_762x39_Mag_F": 5,
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
            "packs": [
                "t4_medic",
            ],
        });
    };
    class CLASS(Radiooperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_jungle_F": 1,
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
                        "RPG7_F": 2,
                        "PSRL1_FRAG_RF": 2,
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
            "packs": [
                "engineer"
            ],
        });
    };
    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
            "packs": [
                "eod",
                "demo",
                "ap_mine",
            ],
        });
    };
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_SLR_V_lxWS": {
                    "probability": 1,
                    "magazinesVest": {
                        "Aegis_20Rnd_762x51_slr_reload_tracer_red_lxWS": 7,
                    },
                },
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
};
