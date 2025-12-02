class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

         @Uniforms({
            "variants": {
                "Atlas_U_UniformBDU_01_m81_F": 0.5,
                "Atlas_U_UniformBDU_02_m81_F": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "WSLV_Platecarrier_WDL_NF": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetB_plain_wdl": 0.3,
            "H_Watchcap_camo": 0.3,
            "synixe_mgp_h_cap_m81": 0.3,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 0.2,
            "synixe_mgp_f_face_shield_rgr_tactical": 0.2,
            "synixe_mgp_f_face_shield_rgr": 0.2,
            "synixe_mgp_f_face_shield_blk": 0.2,
            "synixe_mgp_f_face_shield_blk_tactical": 0.2,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_SPAR_02_blk_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.6,
                "optic_VRCO_RF": 0.4,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_SPAR_01_GL_blk_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 0.6,
                "optic_VRCO_RF": 0.4,
            },
            "pointers": {
                "saber_light_lxWS": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Zafir_black_F": {
                    "magazinesVest": {
                        "150Rnd_762x54_Box": 2,
                    },
                },
            },
            "optics": {
                "Aegis_optic_ICO": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_Headset_Tactical": 0.4,
            "H_Watchcap_camo": 0.3,
            "synixe_mgp_h_cap_m81": 0.3,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_Pistol_heavy_01_black_F": {
                    "probability": 0.15,
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
                "toolkit",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Headgear({
            "H_EarProtectors_black_F": 0.2,
            "H_EarProtectors_yellow_F": 0.2,
            "H_EarProtectors_white_F": 0.2,
            "H_Construction_earprot_white_F": 0.2,
            "H_Construction_earprot_yellow_F": 0.2,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 0.5,
                "V_Safety_yellow_F": 0.5,
            },
        });
    };
};
