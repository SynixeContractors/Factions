class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

        displayName = "Politie Base";
        editorSubcategory = QGCLASS(politie);

        identityTypes[] = {
            "LanguagePOL_F",
            "Head_Euro",
            "Head_Enoch",
            "Head_NATO"
        };
        genericNames = "EnochMen";

        @Uniforms({
            "variants": {
                "casual_solid_navy_denim_uniform": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Headgear({
            "synixe_politie_cap": 1,
        });

        @Assigned(Military);
    };

    class CLASS2(SIDE,Politie_U): CLASS2(SIDE,Base) {
        @Role(Politie_U);

        @Vests({
            "variants": {
                "synixe_politie_vest": 1,
            },
            "magazines": {
                "SmokeShell": 2,
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

    class CLASS2(SIDE,Politie): CLASS2(SIDE,Base) {
        @Role(Politie);

        @Vests({
            "variants": {
                "synixe_politie_tacVest_holster": 1,
            },
            "magazines": {
                "SmokeShell": 2,
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

    class CLASS2(SIDE,Politie_SMG): CLASS2(SIDE,Politie) {
        @Role(Politie_SMG);

        @Vests({
            "variants": {
                "synixe_politie_tacVest_holster": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "JCA_smg_UMP_black_F": {
                    
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Mag": 6,
                    },
                },
            },
            "optics": {
                "optic_Holosight_smg_blk_F": 1,
                "Aegis_optic_1p87": 1,
                "optic_r1_high_lxWS": 1,                
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS2(SIDE,Politie_SG): CLASS2(SIDE,Base) {
        @Role(Politie_SG);

        @Vests({
            "variants": {
                "synixe_politie_tacVest": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "sgun_Mp153_black_F": {
                    
                    "magazinesVest": {
                        "4Rnd_12Gauge_Pellets": 12,
                    },
                },
            },
            "pointers": {
                "acc_flashlight_pistol": 1,
            },
        });
    };

    class CLASS2(SIDE,Medic): CLASS2(SIDE,Politie) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Grey": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };
