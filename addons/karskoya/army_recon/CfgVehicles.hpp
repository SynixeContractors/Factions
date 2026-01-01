class CfgVehicles {
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_Quad.hpp"
    #include "CfgVehicles_Dingy.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Karskoya Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_UniformBDU_01_m81_F": 1,
                "Atlas_U_UniformBDU_02_m81_F": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_TacVest_RigB_camo_RF": 1,
                "V_TacChestrig_grn_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_mgrn": 0.5,
            "H_Booniehat_mgrn_hs": 1,
            "Aegis_H_Milcap_nohs_grn_F": 0.5,
            "Aegis_H_MilCap_tachs_grn_F": 2,
            "H_Watchcap_camo": 1,
            "H_Watchcap_camo_hs": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_blk": 0.5,
            "synixe_mgp_f_face_shield_blk_tactical": 0.5,
        });

        @Primary({
           "weapons": {
                "arifle_SPAR_02_blk_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.5,
                "optic_VRCO_RF": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "muzzle_snds_M": 1,
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
                "arifle_SPAR_01_GL_blk_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag_red",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.6,
                "optic_VRCO_RF": 0.4,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "muzzle_snds_M": 1,
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

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "magazinesVest": {
                        "150Rnd_762x54_Box": 2,
                    },
                    "magazinesBackpack": {
                        "150Rnd_762x54_Box": 2,
                    },
                },
            },
            "pointers": {
                "acc_pointer_IR": 1,
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
                "B_AssaultPack_wdl_F": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_SPAR_03_blk_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_B": 1,
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
                "tacs_Backpack_Kitbag_Medic_Green": 1,
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
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_wdl_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
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
                "B_TacticalPack_rgr": 1,
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
        
        @Primary({
            "weapons": {
                "arifle_SPAR_02_blk_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 6,
                    },
                },
            },
            "optics": {
                "optic_VRCO_RF": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "muzzle_snds_M": 1,
            },
        });

        @Uniforms({
            "variants": {
                "U_B_W_FullGhillie_wdl_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_TacChestrig_grn_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_DMR_05_blk_F": {
                    "magazinesVest": {
                        "10Rnd_93x64_DMR_05_Mag": 4,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_93mmg": 1,
            },
        });
    };
};
