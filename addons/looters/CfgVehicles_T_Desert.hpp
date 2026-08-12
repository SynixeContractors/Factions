class CLASS2(SIDE,Desert): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Desert);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "U_lxWS_Djella_03_Green": 1,
            "U_lxWS_Djella_02_Brown": 1,
            "U_lxWS_Djella_02_Grey": 1,
            "U_lxWS_Djella_02_Sand": 1,
            "Atlas_U_C_CommonerJacket_01_blue_F": 1,
            "Atlas_U_C_CommonerJacket_01_grey_F": 1,
            "Atlas_U_C_CommonerJacket_01_marroon_F": 1,
            "U_C_Poor_1": 1,
            "U_C_Poor_2": 1,
            "U_BG_Guerilla3_2": 1,
            "U_I_C_Soldier_Bandit_2_F": 1,
            "U_C_Mechanic_01_F": 1,
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
        "H_Shemag_khk": 1,
        "H_Shemag_olive": 1,
        "H_ShemagOpen_tan": 1,
        "H_ShemagOpen_khk": 1,
        "H_Shemag_blk": 1,
        "H_Shemag_red": 1,
        "lxWS_H_turban_03_black": 1,
        "lxWS_H_turban_03_sand": 1,
        "lxWS_H_turban_03_green": 1,
        "lxWS_H_turban_03_gray": 1,
        "H_HeadBandage_stained_F": 1,
        "H_HeadBandage_bloody_F": 1,
        "H_Hat_Pakol_brn_F": 1,
        "H_Hat_Pakol_gry_F": 1,
        "H_Hat_Pakol_tan_F": 1,
    });

    @Facewear({
        "": 1,
        "G_Shades_Black": 1,
        "G_Spectacles_Tinted": 1,
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
class CLASS2(SIDE,Desert_Looter): CLASS2(SIDE,Desert) {
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

class CLASS2(SIDE,Desert_LooterPistol): CLASS2(SIDE,Desert) {
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

class CLASS2(SIDE,Desert_Hunter): CLASS2(SIDE,Desert) {
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
            "": 2,
            "optic_DMS_weathered_F": 1,
        },
    });
};
