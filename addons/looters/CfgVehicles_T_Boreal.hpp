class CLASS2(SIDE,Boreal): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Boreal);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "eou_gorka_15": 1,
            "eou_gorka_13": 1,
            "eou_gorka_14": 1,
            "U_O_R_Gorka_01_black_F": 1,
            "eou_gorka_32": 1,
            "eou_gorka_25": 1,
            "eou_gorka_31": 1,
            "U_C_PilotJacket_black_RF": 1,
            "U_C_PilotJacket_brown_RF": 1,
            "U_C_PilotJacket_lbrown_RF": 1,
            "U_C_PilotJacket_open_black_RF": 1,
            "U_C_PilotJacket_open_brown_RF": 1,
            "U_C_PilotJacket_open_lbrown_RF": 1,
            "U_C_E_LooterJacket_01_F": 1,
            "U_I_L_Uniform_01_tshirt_black_F": 1,
            "U_I_L_Uniform_01_tshirt_olive_F": 1,
            "U_I_L_Uniform_01_tshirt_skull_F": 1,
            "U_I_L_Uniform_01_tshirt_sport_F": 1,
        },
    });

    @Vests({
        "variants": {
            "": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "": 1,
        "H_Watchcap_cbr": 1,
        "H_Watchcap_camo": 1,
        "H_Watchcap_black_hsless": 1,
        "H_Watchcap_hunter_hsless": 1,
        "H_Booniehat_black": 1,
        "H_Booniehat_hunter": 1,
        "H_Booniehat_oli": 1,
    });

    @Facewear({
        "": 1,
        "G_Bandanna_blk": 1,
        "G_Bandanna_shades": 1,
        "G_Bandanna_sport": 1,
        "G_Shades_Black": 1,
        "G_Spectacles_Tinted": 1,
        "G_Bandanna_Skull1": 1,
        "G_Bandanna_Syndikat2": 1,
        "G_Bandanna_Skull2": 1,
    });

    @Backpacks({
        "variants": {
            "B_AssaultPack_blk": 1,
            "B_AssaultPack_rgr": 1,
            "B_FieldPack_blk": 1,
            "B_FieldPack_khk": 1,
            "B_TacticalPack_blk": 1,
            "B_TacticalPack_oli": 1,
            "B_CivilianBackpack_01_Everyday_Astra_F": 1,
            "B_CivilianBackpack_01_Everyday_Black_F": 1,
            "B_CivilianBackpack_01_Everyday_Vrana_F": 1,
            "B_CivilianBackpack_01_Sport_Blue_F": 1,
            "B_CivilianBackpack_01_Sport_Red_F": 1,
            "B_DuffleBag_MTP_RF": 1,
            "B_DuffleBag_Black_RF": 1,
            "B_DuffleBag_Blue_RF": 1,
            "B_DuffleBag_Sand_RF": 1,
            "B_DuffleBag_Olive_RF": 1,
            "B_LegStrapBag_black_F": 1,
            "B_LegStrapBag_coyote_F": 1,
            "B_LegStrapBag_olive_F": 1,
            "B_Messenger_Black_F": 1,
            "B_Messenger_Coyote_F": 1,
            "B_Messenger_Gray_F": 1,
            "B_Messenger_Olive_F": 1,
        },
    });
};
class CLASS2(SIDE,Boreal_Looter): CLASS2(SIDE,Boreal) {
    @Role(Looter);

    @Primary({
        "weapons": {
            "hgun_PDW2000_F": {
                "probability": 2,
                "magazinesBackpack": {
                    "30Rnd_9x21_Mag_SMG_02": 5,
                },
            },
            "SMG_02_F": {
                "probability": 2,
                "magazinesBackpack": {
                    "30Rnd_9x21_Mag_SMG_02": 5,
                },
            },
            "sgun_Mp153_classic_F": {
                "probability": 1,
                "magazinesBackpack": {
                    "4Rnd_12Gauge_Pellets": 8,
                },
            },
            "sgun_HunterShotgun_01_sawedoff_F": {
                "probability": 1,
                "magazinesBackpack": {
                    "2Rnd_12Gauge_Pellets": 8,
                },
            },
            "Aegis_arifle_AKS74_F": {
                "probability": 2,
                "magazinesBackpack": {
                    "30Rnd_545x39_Mag_F": 5,
                },
            },
            "arifle_AKM_F": {
                "probability": 1,
                "magazinesBackpack": {
                    "30Rnd_762x39_Mag_F": 5,
                },
            },
            "Opf_arifle_SKS_F": {
                "probability": 2,
                "magazinesBackpack": {
                    "30Rnd_762x39_Mag_F": 5,
                },
            },
        },
    });
};

class CLASS2(SIDE,Boreal_LooterPistol): CLASS2(SIDE,Boreal) {
    @Role(PistolLooter);

    @Secondary({
        "weapons": {
            "hgun_ACPC2_black_F": {
                "probability": 1,
                "magazinesUniform": {
                    "9Rnd_45ACP_Mag": 3,
                },
            },
            "hgun_Pistol_heavy_02_F": {
                "probability": 1,
                "magazinesUniform": {
                    "6Rnd_45ACP_Cylinder": 5,
                },
            },
            "hgun_G17_black_F": {
                "probability": 1,
                "magazinesUniform": {
                    "17Rnd_9x21_Mag": 3,
                },
            },
            "JCA_hgun_M9A1_black_F": {
                "probability": 1,
                "magazinesUniform": {
                    "JCA_15Rnd_9x19_M9A1_FMJ_Mag": 3,
                },
            },
            "hgun_Pistol_01_F": {
                "probability": 1,
                "magazinesUniform": {
                    "10Rnd_9x21_Mag": 5,
                },
            },
            "hgun_Rook40_F": {
                "probability": 1,
                "magazinesUniform": {
                    "17Rnd_9x21_Mag": 3,
                },
            },
        },
    });
};

class CLASS2(SIDE,Boreal_Hunter): CLASS2(SIDE,Boreal) {
    @Role(Hunter);

    @Primary({
        "weapons": {
            "srifle_DMR_06_hunter_F": {
                "probability": 3,
                "magazinesBackpack": {
                    "10Rnd_Mk14_762x51_Mag_blk_lxWS": 10,
                },
            },
            "Aegis_srifle_SVD_f": {
                "probability": 3,
                "magazinesBackpack": {
                    "10Rnd_762x54_Mag": 8,
                },
            },
            "arifle_SLR_lxWS": {
                "probability": 1,
                "magazinesBackpack": {
                    "20Rnd_762x51_slr_lxWS": 4,
                },
            },
            "sgun_Mp153_classic_F": {
                "probability": 1,
                "magazinesBackpack": {
                    "4Rnd_12Gauge_Slug": 8,
                },
            },
            "sgun_HunterShotgun_01_F": {
                "probability": 1,
                "magazinesBackpack": {
                    "2Rnd_12Gauge_Slug": 8,
                },
            },
        },
        "optics": {
            "": 3,
            "optic_DMS_weathered_F": 1,
        },
    });
};
