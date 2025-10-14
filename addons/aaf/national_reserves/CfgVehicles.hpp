class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "AAF National Reserves";
        editorSubcategory = QGCLASS(natres);
        
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
                "V_PlateCarrierIA1_dgtl": 1,
                "V_PlateCarrierIA2_dgtl": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_MK7_AAF_F": 1,
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
                "arifle_G36_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 9,
                    }
                },
                "arifle_G36C_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 9,
                    }
                },
                "arifle_MSBS65_black_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 9,
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

        @Launchers({
            "weapons": {
                "": 0.95,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.05,
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Launchers({
            "weapons": {
                "": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_G36_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
                    }
                },
                "arifle_MSBS65_GL_black_F": {
                    "probability": 0.2,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 9,
                        "1Rnd_HEDP_Grenade_shell": 9,
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

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "ACE_200Rnd_65x39_cased_Box_tracer_red": 4,
                    },
                    "magazinesBackpack": {
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
        
        @Backpacks({
            "variants": {
                "B_Kitbag_dgtl": 1,
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

        @Launchers({
            "weapons": {
                "": 1,
            },
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_PSRL1_PWS_digi_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_dgtl": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_digi_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_Kitbag_dgtl": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_TacticalPack_oli": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };

};

