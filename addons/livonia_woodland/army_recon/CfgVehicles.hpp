class CfgVehicles {
    #include "CfgVehicles_Quad.hpp"
    #include "CfgVehicles_Ram.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Livonia Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_E_SF_CombatUniformNCU_01_F": 1,
                "Atlas_U_E_SF_CombatUniformNCU_02_F": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_EAF_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_ldf": 2,
            "H_Booniehat_ldf_hs": 2,
            "H_Cap_eaf_F": 0.5,
            "H_Cap_eaf_hs_F": 0.5,
            "H_Watchcap_ldf_hsless": 0.5,
            "H_Watchcap_ldf_hs": 0.5,
        });

        @Facewear({
            "G_Headset_Tactical": 1,
            "G_Headset_Tactical_grn": 1,
            "G_Headset_Tactical_khk": 1,
            "G_Headset_lxWS": 1,
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Combat_lxWS": 1,
            "tacs_Goggles_Black": 1,
            "tacs_Goggles_Green": 1,
            "tacs_Goggles_Tan": 1,
            "synixe_mgp_f_ess": 1,
        });

        @Primary({
            "weapons": {
                "arifle_MSBS65_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 5,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                    },
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_G17_black_F": {
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

        @Launchers({
            "weapons": {
                "": 0.95,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.05,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
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
                "arifle_MSBS65_GL_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 5,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "synixe_armoury_30Rnd_65x39_EPR_MSBS",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "synixe_armoury_200Rnd_65x39_EPR_Belt": 4,
                    },
                    "magazinesBackpack": {
                        "synixe_armoury_200Rnd_65x39_EPR_Belt": 4,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_MSBS65_Mark_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_20Rnd_65x39_EPR_MSR_MSBS": 5,
                        "synixe_armoury_30Rnd_65x39_AP_MSBS": 3,
                        "synixe_armoury_20Rnd_65x39_Ball_Tracer_MSR_MSBS": 2,
                    }
                }
            },
            "optics": {
                "optic_MRCO": 1,
            },
            "pointers": {
                "Aegis_acc_pointer_DM": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
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
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_PSRL1_PWS_geo_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HE_RF": 1,
                        "PSRL1_HEAT_RF": 1,
                    },
                    "loadedPrimary": "PSRL1_HE_RF",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_eaf_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_TacticalPack_eaf_F": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "V_CarrierRigKBT_01_heavy_EAF_F": 1,
            }
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
                "arifle_MSBS65_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 5,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                    },
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
        });

        @Uniforms({
            "variants": {
                "U_I_E_FullGhillie_wdl_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_ChestrigF_oli": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_DMR_02_F": {
                    "magazinesVest": {
                        "ACE_10Rnd_338_API526_Mag": 4,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "muzzle_snds_338_black": 1,
            },
        });
    };
};
