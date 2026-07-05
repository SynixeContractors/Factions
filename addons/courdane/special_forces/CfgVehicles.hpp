class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Courdane Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_01_ardi_half_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_half_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
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
                "lot_SCAR_L_grip_short_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black_magnifier": 1,
                "JCA_optic_IHO_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_Enhanced_sand": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 3,
                    },
                },
            },
            "optics": {
                "JCA_optic_MPO_black": 1,
            },
            "pointers": {
                "JCA_acc_LightMount_Pistol_black": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_teamleader_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
                "leader_smoke",
                "jtac",
            ],
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "lot_SCAR_L_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 8,
                        "1Rnd_HE_Grenade_shell": 5,
                    },
                    "loadedPrimary": "JCA_30Rnd_556x45_PMAG",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_IHO_black_magnifier": 1,
                "JCA_optic_IHO_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_Enhanced_sand": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_hgunner_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

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
                "lot_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "150Rnd_556x45_Drum_Mag_F": 5,
                    },
                    "magazinesBackpack": {
                        "150Rnd_556x45_Drum_Mag_F": 5,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black_magnifier": 1,
                "JCA_optic_IHO_black": 1,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_Enhanced_sand": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_rgr": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

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
                "JCA_muzzle_snds_762_tactical_sand": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_medic_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

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
                "B_AssaultPackSpec_rgr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
            },
            "packs": [
                "jtac",
            ],
        });
    };

        class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "synixe_mgp_bp_molle_pointman_rgr": 1,
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
                "synixe_mgp_bp_molle_tomahawk_rgr": 1,
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
            "synixe_mgp_h_cap_rgr": 1,
            "synixe_mgp_h_cap_rgr_earphones": 1,
            "H_Watchcap_camo": 1,
            "H_Watchcap_camo_hs": 1,
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Primary({
            "weapons": {
                "JCA_srifle_AWM_sand_F": {
                    "magazinesVest": {
                        "JCA_5Rnd_338LM_AWM_Mag": 5,
                    },
                },
            },
            "optics": {
                "JCA_optic_HPPO_RAD_black": 1,
            },
            "bipods": {
                "JCA_bipod_AWM_01_black": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_AWM_black": 1,
            },
        });
    };
};
