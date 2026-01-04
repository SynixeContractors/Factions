class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "GV Base Army Garrison";
    editorSubcategory = QGCLASS(army_garrison);

    @Uniforms({
        "variants": {
            "eou_gorka_7": 1,
            "eou_gorka_6": 1,
            "eou_gorka_39": 1,
            "eou_gorka_9": 1,
            "eou_gorka_8": 1,
            "eou_gorka_2": 1,
            "eou_gorka_24": 1,
            "eou_gorka_27": 1,
            "casual_plaid_black_denim_uniform": 1,
            "casual_plaid_black_khaki_uniform": 1,
            "casual_plaid_black_sage_uniform": 1,
            "casual_plaid_gray_denim_uniform": 1,
            "casual_plaid_gray_khaki_uniform": 1,
            "casual_plaid_gray_sage_uniform": 1,
            "casual_plaid_navy_black_uniform": 1,
            "casual_plaid_navy_khaki_uniform": 1,
            "casual_plaid_navy_sage_uniform": 1,
            "casual_plaid_orange_black_uniform": 1,
            "casual_plaid_orange_gray_uniform": 1,
            "casual_plaid_orange_khaki_uniform": 1,
            "casual_plaid_red_khaki_uniform": 1,
            "casual_plaid_red_denim_uniform": 1,
            "casual_solid_gray_khaki_uniform": 1,
            "casual_solid_gray_sage_uniform": 1,
            "casual_solid_navy_gray_uniform": 1,
            "casual_solid_navy_khaki_uniform": 1,
            "casual_solid_navy_sage_uniform": 1,
            "casual_solid_red_khaki_uniform": 1,
            "casual_solid_red_sage_uniform": 1,
            "casual_solid_red_black_uniform": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "Aegis_V_CarrierRigKBT_01_cqb_mtp_F": 1,
            "Aegis_V_CarrierRigKBT_01_cqb_olive_F": 1,
            "Aegis_V_CarrierRigKBT_01_cqb_black_F": 1,
            "Aegis_V_CarrierRigKBT_01_cqb_cbr_F": 1,
            "V_CarrierRigKBT_01_light_Black_F": 1,
            "V_CarrierRigKBT_01_light_MTP_F": 1,
            "V_CarrierRigKBT_01_light_Olive_F": 1,
            "V_CarrierRigKBT_01_light_Coyote_F": 1,
        },
    });

    @Headgear({
        "synixe_mgp_helmet_airframe_01_blk": 1,
        "synixe_mgp_helmet_airframe_01_cb_hexagon": 1,
        "synixe_mgp_helmet_airframe_01_cb": 1,
        "synixe_mgp_helmet_airframe_01_khk": 1,
        "synixe_mgp_helmet_airframe_01_rgr_hexagon": 1,
        "synixe_mgp_helmet_airframe_01_rgr": 1,
        "synixe_mgp_helmet_airframe_01_blk_mcb": 1,
        "H_Headset_Tactical": 1,
        "H_Headset_Tactical_grn": 1,
        "H_Headset_Tactical_khk": 1,
        "synixe_mgp_h_cap_mc_earphones": 1,
        "synixe_mgp_h_cap_mc": 1,
        "synixe_mgp_h_cap_mcb_earphones": 1,
        "synixe_mgp_h_cap_mcb": 1,
        "synixe_mgp_h_cap_rgr_earphones": 1,
        "synixe_mgp_h_cap_rgr": 1,
    });

    @Facewear({
        "G_Balaclava_light_blk_F": 1,
        "synixe_mgp_f_face_shield_blk": 1,
        "synixe_mgp_f_face_shield_blk_tactical": 1,
        "synixe_mgp_f_face_shield_rgr": 1,
        "synixe_mgp_f_face_shield_rgr_tactical": 1,
        "synixe_mgp_f_face_shield_mc": 1,
        "synixe_mgp_f_face_shield_mc_tactical": 1,
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

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);

    @Primary({
        "weapons": {
            "arifle_AK12_545_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                },
            },
            "arifle_SCAR_short_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                },
            },
            "Atlas_Arifle_famasG2_Grip_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SCAR_L_short_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_Galat_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_F": 7,
                },
            },
            "arifle_AK12_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_F": 7,
                },
            },
            "sgun_aa40_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "8Rnd_12Gauge_AA40_HE_lxWS": 7,
                },
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
            "": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
        "muzzles": {
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "muzzle_snds_M": 1,
            "suppressor_h_lxWS": 1,
        },
    });
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Rifleman) {
    @Role(TeamLeader);

    @Primary({
        "weapons": {
            "arifle_AK12_GL_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_F": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_F",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "Atlas_Arifle_famasG2_GL_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_556x45_Stanag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_SCAR_L_GL_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_556x45_Stanag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_AK12_GL_545_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Yellow_F": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_545x39_Black_Mag_Yellow_F",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_1p87": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
    });
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Rifleman) {
    @Role(Autorifleman);

    @Primary({
        "weapons": {
            "Aegis_arifle_RPK12_545_F": {
                "probability": 1,
                "magazinesVest": {
                    "Aegis_60Rnd_545x39_Mag_Tracer_F": 4,
                },
                "magazinesBackpack": {
                    "Aegis_60Rnd_545x39_Mag_Tracer_F": 4,
                },
            },
            "LMG_Zafir_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "ACE_150Rnd_762x54_Box_tracer_yellow": 2,
                },
                "magazinesBackpack": {
                    "ACE_150Rnd_762x54_Box_tracer_yellow": 2,
                },
            },
            "LMG_03_F": {
                "probability": 1,
                "magazinesVest": {
                    "200Rnd_556x45_Box_F": 2,
                },
                "magazinesBackpack": {
                    "200Rnd_556x45_Box_F": 2,
                },
            },
            "arifle_RPK12_F": {
                "probability": 1,
                "magazinesVest": {
                    "75rnd_762x39_AK12_Mag_F": 4,
                },
                "magazinesBackpack": {
                    "75rnd_762x39_AK12_Mag_F": 4,
                },
            },
        },
        "optics": {
            "": 1,
            "optic_Holosight_blk_F": 1,
            "optic_Hamr": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
    });

};

