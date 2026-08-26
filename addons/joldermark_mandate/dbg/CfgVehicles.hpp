class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

        displayName = "de Boer Group";
        editorSubcategory = QGCLASS(dbg);

        identityTypes[] = {
            "LanguagePOL_F",
            "Head_Euro",
            "Head_Enoch",
            "Head_NATO"
        };
        genericNames = "EnochMen";

        @Uniforms({
            "variants": {
                "U_C_ArtTShirt_01_v1_F": 1,
                "U_C_ArtTShirt_01_v2_F": 1,
                "U_C_ArtTShirt_01_v3_F": 1,
                "U_C_ArtTShirt_01_v4_F": 1,
                "U_C_ArtTShirt_01_v5_F": 1,
                "U_C_ArtTShirt_01_v6_F": 1,
                "Aegis_U_lxWS_ION_Casualtna_F": 1,
                "U_lxWS_ION_Casual2": 1,
                "U_lxWS_ION_Casual3": 1,
                "U_lxWS_ION_Casual4": 1,
                "U_lxWS_ION_Casual5": 1,
                "U_lxWS_ION_Casual6": 1,
                "Aegis_U_lxWS_ION_Casual_Hawaiian_F": 1,
                "Aegis_U_lxWS_ION_Casual_Hawaiian_2_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Headgear({
            "synixe_mgp_h_cap_m81": 1,
            "synixe_mgp_h_cap_m81_backwards": 1,
            "synixe_mgp_h_cap_m81_earphones": 1,
            "synixe_mgp_h_cap_khk": 1,
            "synixe_mgp_h_cap_khk_backwards": 1,
            "synixe_mgp_h_cap_khk_earphones": 1,
            "synixe_mgp_h_cap_mcarid": 1,
            "synixe_mgp_h_cap_mcarid_backwards": 1,
            "synixe_mgp_h_cap_mcarid_earphones": 1,
            "synixe_mgp_h_cap_mc": 1,
            "synixe_mgp_h_cap_mc_backwards": 1,
            "synixe_mgp_h_cap_mc_earphones": 1,
            "synixe_mgp_h_cap_tan": 1,
            "synixe_mgp_h_cap_tan_backwards": 1,
            "synixe_mgp_h_cap_tan_earphones": 1,
            "synixe_mgp_h_cap_rgr": 1,
            "synixe_mgp_h_cap_rgr_backwards": 1,
            "synixe_mgp_h_cap_rgr_earphones": 1,
            "synixe_mgp_h_cap_gry": 1,
            "synixe_mgp_h_cap_gry_backwards": 1,
            "synixe_mgp_h_cap_gry_earphones": 1,
            "synixe_mgp_h_cap_blk": 1,
            "synixe_mgp_h_cap_blk_backwards": 1,
            "synixe_mgp_h_cap_blk_earphones": 1,
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Black_F": 1,
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
                "V_CarrierRigKBT_01_light_Khaki_F": 1,
                "V_CarrierRigKBT_01_light_MTP_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_black_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_EAF_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_khk_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_mtp_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_olive_F": 1,
                "V_CarrierRigKBT_01_light_EAF_F": 1,
                "V_CarrierRigKBT_01_light_Olive_F": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
                "hgun_G17_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "Aegis_hgun_P320_black_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
                "hgun_ACPC2_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

        @Assigned(Military);
    };

    class CLASS2(SIDE,Trafficker): CLASS2(SIDE,Base) {
        @Role(Trafficker);

        @Primary({
            "weapons": {
                "arifle_VelkoR5_lxWS": {
                    "probability": 1,
                    "magazinesVest": {
                        "35Rnd_556x45_Velko_reload_tracer_red_lxWS": 6,
                    },
                },
                "synixe_armoury_arifle_Vektor762_long": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 6,
                    },
                },
                "synixe_armoury_arifle_Vektor762": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 6,
                    },
                },
                "Aegis_arifle_AK103_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 6,
                    },
                },
                "arifle_AK12_545_tan_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 6,
                    },
                },
                "Aegis_arifle_AK74_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 6,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 3,
                "optic_r1_high_lxWS": 2,
                "optic_r1_low_lxWS": 1,                
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });   
    };

    class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Trafficker) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "synixe_armoury_arifle_Vektor762_GL": {
                    
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 6,
                        "1Rnd_HEDP_Grenade_shell": 6,
                    },
                    "loadedPrimary": "30Rnd_762x39_AK12_Mag_Tracer_F",
                    "loadedSecondary": "1Rnd_HEDP_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_1p87": 3,
                "optic_VRCO_RF": 2,
                "Aegis_optic_ACOG": 1,                
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Trafficker) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_RPK12_F": {
                    "magazinesVest": {
                        "75rnd_762x39_AK12_Mag_F": 4,
                    }
                }
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

    };

    class CLASS2(SIDE,Medic): CLASS2(SIDE,Trafficker) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };
