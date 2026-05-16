class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Tiyen Base National Reserves";
        editorSubcategory = QGCLASS(reserves);
        
        @Uniforms({
            "variants": {
                "U_O_R_officer_noInsignia_arid_F": 1,
                "Opf_U_O_S_Uniform_01_arid_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_TacChestrig_grn_F": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "H_Shemag_olive": 1,
            "Aegis_H_Milcap_nohs_grn_F": 1,
            "H_Booniehat_khk": 1,
            "H_Cap_oli": 1,
        });

        @Facewear({
            "": 1,
            "G_Bandanna_blk": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_shades": 1,
            "G_Shades_Black": 1,
        });

        @Primary({
            "weapons": {
                "arifle_AKM_F": {
                    "magazinesVest": {
                        "30Rnd_762x39_Mag_Green_F": 7,
                    }
                },
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Launchers({
           "weapons": {
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "PSRL1_FRAG_RF": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "arifle_RPK_F": {
                    "magazinesVest": {
                        "75Rnd_762x39_Mag_Green_F": 4,
                    },
                    "magazinesBackpack": {
                        "75Rnd_762x39_Mag_Green_F": 4,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t4_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
           "weapons": {
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "RPG7_F": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_arid_F": 1,
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
                "engineer",
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

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };
};
