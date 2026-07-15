class CfgVehicles {
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_LSV.hpp"
    
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Karskoya Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_m81_rgr": 1,
                "synixe_mgp_g3_field_set_m81_m81": 2,
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
                "JCA_arifle_M4A4_AFG_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_Enhanced_black": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
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
                "jtac",
            ],
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "JCA_arifle_M4A4_GL_black_F": {
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
                "optic_Holosight_blk_F": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_Enhanced_black": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
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
                "Atlas_LMG_Negev_black_F": {
                    "probability": 1,                    
                    "magazinesVest": {
                        "Atlas_150Rnd_762x51_Box_Red": 2,
                    },
                    "magazinesBackpack": {
                        "Atlas_150Rnd_762x51_Box_Red": 3,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
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
                "JCA_arifle_SR10_VFG_black_F": {
                    "magazinesVest": {
                        "JCA_20Rnd_762x51_PMAG": 8,
                    }
                }
            },
            "optics": {
                "JCA_optic_CRBS_black": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_762_tactical_black": 1,
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
                "B_AssaultPackSpec_rgr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_green_F": 1,
            },
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
            "synixe_mgp_h_cap_m81_earphones": 1,
            "synixe_mgp_h_cap_m81": 1,
            "synixe_mgp_h_cap_m81_backwards": 1,
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
            },
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
                "srifle_DMR_04_F": {
                    "magazinesVest": {
                        "10Rnd_127x54_Mag": 4,
                    },
                },
            },
            "optics": {
                "optic_DMS_weathered_Kir_F": 1,
                "optic_tws_sniper": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });
    };
};
