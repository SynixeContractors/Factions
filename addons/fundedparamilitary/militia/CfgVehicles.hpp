#include "CfgVehicles_Cars.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #include "..\..\..\templates\statics\M2.hpp"
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    displayName = "Funded Paramilitary";
    editorSubcategory = QGCLASS(militia);
    
    @Uniforms({
        "variants": {
            "Opf_U_B_P_FieldJacket_02_F": 1,
            "Opf_U_B_P_FieldJacket_03_F": 1,
            "Opf_U_B_P_Uniform_01_F": 1,
            "Opf_U_B_P_Uniform_01_Shortsleeve_F": 1,
            "Opf_U_O_S_Uniform_01_taiga_F": 1,
            "Opf_U_O_S_Uniform_01_arid_F": 1,
            "Opf_U_O_S_Uniform_01_sweater_flora_F": 1,
            "Opf_U_O_S_Uniform_01_sweater_F": 1,
            "U_I_E_Uniform_01_sweater_F": 1,
            "Opf_U_B_P_FieldJacket_01_F": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "V_PlateCarrier1_rgr_noflag_F": 1,
            "V_PlateCarrier1_blk": 1,
            "V_CF_CarrierRig_Lite_F": 1,
        },
        "packs": [
            "military_standard",
            "t4_standard",
        ],
    });

    @Headgear({
        "H_HelmetSpecter_black_F": 1,
        "H_HelmetSpecter_F": 1,
        "H_HelmetSpecter_paint_F": 1,
        "H_Watchcap_camo": 1,
        "H_Cap_headphones_blk": 1,
        "H_Cap_headphones_rvs_blk": 1,
        "H_Cap_headphones": 1,
        "H_Cap_headphones_rvs": 1,
        "JCA_H_Headset_Combat_01_black_F": 1,
        "": 1,
    });

    @Facewear({
        "JCA_G_balaclava_01_black_F": 1,
        "JCA_G_balaclava_01_olive_F": 1,
        "G_Balaclava_blk_lxWS": 1,
        "synixe_mgp_f_face_shield_rgr": 1,
        "synixe_mgp_f_face_shield_blk": 1,
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "Aegis_arifle_AK103_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_762x39_Ball_Plastic_Black": 7,
                }
            },
            "arifle_Galat_lxWS": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_762x39_Ball_Plastic_Black": 7,
                }
            },
            "Aegis_arifle_AKM74_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_545x39_Ball_Plum": 7,
                }
            },
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_545x39_Ball_Plum": 7,
                }
            },
            "arifle_Katiba_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_65x39_Ball_Katiba": 7,
                }
            },
            "arifle_Katiba_C_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_65x39_Ball_Katiba": 7,
                }
            },
        },
        "optics": {
            "": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_IHO_black": 1,
        },
        "muzzles": {
            "": 1,
            "JCA_muzzle_snds_762_tactical_black": 1,
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "aegis_muzzle_snds_pbs_762_blk": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
    });

    @Secondary({
        "weapons": {
            "JCA_hgun_M9A1_black_F": {
                "magazinesVest": {
                    "synixe_armoury_15Rnd_9x19_Ball_M9A1_JCA": 3,
                },
            },
            "hgun_G17_black_F": {
                "magazinesVest": {
                    "synixe_armoury_17Rnd_9x21_Ball_G17_Aegis": 3,
                },
            },
        },
    });
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,Rifleman) {
    @Role(SquadLeader);

    @Vests({
        "variants": {
            "V_PlateCarrier1_rgr_noflag_F": 1,
            "V_PlateCarrier1_blk": 1,
            "V_CF_CarrierRig_Lite_F": 1,
        },
        "packs": [
            "military_standard",
            "t3_standard",
        ],
    });

    @Primary({
        "weapons": {
            "Aegis_arifle_AK103_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_762x39_Ball_Plastic_Black": 7,
                }
            },
            "arifle_Galat_lxWS": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_762x39_Ball_Plastic_Black": 7,
                }
            },
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_545x39_Ball_Plum": 7,
                }
            },
            "arifle_Katiba_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_65x39_Ball_Katiba": 7,
                }
            },
        },
        "optics": {
            "optic_Arco_blk_F": 1,
            "JCA_optic_IHO_black_magnifier": 1,
        },
        "muzzles": {
            "JCA_muzzle_snds_762_tactical_black": 1,
            "aegis_muzzle_snds_pbs_545_blk": 1,
            "aegis_muzzle_snds_pbs_762_blk": 1,
        },
        "pointers": {
            "Aegis_acc_pointer_DM": 1,
        },
    });

    @Binoculars({
        "weapons": {
            "Binocular": 1,
        }
    });
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Rifleman) {
    @Role(TeamLeader);

    @Primary({
        "weapons": {
            "Aegis_arifle_AK103_GL_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_762x39_Ball_Plastic_Black": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "synixe_armoury_30Rnd_762x39_Ball_Plastic_Black",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "Aegis_arifle_AKM74_GL_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_545x39_Ball_Plum": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "synixe_armoury_30Rnd_545x39_Ball_Plum",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_Katiba_GL_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_65x39_Ball_Katiba": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "synixe_armoury_30Rnd_65x39_Ball_Katiba",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
        },
        "optics": {
            "": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_IHO_black": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
    });
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Base) {
    @Role(Autorifleman);

    @Primary({
        "weapons": {
            "Aegis_arifle_RPK74M_F": {
                "magazinesVest": {
                    "synixe_armoury_45Rnd_545x39_Ball_Aegis": 4,
                },
                "magazinesBackpack": {
                    "synixe_armoury_45Rnd_545x39_Ball_Aegis": 6,
                },
            },
        },
        "optics": {
            "": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_IHO_black": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
    });
    
    @Backpacks({
        "variants": {
            "B_FieldPack_green_F": 1,
        },
    });
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,Autorifleman) {
    @Role(Machinegunner);

    @Primary({
        "weapons": {
            "LMG_S77_lxWS": {
                "magazinesVest": {
                    "synixe_armoury_100Rnd_762x51_Ball_Belt_SA77": 2,
                },
                "magazinesBackpack": {
                    "synixe_armoury_100Rnd_762x51_Ball_Belt_SA77": 4,
                },
            },
        },
        "optics": {
            "": 1,
            "optic_Arco_blk_F": 1,
            "JCA_optic_IHO_black_magnifier": 1,
        },
    });

    @Backpacks({
        "variants": {
            "B_FieldPack_green_F": 1,
        },
    });
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,Base) {
    @Role(AsstMachinegunner);

    @Backpacks({
        "variants": {
            "B_FieldPack_green_F": 1,
        },
        "magazines": {
            "synixe_armoury_100Rnd_762x51_Ball_Belt_SA77": 4,
        },
    });
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,Base) {
    @Role(Marksman);

    @Primary({
        "weapons": {
            "srifle_DMR_01_black_RF": {
                "magazinesVest": {
                    "synixe_armoury_10Rnd_762x54r_AP": 9,
                }
            },
            "arifle_Katiba_F": {
                "magazinesVest": {
                    "synixe_armoury_30Rnd_65x39_EPR_Katiba": 6,
                }
            },
        },
        "optics": {
            "optic_DMS": 1,
        },
        "bipods": {
            "bipod_02_F_blk": 1,
        },
        "muzzles": {
            "JCA_muzzle_snds_762_tactical_black": 1,
            "aegis_muzzle_snds_pbs_762_blk": 1,
        },
        "pointers": {
            "saber_light_lxWS": 1,
        },
    });
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,Base) {
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

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,Base) {
    @Role(RiflemanMAT);

    @Launchers({
        "weapons": {
            "Aegis_launch_RPG7M_F": {
                "magazinesBackpack": {
                    "RPG7_F": 2,
                    "PSRL1_FRAG_RF": 2,
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

class CLASS2(SIDE,Engineer): CLASS2(SIDE,Base) {
    @Role(Engineer);

    @Backpacks({
        "variants": {
            "B_FieldPack_green_F": 1,
        },
        "packs": [
            "engineer",
        ],
    });
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,Base) {
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
};

class CLASS2(SIDE,HeliPilot): CLASS2(SIDE,Base) {
    @Role(HeliPilot);

    @Uniforms({
        "variants": {
            "U_C_PilotJacket_black_RF": 1,
            "U_C_PilotJacket_open_black_RF": 1,
            "U_C_PilotJacket_brown_RF": 1,
            "U_C_PilotJacket_open_brown_RF": 1,
            "U_C_PilotJacket_lbrown_RF": 1,
            "U_C_PilotJacket_open_lbrown_RF": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "Aegis_V_CarrierRigKBT_01_holster_black_F": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "H_Cap_headphones_blk": 1,
        "H_Cap_headphones_rvs_blk": 1,
        "H_Cap_headphones": 1,
        "H_Cap_headphones_rvs": 1,
    });

    @Facewear({
        "synixe_mgp_f_face_shield_rgr_tactical": 1,
        "synixe_mgp_f_face_shield_blk_tactical": 1,
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "": {
                "magazinesVest": {
                    "": 0,
                }
            },
        },
    });
};

class CLASS2(SIDE,Spotter): CLASS2(SIDE,Base) {
    @Role(Spotter);

    @Vests({
        "variants": {
            "V_SmershVest_01_radio_F": 1,
        },
        "packs": [
            "t3_standard",
            "military_standard",
        ],
    });

    @Binoculars({
        "weapons": {
            "Binocular": 1,
        }
    });

    @Facewear({
        "JCA_G_balaclava_01_black_F": 1,
        "JCA_G_balaclava_01_olive_F": 1,
        "G_Balaclava_blk_lxWS": 1,
    });

    @Headgear({
        "H_Cap_headphones_blk": 1,
        "H_Cap_headphones_rvs_blk": 1,
        "H_Cap_headphones": 1,
        "H_Cap_headphones_rvs": 1,
        "JCA_H_Headset_Combat_01_black_F": 1,
        "": 1,
    });
};

class CLASS2(SIDE,Sniper): CLASS2(SIDE,Spotter) {
    @Role(Sniper);

    @Primary({
        "weapons": {
            "srifle_LRR_tna_F": {
                "magazinesVest": {
                    "synixe_armoury_7Rnd_408C_AP": 8,
                },
            },
        },
        "optics": {
            "optic_LRPS": 1,
        },
        "bipods": {
            "": 1,
        },
        "muzzles": {
            "": 1,
        },
    });
};
