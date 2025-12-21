class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Dal Riada Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Atlas_U_O_Luchnik_whex_F": 1,
                "Atlas_U_O_Luchnik_RolledUp_whex_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Headgear({
            "Atlas_H_HelmetCCH_Cover_whex_F": 1,
            "H_Booniehat_whex_F": 1,
            "Atlas_H_MilCap_nohs_whex_F": 1,
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
                "V_PlateCarrierIA1_grn": 1,
                "V_TacVest_grn": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        #include "..\..\dalriada\weapons\Rifleman.hpp"
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);

        #include "..\..\dalriada\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);

        #include "..\..\dalriada\weapons\Autorifleman.hpp"

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
            "Atlas_H_MilCap_nohs_whex_F": 1,
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
