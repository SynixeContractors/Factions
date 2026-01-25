class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #define TEMPLATE_CAMO SFIA
    #include "../../../templates/cars/Offroad_Armed.hpp"
    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Black
    #include "../../../templates/boats/RHIB.hpp"
    #include "../../../templates/boats/Dinghy.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Ngabiri Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "U_lxWS_SFIA_soldier_2_O": 1,
                "U_lxWS_SFIA_soldier_1_O": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_PlateCarrier2_alt_cbr": 1,
                "Aegis_V_TacVest_RigB_khk_RF": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_khk": 1,
            "H_Booniehat_khk_hs": 1,
            "lxWS_H_turban_02_sand": 2,
            "lxWS_H_turban_02_green": 2,
            "Aegis_H_Milcap_nohs_grn_F": 1,
            "Aegis_H_MilCap_tachs_grn_F": 1,
        });

        @Facewear({
            "G_Balaclava_snd_lxWS": 1,
            "synixe_mgp_f_face_shield_khk_shemagh_rgr": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_khk": 1,
            "synixe_mgp_f_face_shield_blk_shemagh_khk_ess": 1,
            "synixe_mgp_f_face_shield_khk_shemagh_rgr_ess": 1,
            "synixe_mgp_f_shemagh_khk": 1,
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_AKM74_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 6,
                    },
                },
                "Aegis_arifle_AK74_oak_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Green_F": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
                "Aegis_optic_ACOG": 1,
            },
            "pointers": {
                "acc_pointer_IR_pistol_RF": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_AK12_GL_545_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_AK12_Mag_F": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_545x39_AK12_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "acc_flashlight_IR_pistol_RF": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_RPK74M_F": {
                    "magazinesVest": {
                        "Aegis_45Rnd_545x39_Mag_Tracer_Green_F": 6,
                    },
                    "magazinesBackpack": {
                        "Aegis_45Rnd_545x39_Mag_Tracer_Green_F": 6,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "acc_pointer_IR_pistol_RF": 1,
            },
        });
        
        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_01_tan_RF": {
                    "magazinesVest": {
                        "Aegis_10Rnd_762x54_SVD_Green_Mag_F": 9,
                    },
                },
            },
            "optics": {
                "optic_KHS_blk": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_snd": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
           "weapons": {
                "launch_NLAW_F": {
                    "loadedPrimary": "NLAW_F",
                },
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_coyote_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
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

    class CLASS(Spotter): CLASS(Base) {
        @Role(Spotter);
        
        @Primary({
            "weapons": {
                "arifle_AKSM_F": {
                    "magazinesVest": {
                        "30Rnd_545x39_Mag_Green_F": 5,
                    },
                },
            },
            "muzzles": {
                "aegis_muzzle_snds_pbs_545_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Rook40_F": {
                    "magazinesVest": {
                        "17Rnd_9x21_Mag": 3,
                    },
                },
            },
        });

        @Uniforms({
            "variants": {
                "U_lxWS_SFIA_soldier_1_O": 1,
                "U_lxWS_SFIA_Tanker_O": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_TacVest_RigB_khk_RF": 1,
                "V_HarnessO_brn": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_GM6_F": {
                    "magazinesVest": {
                        "5Rnd_127x108_Mag": 7,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
        });
    };
};
