class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Mbakora Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_dst_F": 0.5,
                "Atlas_U_O_Afghanka_02_dst_F": 0.5,
            },
            "packs": [
                "t3_rifleman_medical",
            ],
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Balaclava_snd_lxWS": 1,
            "G_Balaclava_blk_lxWS": 1,
            "G_Bandanna_oli": 1,
            "G_Bandanna_khk": 1,
            "G_Shades_Black": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Coyote_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
            },
            "magazines": {
                "SmokeShell": 2,
            },
        });

        @Headgear({
            "H_Beret_ocamo": 2,
            "H_Booniehat_oicamo": 1,
            "H_Cap_oicamo": 1,
            "Aegis_H_MilCap_nohs_oicamo": 1,
            "H_MilCap_oicamo": 1,
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
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t3_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);

        @Headgear({
            "H_EarProtectors_black_F": 0.5,
            "H_Headset_Tactical_khk": 0.5,
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
                "B_LegStrapBag_black_F": 1,
            },
            "packs": [
                "toolkit",
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
    };
};
