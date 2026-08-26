class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

        displayName = "Joldermark Base Army Garrison";
        editorSubcategory = QGCLASS(joldermark);

        identityTypes[] = {
            "LanguagePOL_F",
            "Head_Euro",
            "Head_Enoch",
            "Head_NATO"
        };
        genericNames = "EnochMen";

        @Uniforms({
            "variants": {
                "U_O_R_officer_noInsignia_taiga_F": 1,
                "Opf_U_O_S_Uniform_01_taiga_F": 1,
                "Aegis_U_O_LightCombatFatigues_rutaiga_F": 1,
                "Atlas_U_O_Afghanka_01_rutaiga_F": 1,
                "Atlas_U_O_Afghanka_02_rutaiga_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Headgear({
            "Aegis_H_Milcap_nohs_taiga_F": 1,
        });

        @Assigned(Military);
    };

    class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
        @Role(Rifleman);

        @Headgear({
            "Aegis_H_Milcap_nohs_taiga_F": 1,
            "H_MilCap_taiga": 1,
            "H_Booniehat_taiga": 1,
            "H_Booniehat_taiga_hs": 1,
            "H_HelmetLuchnik_cover_rutaiga_F": 1,
        });

        @Vests({
            "variants": {
                "V_PlateCarrier1_rgr_noflag_F": 1,
                "V_PlateCarrier2_rgr_noflag_F": 1,
                "V_MU_PlateCarrier2_2_rgr": 1,
                "WSLV_Platecarrier_GRN_NF": 1,
                "V_PlateCarrierIA1_grn": 1,
                "V_PlateCarrierIA2_grn": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "synixe_armoury_arifle_Vektor762_long": {
                    "probability": 3,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 6,
                    },
                },
                "synixe_armoury_arifle_Vektor762_long_oak": {
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

        @Secondary({
            "weapons": {
                "hgun_P07_blk_F": {
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
        
    };

    class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Rifleman) {
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

    class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Rifleman) {
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

    class CLASS2(SIDE,Medic): CLASS2(SIDE,Rifleman) {
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

    class CLASS2(SIDE,Maintainer): CLASS2(SIDE,Base) {
        @Role(Maintainer);

        @Headgear({
            "H_Headset_Tactical": 0.4,
            "H_Headset_Tactical_grn": 0.3,
            "H_Headset_Tactical_khk": 0.3,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_P07_blk_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Messenger_Olive_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS2(SIDE,Worker): CLASS2(SIDE,Base) {
        @Role(Worker);

        @Headgear({
            "H_Headset_Tactical": 0.2,
            "H_Headset_Tactical_grn": 0.2,
            "H_Headset_Tactical_khk": 0.2,
            "H_Construction_earprot_white_F": 0.2,
            "H_Construction_earprot_yellow_F": 0.2,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 0.5,
                "V_Safety_yellow_F": 0.5,
            },
        });

        @Primary({
            "weapons": {
                "": 20,
                "synixe_armoury_arifle_Vektor762_long": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 3,
                    },
                },
                "synixe_armoury_arifle_Vektor762_long_oak": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 3,
                    },
                },
                "synixe_armoury_arifle_Vektor762": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_762x39_AK12_Mag_Tracer_F": 3,
                    },
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

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_P07_blk_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "16Rnd_9x21_Mag_v2": 3,
                    },
                },
            },
        });
    };
