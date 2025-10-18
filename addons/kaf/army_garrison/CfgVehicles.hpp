class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

         @Uniforms({
            "variants": {
                "synixe_mgp_g3_field_set_m81_m81": 0.5,
                "synixe_mgp_g3_tshirt_blk_m81": 0.5,
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
                "Aegis_arifle_M4A1_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag_green": 6,
                    },
                },
                "Aegis_arifle_M4A1_grip_F": {
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
                "Aegis_arifle_M4A1_GL_F": {
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
                "LMG_03_F": {
                    "magazinesVest": {
                        "ACE_200Rnd_556x45_Box_tracer_green": 2,
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
