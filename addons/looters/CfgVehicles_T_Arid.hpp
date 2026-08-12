class CLASS2(SIDE,Arid): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Arid);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "U_BG_Guerilla2_2": 1,
            "U_BG_Guerilla2_1": 1,
            "U_BG_Guerilla2_3": 1,
            "U_C_Poor_1": 1,
            "U_C_Poor_2": 1,
            "U_I_C_Soldier_Bandit_3_F": 1,
            "U_I_C_Soldier_Bandit_2_F": 1,
            "U_C_Uniform_Farmer_01_F": 1,
            "U_I_L_Uniform_01_tshirt_skull_F": 1,
            "U_I_L_Uniform_01_tshirt_sport_F": 1,
            "U_C_ConstructionCoverall_Black_F": 1,
            "U_C_ConstructionCoverall_Blue_F": 1,
            "U_C_ConstructionCoverall_Red_F": 1,
            "U_C_Mechanic_01_F": 1,
            "casual_plaid_black_khaki_uniform": 1,
            "casual_plaid_gray_khaki_uniform": 1,
            "casual_plaid_red_denim_uniform": 1,
            "casual_solid_navy_black_uniform": 1,
            "casual_solid_blue_sage_uniform": 1,
            "casual_solid_red_sage_uniform": 1,
            "casual_plaid_blue_khaki_uniform": 1,
        },
    });

    @Vests({
        "variants": {
            "": 3,
            "V_Pocketed_black_F": 1,
            "V_Pocketed_hunter_F": 1,
            "V_Pocketed_coyote_F": 1,
            "V_Pocketed_wdl_F": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "H_Bandanna_gry": 1,
        "H_Bandanna_cbr": 1,
        "H_Bandanna_surfer_blk": 1,
        "H_Bandanna_surfer": 1,
        "H_Booniehat_tan": 1,
        "H_Booniehat_blk": 1,
        "H_Booniehat_mgrn": 1,
        "H_Cap_blk": 1,
        "H_Cap_oli": 1,
        "H_Cap_red": 1,
        "H_Cap_blu": 1,
        "H_Shemag_olive": 1,
        "H_ShemagOpen_tan": 1,
        "H_HeadBandage_stained_F": 1,
        "H_HeadBandage_bloody_F": 1,
    });

    @Facewear({
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
class CLASS2(SIDE,Arid_Looter): CLASS2(SIDE,Arid) {
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

class CLASS2(SIDE,Arid_LooterPistol): CLASS2(SIDE,Arid) {
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

class CLASS2(SIDE,Arid_Hunter): CLASS2(SIDE,Arid) {
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
