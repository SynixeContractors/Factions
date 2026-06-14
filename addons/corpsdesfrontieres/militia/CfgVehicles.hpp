#include "CfgVehicles_Cars.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    displayName = "Corps des Frontieres";
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
                    "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                }
            },
            "arifle_Galat_lxWS": {
                "magazinesVest": {
                    "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                }
            },
            "Aegis_arifle_AKM74_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_Green_F": 7,
                }
            },
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_Green_F": 7,
                }
            },
            "arifle_Katiba_F": {
                "magazinesVest": {
                    "30Rnd_65x39_caseless_green": 7,
                }
            },
            "arifle_Katiba_C_F": {
                "magazinesVest": {
                    "30Rnd_65x39_caseless_green": 7,
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
                    "JCA_15Rnd_9x19_M9A1_FMJ_Mag": 3,
                },
            },
            "hgun_G17_black_F": {
                "magazinesVest": {
                    "17Rnd_9x21_Mag": 3,
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
                    "30Rnd_762x39_polymer_Black_Mag_Green_F": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_762x39_polymer_Black_Mag_Green_F",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "Aegis_arifle_AKM74_GL_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_Green_F": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_545x39_Mag_Green_F",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_Katiba_GL_F": {
                "magazinesVest": {
                    "30Rnd_65x39_caseless_green": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_65x39_caseless_green",
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
                    "Aegis_45Rnd_545x39_Mag_Green_F": 4,
                },
                "magazinesBackpack": {
                    "Aegis_45Rnd_545x39_Mag_Green_F": 6,
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
                    "100Rnd_762x51_S77_Green_lxWS": 2,
                },
                "magazinesBackpack": {
                    "100Rnd_762x51_S77_Green_lxWS": 4,
                },
            },
        },
        "optics": {
            "": 1,
            "optic_Arco_blk_F": 1,
            "JCA_optic_IHO_black_magnifier": 1,
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
            "100Rnd_762x51_S77_Green_lxWS": 4,
        },
    });
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,Base) {
    @Role(Marksman);

    @Primary({
        "weapons": {
            "srifle_DMR_01_black_RF": {
                "magazinesVest": {
                    "10Rnd_762x54_Mag": 9,
                }
            },
            "arifle_Katiba_F": {
                "magazinesVest": {
                    "30Rnd_65x39_caseless_green": 6,
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
                "loadedPrimary": "RPG7_F",
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

class CLASS2(SIDE,Crewman): CLASS2(SIDE,Base) {
    @Role(Crewman);

    @Headgear({
        "H_Tank_black_F": 1,
    });

    @Vests({
        "variants": {
            "Aegis_V_TacVest_RigB_blk_RF": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Primary({
        "weapons": {
            "arifle_Katiba_C_F": {
                "magazinesVest": {
                    "30Rnd_65x39_caseless_green": 4,
                }
            },
            "arifle_AKSM_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_Green_F": 4,
                }
            },
        },
        "optics": {
            "": 1,
        },
        "muzzles": {
            "": 1,
        },
        "pointers": {
            "": 1,
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
                    "7Rnd_408_Mag": 8,
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
