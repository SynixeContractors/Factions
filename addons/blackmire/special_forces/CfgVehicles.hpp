class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Blackmire Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_CombatFatigues_whex_F": 1,
                "Atlas_U_O_CombatFatigues_02_whex_F": 1,
                "Aegis_U_O_CombatFatigues_oli_F": 1,
                "Aegis_U_O_CombatFatigues_02_oli_F": 1,
            },
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Black_F": 1,
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
                "V_CarrierRigKBT_01_light_Khaki_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_black_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_khk_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_olive_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_black_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_cbr_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_khk_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_olive_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Headset_cbr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_tan_F": 1,
            "Aegis_H_Helmet_FASTMT_tan_F": 1,
            "Aegis_H_Helmet_FASTMT_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_cbr_F": 1,
        });

        @Facewear({
            "G_Bandanna_oli": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_tan": 1,
            "G_Shemag_tactical": 1,
            "G_Shemag_oli": 1,
            "G_Shemag_khk": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_blk_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_blk": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_shemagh_rgr": 1,
            "synixe_mgp_f_tactical": 1,
        });

        #include "..\weapons\Rifleman.hpp"

        #include "..\weapons\Secondary.hpp"

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.6,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.4,
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

        #include "..\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        #include "..\weapons\Autorifleman.hpp"
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
                "B_AssaultPackSpec_blk": 1,
                "B_AssaultPack_cbr": 1,
                "B_AssaultPackSpec_cbr": 1,
                "B_AssaultPack_rgr": 1,
                "B_AssaultPackSpec_rgr": 1,
                "B_FieldPack_blk": 1,
                "B_FieldPack_ardi": 1,
                "B_FieldPack_cbr": 1,
                "B_FieldPack_green_F": 1,
                "B_FieldPack_khk": 1,
                "B_FieldPack_oli": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\weapons\Marksman.hpp"
        #include "..\weapons\Secondary.hpp"

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
                "tacs_Backpack_Kitbag_Medic_Tan": 1,
                "tacs_Backpack_Kitbag_Medic_RGR": 1,
                "tacs_Backpack_Kitbag_Medic_Green": 1,
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_PSRL1_black_RF": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
                "Aegis_launch_RPG7M_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "PSRL1_AT_RF": 2,
                        "PSRL1_HEAT_RF": 1,
                    },
                },
                "launch_RPG32_camo_F": {
                    "magazinesBackpack": {
                        "RPG32_HE_F": 2,
                        "RPG32_F": 1,
                    },
                },
                "launch_RPG32_green_F": {
                    "magazinesBackpack": {
                        "RPG32_HE_F": 2,
                        "RPG32_F": 1,
                    },
                },
            },
            "optics": {
                "Aegis_optic_1p87": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_wdl_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
                "B_RadioBag_01_whex_F": 1,
                "B_RadioBag_01_taiga_F": 1,
                "B_RadioBag_01_arid_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_blk": 1,
                "B_AssaultPackSpec_blk": 1,
                "B_AssaultPack_cbr": 1,
                "B_AssaultPackSpec_cbr": 1,
                "B_AssaultPack_rgr": 1,
                "B_AssaultPackSpec_rgr": 1,
                "B_FieldPack_blk": 1,
                "B_FieldPack_ardi": 1,
                "B_FieldPack_cbr": 1,
                "B_FieldPack_green_F": 1,
                "B_FieldPack_khk": 1,
                "B_FieldPack_oli": 1,
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
                "B_TacticalPack_rgr": 1,
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
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Uniforms({
            "variants": {
                "U_B_W_FullGhillie_wdl_F": 1,
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

        #include "..\weapons\Sniper.hpp"
    };
};
