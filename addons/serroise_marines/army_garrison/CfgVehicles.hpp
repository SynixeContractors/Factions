class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Serroise Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

       @Uniforms({
            "variants": {
                "Atlas_U_O_CombatFatigues_mhex_F": 1,
                "Atlas_U_O_CombatFatigues_mhex_02_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_Cover_mhex_F": 1,
            "H_Watchcap_camo": 1,
            "H_Beret_ocamo": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "Aegis_G_Condor_EyePro_F": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_black_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_black_F": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Primary({
            "weapons": {
                "atlas_arifle_famasG4_Grip_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                    }
                },
            },
            "optics": {
                "optic_r1_low_lxWS": 0.5,
                "optic_Aco": 0.5
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
                "Atlas_Arifle_famasG4_GL_F": {
                    "magazinesVest": {
                        "30Rnd_65x39_caseless_msbs_mag": 6,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_65x39_caseless_msbs_mag",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "": 1,
                "optic_r1_low_lxWS": 1,
                "optic_Aco": 1,
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
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "200Rnd_65x39_cased_Box_Red": 1,
                    },
                    "magazinesBackpack": {
                        "200Rnd_65x39_cased_Box_Red": 2,
                    },
                },
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
            "bipods": {
                "bipod_03_F_blk": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
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

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_EarProtectors_black_F": 1,
            "H_Headset_Tactical_grn": 1,
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
                "B_LegStrapBag_coyote_F": 1,
            },
            "packs": [
                "toolkit",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

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