class CLASS2(SIDE,Medic): CLASS2(SIDE,Rifleman) {
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

class CLASS2(SIDE,Maintainer): CLASS2(SIDE,Base) {
    @Role(Maintainer);

    @Headgear({
        "H_Headset_Tactical": 1,
        "H_Headset_Tactical_grn": 1,
        "H_Headset_Tactical_khk": 1,
    });

    @Vests({
        "variants": {
            "V_Safety_orange_F": 1,
        },
    });

    @Secondary({
        "weapons": {
            "": 1,
            "hgun_Pistol_heavy_01_black_F": {
                "probability": 0.5,
                "magazinesVest": {
                    "11Rnd_45ACP_Mag": 3,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_LegStrapBag_black_F": 1,
        },
        "packs": [
            "engineer",
        ],
    });
};

class CLASS2(SIDE,Worker): CLASS2(SIDE,Base) {
    @Role(Worker);

    @Headgear({
        "synixe_mgp_h_cap_blk": 1,
        "synixe_mgp_h_cap_blk_backwards": 1,
        "synixe_mgp_h_cap_rgr": 1,
        "synixe_mgp_h_cap_rgr_backwards": 1,
        "synixe_mgp_h_cap_gry": 1,
        "synixe_mgp_h_cap_gry_backwards": 1,
    });

    @Uniforms({
        "variants": {
            "casual_plaid_black_denim_uniform": 1,
            "casual_plaid_black_khaki_uniform": 1,
            "casual_plaid_gray_denim_uniform": 1,
            "casual_plaid_gray_khaki_uniform": 1,
            "casual_plaid_navy_khaki_uniform": 1,
            "casual_plaid_orange_gray_uniform": 1,
            "casual_plaid_orange_khaki_uniform": 1,
            "casual_plaid_red_khaki_uniform": 1,
            "casual_plaid_red_denim_uniform": 1,
            "casual_solid_gray_khaki_uniform": 1,
            "casual_solid_navy_gray_uniform": 1,
            "casual_solid_navy_khaki_uniform": 1,
            "casual_solid_red_khaki_uniform": 1,
        },
    });

    @Vests({
        "variants": {
            "V_CarrierRigKBT_01_Black_F": 1,
            "V_CarrierRigKBT_01_Coyote_F": 1,
            "V_CarrierRigKBT_01_MTP_F": 1,
            "": 2,
        },
    });

    @Facewear({
        "": 1,
        "G_Aviator": 1,
        "G_Squares_Tinted": 1,
        "G_Glasses_black_RF": 1,
        "G_WirelessEarpiece_F": 1,
        "G_Spectacles_Tinted": 1,
    });

    @Secondary({
        "weapons": {
            "": 1,
            "hgun_Pistol_heavy_01_black_F": {
                "probability": 0.5,
                "magazinesVest": {
                    "11Rnd_45ACP_Mag": 3,
                },
            },
        },
    });
};
