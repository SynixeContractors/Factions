class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Sahrani Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Atlas_U_I_U_CombatUniform_UNO": 1,
                "Atlas_U_I_U_CombatUniform_shortsleeve_UNO": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "JCA_G_Glasses_Tactical_tinted_black_F": 1,
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_sand_F": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "Atlas_V_CarrierRigKBT_01_light_RACS_F": 1,
                "V_TacVest_rig_khk_RF": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Headgear({
            "JCA_H_Beret_01_olive_F": 2,
            "JCA_H_Beret_01_headset_olive_F": 1,
            "H_Watchcap_cbr": 1,
            "H_Watchcap_camo": 1,
        });

        #include "..\weapons_garrison\Rifleman.hpp"
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        #include "..\weapons_garrison\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        #include "..\weapons_garrison\Autorifleman.hpp"
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_EarProtectors_black_F": 1,
            "H_Headset_Tactical_khk": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "Aegis_hgun_P320_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "synixe_armoury_17Rnd_9x19mm_Walther_Ball": 3,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_LegStrapBag_black_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);

        @Primary({
            "weapons": {
                "": 0.85,
                "arifle_G36_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 4,
                    },
                },
            },
        });

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
