class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "AAF Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);
        
        @Uniforms({
            "variants": {
                "U_I_CombatUniform": 1,
                "U_I_CombatUniform_shortsleeve": 1,
                "Aegis_U_I_Uniform_01_sweater_f": 0.5,
                "Aegis_U_I_Uniform_01_sweater_02_f": 0.5,
                "U_I_Uniform_01_tanktop_F": 0.2,
                "U_I_CombatUniform_tshirt": 0.2,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_PlateCarrier2_oli": 1,
                "V_PlateCarrier1_oli": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_Beret_AAF_01_F": 1,
            "H_Cap_blk_Raven": 1,
            "H_Cap_blk_Raven_hs": 1,
            "Aegis_H_Milcap_nohs_dgtl_F": 1,
            "H_MilCap_dgtl": 1,
            "H_Booniehat_dgtl": 1,
            "H_Booniehat_dgtl_hs": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Shemag_tacttacs_Goggles_Blackical": 0.1,
            "G_Combat_lxWS": 0.1,
            "synixe_mgp_f_ess": 0.1,
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

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "arifle_MSBS65_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                    }
                },
                "arifle_G36_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                    }
                },
                "arifle_G36C_F": {
                    "probability": 0.5,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                    }
                },
            },
            "optics": {
                "optic_Hamr": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_MSBS65_GL_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                        "1Rnd_HEDP_Grenade_shell": 5,
                    }
                },
                "arifle_G36_GL_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                        "1Rnd_HEDP_Grenade_shell": 5,
                    }
                },
            },
            "optics": {
                "optic_Hamr": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(TeamLeader) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "ACE_200Rnd_65x39_cased_Box_tracer_red": 4,
                    },
                },
            },
            "optics": {
                "optic_Hamr": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
            },
        });

    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Digital": 1,
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
                "B_Messenger_Coyote_F": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
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
                "": 0.8,
                "arifle_MSBS65_black_F": {
                    "probability": 0.06,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                    }
                },
                "arifle_G36_F": {
                    "probability": 0.02,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                    }
                },
                "arifle_G36C_F": {
                    "probability": 0.02,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 5,
                    }
                },
            },
            "optics": {
                "optic_Hamr": 1,
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "acc_pointer_IR": 0.4,
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
    };
};
