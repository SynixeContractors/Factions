class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #define TEMPLATE_CAMO WoodlandHex
    #include "../../../templates/cars/LSV.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Cascadia Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_whex_F": 1,
                "Atlas_U_O_Afghanka_02_whex_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_SmershVest_01_olive_F": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_whex_F": 1,
            "H_Booniehat_whex_hs_F": 1,
            "H_Watchcap_camo": 1,
            "H_Cap_headphones": 1,
            "H_Cap_headphones_rvs": 1,
        });

        @Facewear({
            "JCA_G_balaclava_01_black_F": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "G_Shemag_oli": 1,
        });

        @Primary({
            "weapons": {
                "arifle_CTAR_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    }
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
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
                "arifle_CTAR_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 6,
                    },
                },
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
            },
            "optics": {
                "optic_Arco_blk_F": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_07_blk_F": {
                    "magazinesVest": {
                        "20Rnd_650x39_Cased_Mag_F": 7,
                    }
                },
            },
            "optics": {
                "optic_DMS": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
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

        @Vests({
            "variants": {
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "t3_standard",
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

        @Vests({
            "variants": {
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Launchers({
            "weapons": {
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 1,
                        "RPG32_HE_F": 2,
                    },
                },
                "JCA_launch_Mk153_PWS_olive_F": {
                    "magazinesBackpack": {
                        "JCA_MK153_HEAT_F": 2,
                        "JCA_MK153_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Vests({
            "variants": {
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Backpacks({
            "variants": {
                "B_RadioBag_01_whex_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_LegStrapBag_coyote_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        @Vests({
            "variants": {
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
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

        @Uniforms({
            "variants": {
                "U_B_W_FullGhillie_wdl_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_lxWS_HarnessO_oli": 1,
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
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

        @Primary({
            "weapons": {
                "srifle_DMR_05_ghex_F": {
                    "magazinesVest": {
                        "10Rnd_93x64_DMR_05_Mag": 6,
                    },
                },
            },
            "optics": {
                "optic_LRPS_ghex_F": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_93mmg": 1,
            },
        });
    };
};
