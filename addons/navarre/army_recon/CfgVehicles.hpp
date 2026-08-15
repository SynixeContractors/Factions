class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #define TEMPLATE_CAMO CSAT_Pacific
    #include "../../../templates/cars/Ram_Civilian.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Navarre Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
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
                "V_SmershVest_01_F": 1,
                "V_SmershVest_01_radio_F": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_Booniehat_mgrn": 1,
            "H_Watchcap_camo_hs": 1,
            "synixe_mgp_h_cap_gry": 1,
            "synixe_mgp_h_cap_gry_earphones": 1,
            "synixe_mgp_h_cap_rgr": 1,
            "synixe_mgp_h_cap_rgr_earphones": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_tactical": 1,
            "": 1,
        });

        #include "..\weapons\Rifleman.hpp"

        @Primary({
            "muzzles": {
                "": 1,
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.6,
                "hgun_Pistol_heavy_01_black_F": {
                    "probability": 0.4,
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });

        @Assigned(Military);
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

        #include "..\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_CTARS_blk_F": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 6,
                    },
                },
            },
            "optics": {
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Green": 1,
            },
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\weapons\Marksman.hpp"

        @Primary({
            "muzzles": {
                "muzzle_snds_65_TI_blk_F": 1,
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
                "B_AssaultPack_rgr": 1,
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

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_rgr": 1,
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
                "B_AssaultPackSpec_rgr": 1,
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
            "optics": {
                "optic_DMS": 1,
            },
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        #include "..\weapons\Sniper.hpp"

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
            },
        });
    };
};
