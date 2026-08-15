class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #define TEMPLATE_CAMO GreenHex
    #include "../../../templates/cars/LSV.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Mbakora Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_LightCombatFatigues_urb_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_marciras_assaulter_wht": 1,
            },
            "packs": [
                "compact_nvg_urb",
                "military_standard",
            ],
        });

        @Headgear({
            "synixe_mgp_helmet_airframe_01_rgr_wht": 1,
        });

        @Facewear({
            "JCA_G_balaclava_01_glasses_black_F": 1,
            "synixe_mgp_f_face_shield_wht_tactical": 1,
        });

        @Primary({
            "weapons": {
                "arifle_CTAR_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    }
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "optic_LRCO_blk_F": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "pointers": {
                "JCA_acc_LightMount_Pistol_black": 1,
            },
            "optics": {
                "optic_MRD_black": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.7,
                "launch_NLAW_F": {
                    "probability": 0.3, 
                    "loadedPrimary": "NLAW_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Vests({
            "variants": {
                "synixe_mgp_vest_marciras_teamleader_wht": 1,
            },
            "packs": [
                "compact_nvg_urb",
                "military_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_CTAR_GL_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "optic_LRCO_blk_F": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Vests({
            "variants": {
                "synixe_mgp_vest_marciras_hgunner_wht": 1,
            },
            "packs": [
                "compact_nvg_urb",
                "military_standard",
            ],
        });

        @Primary({
            "weapons": {
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 6,
                    },
                },
            },
            "optics": {
                "optic_Holosight_blk_F": 1,
                "optic_LRCO_blk_F": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    },
                },
            },
            "optics": {
                "optic_DMS": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
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

        @Vests({
            "variants": {
                "synixe_mgp_vest_marciras_medic_wht": 1,
            },
            "packs": [
                "compact_nvg_urb",
                "military_standard",
            ],
        });

        #include "..\weapons\Smg.hpp"

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_White": 1,
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
                "launch_RPG32_black_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_White": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_oucamo_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        #include "..\weapons\Smg.hpp"

        @Backpacks({
            "variants": {
                "B_Carryall_oucamo": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        #include "..\weapons\Smg.hpp"

        @Backpacks({
            "variants": {
                "B_Carryall_oucamo": 1,
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

    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);

        @Headgear({
            "synixe_mgp_h_cap_wht_earphones": 2,
            "synixe_mgp_h_cap_wht_backwards": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_wht_tactical": 1,
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_GM6_F": {
                    "magazinesVest": {
                        "5Rnd_127x108_Mag": 8,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
                "optic_tws_sniper": 1,
            },
        });
    };
};
