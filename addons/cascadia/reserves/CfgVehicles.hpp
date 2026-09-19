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
            "Atlas_H_PASGT_Cover_Olive_F": 1,
            "H_Booniehat_whex_F": 1,
            "Atlas_H_MilCap_nohs_whex_F": 1,
            "H_Watchcap_camo": 1,
            "": 1,
        });

        @Facewear({
            "": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
        });

        @Primary({
            "weapons": {
                "synixe_armoury_arifle_AK03_black": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    }
                },
                "arifle_Velko_lxWS": {
                    "magazinesVest": {
                        "35Rnd_556x45_Velko_reload_tracer_green_lxWS": 7,
                    }
                },
                "srifle_DMR_06_black_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag_blk_lxWS": 7,
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

        @Primary({
            "optics": {
                "": 1,
                "optic_Aco": 1,
                "optic_Arco_blk_F": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

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
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
                "synixe_armoury_arifle_AK03_GL_black": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "": 1,
                "optic_Aco": 1,
                "optic_Arco_blk_F": 1,
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
                "arifle_Velko_lxWS": {
                    "magazinesVest": {
                        "50Rnd_556x45_Velko_reload_tracer_green_lxWS": 8,
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
                "Aegis_launch_RPG7M_F": {
                    "magazinesBackpack": {
                        "RPG7_F": 1,
                        "PSRL1_FRAG_RF": 2,
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
