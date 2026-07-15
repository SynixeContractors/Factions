class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Tiyen Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Aegis_U_O_LightCombatFatigues_ruarid_F": 1,
                "U_O_R_officer_noInsignia_arid_F": 1,
                "Opf_U_O_S_Uniform_01_arid_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "": 1,
            "G_Bandanna_blk": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_shades": 1,
            "G_Shades_Black": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "V_lxWS_HarnessO_oli": 1,
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "H_Shemag_olive": 1,
            "H_I_Helmet_canvas_Green": 1,
            "Aegis_H_Milcap_nohs_grn_F": 1,
            "H_Booniehat_khk": 1,
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_CTAR_tan_f": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    },
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
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
                "Aegis_arifle_CTAR_GL_tan_f": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_CTARS_tan_f": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 4,
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
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t4_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_Headset_Tactical": 1,
            "H_HeadSet_olive_F": 1,
            "H_HeadSet_black_F": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_ACPC2_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Primary({
            "weapons": {
                "": 0.85,
                "Aegis_arifle_CTAR_tan_f": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 3,
                    },
                },
            },
        });

        @Headgear({
            "H_EarProtectors_black_F": 1,
            "H_Construction_earprot_white_F": 1,
            "H_Construction_earprot_yellow_F": 1,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 1,
                "V_Safety_yellow_F": 1,
            },
        });
    };
};
