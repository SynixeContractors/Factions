class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t1_indep)
    #define TEMPLATE_SIDE 2
    #define TEMPLATE_CAMO Olive
    #include "../../../templates/statics/RGS60.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Green
    #include "../../../templates/drones/UGV.hpp"
    #include "../../../templates/drones/MQ12.hpp"
    #include "../../../templates/cars/LSV.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Default
    #include "../../../templates/drones/MQ47.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Gray
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #include "../../../templates/cars/Ram_Civilian.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Virelia Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        @Assigned(Military);

        @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_atacsfg_atacsfg": 1,
                "synixe_mgp_g3_field_set_atacsfg_rgr": 1,
                "synixe_mgp_g3_field_set_atacsfg_blk": 1,
                "synixe_mgp_g3_fleece_rgr_atacsfg": 1,
                "synixe_mgp_g3_fleece_gry_atacsfg": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
                "military_standard",
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_HiCut_Headset_grn_F": 1,
            "Atlas_H_HelmetCCH_Headset_grn_F": 1,
        });

        @Facewear({
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_glasses_black_F": 1,
            "G_Balaclava_blk_lxWS": 1,
            "G_Balaclava_oli_lxWS": 1,
            "Aegis_G_scrimNet_under_black_F": 1,
            "Aegis_G_scrimNet_under_olive_F": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AK12_lush_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30rnd_762x39_AK12_Lush_Mag_F": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_CRBS_olive": 1,
                "JCA_optic_MROS_olive": 1,
                "JCA_optic_MROS_olive_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_lush": 1,
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
                "JCA_acc_LightMount_Pistol_black": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

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
                "synixe_mgp_vest_mmac_teamleader_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
                "military_standard",
                "jtac",
            ],
        });
    };

    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_grenadier_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
                "military_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_AK12_GL_lush_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30rnd_762x39_AK12_Lush_Mag_F": 8,
                        "1Rnd_HE_Grenade_shell": 5,
                    },
                    "loadedPrimary": "30rnd_762x39_AK12_Lush_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_MROS_olive": 1,
                "JCA_optic_MROS_olive_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_lush": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_hgunner_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
                "military_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_RPK12_lush_F": {
                    "probability": 1,                    
                    "magazinesVest": {
                        "75rnd_762x39_AK12_Lush_Mag_F": 4,
                    },
                    "magazinesBackpack": {
                        "75rnd_762x39_AK12_Lush_Mag_F": 4,
                    },
                },
            },
            "optics": {
                "JCA_optic_CRBS_olive": 1,
                "JCA_optic_MROS_olive": 1,
                "JCA_optic_MROS_olive_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_lush": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
                "military_standard",
            ],
        });

        @Primary({
            "weapons": {
                "srifle_DMR_01_black_RF": {
                    "magazinesVest": {
                        "10Rnd_762x54_Mag": 8,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "bipods": {
                "bipod_02_F_blk": 1,
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_762_blk": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_medic_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
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
                        "RPG32_HE_F": 2,
                    },
                    "loadedPrimary": "RPG32_F",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_green_F": 1,
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
                "synixe_mgp_bp_molle_pointman_khk": 1,
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
                "synixe_mgp_bp_molle_tomahawk_khk": 1,
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
            "H_Shemag_olive": 1,
            "H_Shemag_olive_hs": 1,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "": 1,
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
                "synixe_mgp_vest_mmac_marksman_khk_belt": 1,
            },
            "packs": [
                "compact_nvg",
            ],
        });

        @Primary({
            "weapons": {
                "Aegis_srifle_GM6B_khaki_F": {
                    "magazinesVest": {
                        "Aegis_5Rnd_127x99_AP_Mag": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_MRPS_olive": 3,
                "optic_tws_sniper": 1,
            },
        });
    };
};
