class CfgVehicles {
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_Quad.hpp"
    #include "CfgVehicles_Dingy.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Dal Riada Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_CombatFatigues_oli_F": 1,
                "Aegis_U_O_CombatFatigues_02_oli_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "HandGrenade": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_recon_black_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_black_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Primary({
            "weapons": {
                "atlas_arifle_famasG4_Grip_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 8,
                    },
                },
                "arifle_MX_Black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Primary({
            "weapons": {
                "atlas_arifle_famasG4_Grip_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                        "30Rnd_65x39_caseless_msbs_mag_Tracer": 2,
                        "1Rnd_40mm_HE_lxWS": 3,
                        "1Rnd_50mm_Smoke_lxWS": 2,
                        "1Rnd_58mm_AT_lxWS": 2,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_msbs_mag",
                    "loadedSecondary": "1Rnd_40mm_HE_lxWS",
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Atlas_Arifle_famasG4_GL_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_msbs_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "arifle_MX_GL_Black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_black_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                },
                "arifle_MX_SW_Black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "100Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_LRCO_blk_F": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "muzzles": {
                "muzzle_snds_H": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "arifle_MXM_Black_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_black_mag": 8,
                    },
                },
            },
            "optics": {
                "optic_DMS": 1,
            },
            "pointers": {
                "ACE_DBAL_A3_Red": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
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
                "tacs_Backpack_Kitbag_Medic_Black": 1,
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
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_black_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
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
                "B_Carryall_blk": 1,
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

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_recon_black_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Cover_rgr_F": 1,
            "H_Watchcap_camo": 1,
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        @Primary({
            "weapons": {
                "srifle_GM6_F": {
                    "magazinesVest": {
                        "5Rnd_127x108_Mag": 6,
                    },
                },
            },
            "optics": {
                "optic_LRPS": 1,
            },
        });
    };
};
