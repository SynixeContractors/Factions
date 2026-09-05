class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Navarre Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "U_O_officer_noInsignia_urb_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Facewear({
            "": 2,
            "JCA_G_balaclava_01_glasses_black_F": 1,
            "JCA_G_balaclava_01_glasses_olive_F": 1,
            "JCA_G_Glasses_Tactical_tinted_black_F": 2,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_combat_olive_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });

        @Headgear({
            "JCA_H_Beret_01_olive_F": 1,
            "JCA_H_Beret_01_headset_olive_F": 1,
            "H_HelmetSpecter_cover_uhex_F": 1,
        });

        #include "..\weapons\Rifleman.hpp"
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        #include "..\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        #include "..\weapons\Autorifleman.hpp"
    };

    class CLASS(Medic): CLASS(Rifleman) {
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

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "": 1,
            "H_Booniehat_mgrn": 1,
            "H_EarProtectors_black_F": 1,
            "JCA_H_Headset_Combat_01_olive_F": 1,
        });

        @Vests({
            "variants": {
                "V_Safety_orange_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "": 0.85,
                "hgun_Pistol_heavy_01_black_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
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

        @Headgear({
            "H_EarProtectors_black_F": 0.2,
            "H_Construction_earprot_white_F": 0.4,
            "H_Construction_earprot_yellow_F": 0.4,
        });

        @Vests({
            "variants": {
                "V_Safety_blue_F": 0.5,
                "V_Safety_yellow_F": 0.5,
            },
        });

        @Primary({
            "weapons": {
                "": 0.85,
                "arifle_CTAR_blk_F": {
                    "probability": 0.15,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 4,
                    }
                },
            },
        });
    };
};
