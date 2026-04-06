class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t1_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Default
    #include "../../../templates/drones/MQ47.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO AAF
    //FIXME: placeholder camo
    #include "../../../templates/drones/MQ9.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Virelia Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        @Assigned(Military);

        @Uniforms({
            "variants": {
                "U_B_CTRG_Soldier_F": 1,
                "U_B_CTRG_Soldier_2_F": 1,
                "U_B_CTRG_Soldier_3_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "synixe_mgp_vest_mmac_assaulter_rgr_belt": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
                "rifleman_medical",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_dazzle_tna_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_blk": 0.5,
            "synixe_mgp_f_face_shield_blk_tactical": 0.5,
        });

        @Primary({
            "weapons": {
                "arifle_SPAR_01_blk_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_556x45_AP_Stanag_red_RF": 6,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black_magnifier": 1,
                "optic_Holosight_blk_F": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_Pistol_heavy_01_black_F": {
                    "magazinesVest": {
                        "11Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "optics": {
                "optic_MRD_black": 1,
            },
            "pointers": {
                "Aegis_acc_LightModule_Pistol_black": 1,
            },
        });
    };

    
};
