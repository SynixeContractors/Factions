class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t1_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Default
    #include "../../../templates/drones/MQ47.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO AAF
    //FIXME: placeholder camo
    #include "../../../templates/drones/MQ9.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Dazzle
    #include "../../../templates/cars/Polaris.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Olive
    #include "../../../templates/statics/RGS60.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO DazzleDark
    #include "../../../templates/helicopters/Ghosthawk.hpp"
    #include "../../../templates/helicopters/Ghosthawk_Armed.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Black
    #include "../../../templates/helicopters/MD500_Military.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Virelia Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        @Assigned(Military);

        @Uniforms({
            "variants": {
                "U_B_CTRG_Soldier_F": 3,
                "U_B_CTRG_Soldier_2_F": 1,
                "U_B_CTRG_Soldier_3_F": 3,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_rgr_belt": 1,
            },
            "packs": [
                "ivas",
                "military_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_dazzle_tna_F": 1,
            "H_HelmetB_TI_tna_F": 1,
        });

        @Facewear({
            "JCA_G_balaclava_01_black_F": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_02_blk_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 8,
                    },
                },
                "arifle_SPAR_01_blk_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_IHO_black_magnifier": 1,
                "JCA_optic_CRBS_black": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_advanced_black": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P320_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P320C_FMJ_Mag": 3,
                    },
                },
            },
            "optics": {
                "JCA_optic_PRO_black": 1,
            },
            "pointers": {
                "JCA_acc_LightMount_Pistol_black": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_teamleader_rgr_belt": 1,
            },
            "packs": [
                "ivas",
                "military_standard",
                "jtac",
            ],
        });
    };

    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_grenadier_rgr_belt": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_01_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 8,
                        "1Rnd_HE_Grenade_shell": 5,
                    },
                    "loadedPrimary": "30Rnd_556x45_Stanag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_advanced_black": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_hgunner_rgr_belt": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_02_blk_F": {
                    "probability": 1,                    
                    "magazinesVest": {
                        "75Rnd_556x45_Stanag_red_lxWS": 6,
                    },
                    "magazinesBackpack": {
                        "75Rnd_556x45_Stanag_red_lxWS": 6,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_IHO_black_magnifier": 1,
                "JCA_optic_CRBS_black": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_556_advanced_black": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_rgr": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_03_blk_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    }
                }
            },
            "optics": {
                "optic_AMS": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_762_tactical_black": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_medic_rgr_belt": 1,
            },
        });

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
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
                "launch_MRAWS_green_F": {
                    "magazinesBackpack": {
                        "MRAWS_HEAT_F": 2,
                        "MRAWS_HEAT55_F": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_rgr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_green_F": 1,
            },
            "packs": [
                "jtac",
            ],
        });
    };

        class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "synixe_mgp_bp_molle_pointman_rgr": 1,
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
                "synixe_mgp_bp_molle_tomahawk_rgr": 1,
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

        @Headgear({
            "JCA_H_Headset_Combat_01_olive_F": 1,
            "Aegis_H_Helmet_FASTMT_Cover_dazzle_tna_F": 1,
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_rgr_belt": 1,
            },
            "packs": [
                "nvg_wide",
                "military_standard"
            ],
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            },
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_marksman_rgr_belt": 1,
            },
        });

        @Primary({
            "weapons": {
                "JCA_srifle_AWM_black_F": {
                    "magazinesVest": {
                        "JCA_5Rnd_338LM_AWM_Mag": 6,
                    },
                },
            },
            "optics": {
                "JCA_optic_HPPO_RAD_black": 2,
                "optic_tws_sniper": 1,
            },
            "bipods": {
                "JCA_bipod_AWM_01_black": 1,
            },
            "muzzles": {
                "JCA_muzzle_snds_AWM_black": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(RiflemanAA) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): PCLASS(Base) {
        @Role(HeliPilot);

        @Uniforms({
            "variants": {
                "U_B_CTRG_Soldier_Black_F": 3,
                "U_B_CTRG_Soldier_3_Black_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_compact_olive_F": 1,
            },
            "packs": [
                "nvg_wide",
            ],
        });

        @Headgear({
            "H_CrewHelmetHeli_O": 1,
            "H_PilotHelmetHeli_O": 1,
            "H_PilotHelmetHeli_O_visor_up": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_01_blk_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_Stanag": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P320_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P320C_FMJ_Mag": 3,
                    },
                },
            },
            "pointers": {
                "JCA_acc_LightMount_Pistol_black": 1,
            },
        });
    };
};
