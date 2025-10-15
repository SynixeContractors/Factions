class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "RNLDF Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

       @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_whex_F": 0.5,
                "Atlas_U_O_Afghanka_02_whex_F": 0.5,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_Virtus_Cover_wdl_F": 0.6,
            "Aegis_H_Helmet_Virtus_Scrim_wdl_F": 0.4,
        });

        @Facewear({
            "G_Balaclava_blk": 0.5,
            "G_Bandanna_blk": 0.2,
            "Aegis_G_Condor_EyePro_F": 0.3,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "V_PlateCarrierIA1_grn": 0.5,
                "V_TacVest_grn": 0.5,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Headgear({
            "Atlas_H_HelmetCCH_Cover_whex_F": 0.2,
            "H_Booniehat_whex_F": 0.2,
            "Atlas_H_MilCap_nohs_whex_F": 0.6,
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
                    }
                },
            },
            "optics": {
                "": 0.4,
                "optic_r1_low_lxWS": 0.3,
                "optic_Aco": 0.3,
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
                        "200Rnd_65x39_cased_Box_Tracer_Red": 1,
                    }
                    "magazinesBackpack"
                        "200Rnd_65x39_cased_Box_Tracer_Red": 2,
                }
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
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
                "t2_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "Atlas_H_MilCap_nohs_whex_F": 0.4,
            "H_EarProtectors_black_F": 0.3,
            "H_Headset_Tactical_grn": 0.3,
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
            "H_EarProtectors_black_F" 0.3,
            "H_Construction_earprot_white_F": 0.4,
            "H_Construction_earprot_yellow_F": 0.3,           
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 0.5,
                "V_Safety_yellow_F": 0.5,
            },
        });
    };
};
