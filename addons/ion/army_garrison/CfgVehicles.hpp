class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "GV Base Army Garrison";
    editorSubcategory = QGCLASS(army_garrison);

    @Uniforms({
        "variants": {
            "U_lxWS_ION_Casual5": 1,
            "U_lxWS_ION_Casual2": 1,
            "U_lxWS_ION_Casual4": 1,
            "U_lxWS_ION_Casual3": 1,
            "Aegis_U_lxWS_ION_Casual_Hawaiian_F": 1,
            "Aegis_U_lxWS_ION_Casual_Hawaiian_2_F": 1,
            "U_C_Man_casual_7_F": 1,
            "U_C_Man_casual_8_F": 1,
            "U_B_ION_Uniform_01_tshirt_black_F": 1,
            "U_B_ION_Uniform_01_poloshirt_wdl_F": 1,
            "U_B_ION_Uniform_01_poloshirt_blue_F": 1,
            "U_BG_Guerilla2_1": 1,
            "U_BG_Guerilla2_3": 1,
            "U_BG_Guerilla2_2": 1,
            "Aegis_U_lxWS_ION_Flanneltna_F": 1,
            "Aegis_U_lxWS_ION_Casualtna_F": 1,
            "U_lxWS_ION_Casual6": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "V_PlateCarrier1_rgr_noflag_F": 1,
            "V_PlateCarrier1_blk": 1,
            "V_PlateCarrier2_blk": 1,
            "Aegis_V_PlateCarrier2_alt_blk": 1,
            "Aegis_V_PlateCarrier2_alt_cbr": 1,
            "Aegis_V_PlateCarrier2_alt_oli": 1,
            "WSLV_Platecarrier_SNK_NF": 1,
            "WSLV_Platecarrier_WDL_NF": 1,
        },
    });

    @Headgear({
        "H_Cap_blk_ION": 1,
        "H_Cap_blk_ION_hs": 1,
        "H_Cap_headphones_ion_lxws": 1,
        "lxWS_H_CapB_rvs_blk_ION": 1,
        "": 1,
    });

    @Facewear({
        "G_Balaclava_light_blk_F": 1,
        "synixe_mgp_f_tactical": 3,
        "synixe_mgp_f_face_shield_blk": 1,
        "synixe_mgp_f_face_shield_blk_tactical": 1,
        "synixe_mgp_f_face_shield_rgr": 1,
        "synixe_mgp_f_face_shield_rgr_tactical": 1,
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "arifle_SPAR_02_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SPAR_01_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "Aegis_arifle_M4A1_grip_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "Aegis_arifle_M4A1_short_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_XMS_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_XMS_Gray_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_XMS_Camo_lxWS": {
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
            "arifle_SCAR_L_grip_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SCAR_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                },
            },
            "arifle_SCAR_short_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                },
            },
            "sgun_aa40_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "8Rnd_12Gauge_AA40_Pellets_lxWS": 7,
                },
            },
        },
        "optics": {
            "": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
    });

    @Secondary({
        "weapons": {
            "hgun_P07_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "16Rnd_9x21_Mag": 3,
                },
            },
        },
    });
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Rifleman) {
    @Role(TeamLeader);

    @Primary({
        "weapons": {
            "arifle_XMS_GL_lxWS": {
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
            "arifle_SCAR_GL_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "20Rnd_762x51_Mag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
        },
        "optics": {
            "": 1,
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
            "arifle_XMS_M_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 4,
                },
                "magazinesBackpack": {
                    "75Rnd_556x45_Stanag_lxWS": 4,
                },
            },
            "LMG_03_F": {
                "probability": 1,
                "magazinesVest": {
                    "200Rnd_556x45_Box_Tracer_F": 2,
                },
                "magazinesBackpack": {
                    "200Rnd_556x45_Box_Tracer_F": 2,
                },
            },
        },
        "optics": {
            "": 1,
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

    @Primary({
        "variants": {
            "": 1,
        },
    });

    @Secondary({
        "weapons": {
            "": 1,
            "hgun_P07_blk_F": {
                "probability": 0.5,
                "magazinesVest": {
                    "16Rnd_9x21_Mag": 3,
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

    @Primary({
        "variants": {
            "": 1,
        },
    });

    @Vests({
        "variants": {
            "": 1,
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
            "hgun_P07_blk_F": {
                "probability": 0.5,
                "magazinesVest": {
                    "16Rnd_9x21_Mag": 3,
                },
            },
        },
    });
};
