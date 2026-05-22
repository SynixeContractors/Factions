class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Courdane Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_Chestrig_rgr": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_mgrn": 1,
            "H_Booniehat_mgrn_hs": 1,
            "synixe_mgp_h_cap_rgr": 1,
            "synixe_mgp_h_cap_rgr_earphones": 1,
            "H_Watchcap_camo": 1,
            "H_Watchcap_camo_hs": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Primary({
            "weapons": {
                "lot_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
            },
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

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });

        @Primary({
            "weapons": {
                "lot_SCAR_L_GL_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag_red",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
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
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Red_F": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_Red_F": 2,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "lot_SCAR_grip_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    }
                }
            },
            "optics": {
                "JCA_optic_CRBS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "suppressor_h_lxWS": 1,
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
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "JCA_launch_Mk153_PWS_olive_F": {
                    "magazinesBackpack": {
                        "JCA_MK153_HEAT_F": 2,
                        "JCA_MK153_HE_F": 2,
                    },
                "loadedPrimary": "JCA_MK153_HEAT_F",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "packs": [
                "engineer",
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
                "lot_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_red": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
            },
        });

        @Uniforms({
            "variants": {
                "U_B_FullGhillie_sard": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });

        @Headgear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "JCA_srifle_AWM_sand_F": {
                    "magazinesVest": {
                        "JCA_5Rnd_338LM_AWM_Mag": 5,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
            "bipods": {
                "JCA_bipod_AWM_01_black": 1,
            },
            "muzzles": {
                "": 1,
            },
        });
    };
};
