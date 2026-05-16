class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Cascadia Base National Reserves";
        editorSubcategory = QGCLASS(reserves);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_grn_F": 2,
                "Atlas_U_O_Afghanka_02_grn_F": 2,
                "Atlas_U_O_Afghanka_01_whex_F": 1,
                "Atlas_U_O_Afghanka_02_whex_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_lxWS_TacVestIR_oli": 1,
                "V_lxWS_HarnessO_oli": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "H_HelmetLuchnik_olive_F": 1,
            "H_Booniehat_whex_F": 1,
            "Atlas_H_MilCap_nohs_whex_F": 1,
            "H_Watchcap_camo": 1,
        });

        @Facewear({
            "G_Shades_Black": 1,
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_olive_F": 1,
            "Aegis_G_Condor_EyePro_F": 1,
        });

        @Primary({
            "weapons": {
                "synixe_armoury_arifle_AK03_black": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    }
                },
            },
            "optics": {
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

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
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "synixe_armoury_arifle_RPK03_black": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 6,
                    },
                },
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
            "optics": {
                "": 1,
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
                "JCA_launch_Mk153_olive_F": {
                    "magazinesBackpack": {
                        "JCA_MK153_HEAT_F": 1,
                        "JCA_MK153_HE_F": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_whex_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_FieldPack_owcamo": 1,
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
                "B_FieldPack_owcamo": 1,
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
