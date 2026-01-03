
#include "CfgVehicles_Cars.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #include "..\..\..\templates\statics\M2.hpp"
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    displayName = "Looters";
    editorSubcategory = QGCLASS(militia);
    
    @Uniforms({
        "variants": {
            "U_C_Uniform_Farmer_01_F": 5,
            "casual_solid_brown_denim_uniform": 5,
            "casual_solid_brown_sage_uniform": 5,
            "casual_solid_gray_sage_uniform": 5,
            "casual_solid_gray_khaki_uniform": 5,
            "casual_solid_navy_khaki_uniform": 5,
            "casual_solid_navy_sage_uniform": 5,
            "casual_plaid_black_khaki_uniform": 5,
            "casual_plaid_black_sage_uniform": 5,
            "casual_plaid_gray_khaki_uniform": 5,
            "casual_plaid_gray_sage_uniform": 5,
            "casual_plaid_navy_khaki_uniform": 5,
            "casual_plaid_navy_sage_uniform": 5,
            "eou_gorka_2": 5,
            "eou_gorka_25": 5,
            "eou_gorka_6": 5,
            "eou_gorka_7": 5,
            "U_O_R_Gorka_01_black_F": 2,
            "Opf_U_B_P_FieldJacket_01_F": 1,
            "Opf_U_B_P_FieldJacket_02_F": 1,
            "Opf_U_B_P_FieldJacket_03_F": 1,
            "Opf_U_B_P_Uniform_01_F": 1,
            "Opf_U_B_P_Uniform_01_Shortsleeve_F": 1,
            "U_BG_Guerrilla_RF": 1,
            "U_BG_Guerrilla_6_1": 1,
            "Opf_U_O_S_Uniform_01_sweater_F": 1,
            "Opf_U_O_S_Uniform_01_sweater_flora_F": 1,
        },
        "packs": [
            "t4_rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "V_ChestrigF_blk": 1,
            "V_ChestrigF_rgr": 1,
            "V_ChestrigF_oli": 1,
            "Aegis_V_ChestrigEast_grn_F": 1,
            "Aegis_V_ChestrigEast_oli_F": 1,
            "V_TacChestrig_grn_F": 1,
            "V_TacChestrig_oli_F": 1,
            "V_LegStrapBag_black_F": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "H_Watchcap_cbr": 1,
        "H_Watchcap_blk": 1,
        "H_Watchcap_camo": 1,
        "H_Watchcap_khk": 1,
        "H_Watchcap_sgg": 1,
        "H_Bandanna_gry": 1,
        "H_Bandanna_blu": 1,
        "H_Bandanna_cbr": 1,
        "H_Bandanna_khk": 1,
        "H_Bandanna_sgg": 1,
        "H_Bandanna_sand": 1,
        "H_Booniehat_khk": 1,
        "H_Booniehat_oli": 1,
        "H_Booniehat_blk": 1,
        "H_Booniehat_flecktarn": 1,
        "H_Booniehat_eaf": 1,
    });

    @Facewear({
        "G_Balaclava_blk": 1,
        "G_Balaclava_BlueStrips": 1,
        "G_Balaclava_Flecktarn": 1,
        "G_Balaclava_GreenStrips": 1,
        "G_Balaclava_RedStrips": 1,
        "G_Balaclava_oli": 1,
        "G_Bandanna_aviator": 1,
        "G_Bandanna_beast": 1,
        "G_Bandanna_blk": 1,
        "G_Bandanna_khk": 1,
        "G_Bandanna_oli": 1,
        "G_Bandanna_shades": 1,
        "G_Bandanna_tan": 1,
        "G_Shades_Black": 1,
        "G_Shades_Blue": 1,
        "G_Shades_Green": 1,
        "G_Shades_Red": 1,
        "G_Shemag_khk": 1,
        "G_Shemag_oli": 1,
        "G_Shemag_red": 1,
        "G_Shemag_shades": 1,
        "G_Shemag_tan": 1,
        "G_Shemag_white": 1,
        "synixe_mgp_f_face_shield_blk": 1,
        "synixe_mgp_f_face_shield_cb": 1,
        "synixe_mgp_f_face_shield_khk": 1,
        "synixe_mgp_f_face_shield_rgr": 1,
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "arifle_AKM_F": {
                "probability": 3,
                "magazinesVest": {
                    "30Rnd_762x39_Mag_F": 7,
                }
            },
            "arifle_AKM_FL_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_762x39_Mag_F": 7,
                }
            },
            "Aegis_arifle_AKS74_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Tracer_F": 7,
                }
            },
            "Aegis_arifle_AK74_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_Tracer_F": 7,
                }
            },
            "sgun_HunterShotgun_01_F": {
                "probability": 5,
                "magazinesVest": {
                    "2Rnd_12Gauge_Pellets": 10,
                }
            },
            "sgun_HunterShotgun_01_sawedoff_F": {
                "probability": 5,
                "magazinesVest": {
                    "2Rnd_12Gauge_Pellets": 10,
                }
            },
            "srifle_DMR_06_hunter_F": {
                "probability": 7,
                "magazinesVest": {
                    "10Rnd_Mk14_762x51_Mag_blk_lxWS": 7,
                }
            },
            "Opf_arifle_SKS_F": {
                "probability": 7,
                "magazinesVest": {
                    "30Rnd_762x39_Mag_F": 7,
                }
            },
            "Aegis_arifle_Velko_oak": {
                "probability": 1,
                "magazinesVest": {
                    "35Rnd_556x45_Velko_reload_tracer_red_lxWS": 7,
                }
            },
            "Aegis_arifle_VelkoR5_oak": {
                "probability": 1,
                "magazinesVest": {
                    "35Rnd_556x45_Velko_reload_tracer_red_lxWS": 7,
                }
            },
        },
        "optics": {
            "": 1,
        },
    });
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,Rifleman) {
    @Role(SquadLeader);
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Rifleman) {
    @Role(TeamLeader);
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Base) {
    @Role(Autorifleman);

    @Primary({
        "weapons": {
            "arifle_AKM_F": {
                "magazinesVest": {
                    "75Rnd_762x39_Mag_F": 4,
                },
                "magazinesBackpack": {
                    "75Rnd_762x39_Mag_F": 4,
                },
            },
            "arifle_RPK_F": {
                "magazinesVest": {
                    "75Rnd_762x39_Mag_F": 4,
                },
                "magazinesBackpack": {
                    "75Rnd_762x39_Mag_F": 4,
                },
            },
            "Aegis_arifle_Velko_oak": {
                "magazinesVest": {
                    "50Rnd_556x45_Velko_reload_tracer_yellow_lxWS": 6,
                },
                "magazinesBackpack": {
                    "50Rnd_556x45_Velko_reload_tracer_yellow_lxWS": 6,
                },
            },
        },
        "optics": {
            "": 8,
        },
    });
    
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

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,Autorifleman) {
    @Role(Machinegunner);

    @Primary({
        "weapons": {
            "arifle_RPK_F": {
                "magazinesVest": {
                    "75Rnd_762x39_Mag_F": 2,
                },
                "magazinesBackpack": {
                    "75Rnd_762x39_Mag_F": 4,
                },
            },
        },
        "optics": {
            "": 1,
        },
    });

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

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,Base) {
    @Role(AsstMachinegunner);

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
        "magazines": {
            "75Rnd_762x39_Mag_F": 4,
        },
    });
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,Base) {
    @Role(Marksman);

    @Primary({
        "weapons": {
            "srifle_DMR_06_black_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 7,
                }
            },
            "srifle_DMR_06_camo_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 7,
                }
            },
            "srifle_DMR_06_hunter_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 7,
                }
            },
            "srifle_DMR_06_olive_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 7,
                }
            },
            "Aegis_srifle_SVD_f": {
                "magazinesVest": {
                    "10Rnd_762x54_Mag": 7,
                }
            },
        },
        "optics": {
            "optic_AMS": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
    });
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,Base) {
    @Role(Medic);

    @Backpacks({
        "variants": {
            "tacs_Backpack_Kitbag_Medic_Black": 1,
            "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            "tacs_Backpack_Kitbag_Medic_Green": 1,
            "tacs_Backpack_Kitbag_Medic_Grey": 1,
            "tacs_Backpack_Kitbag_Medic_RGR": 1,
            "tacs_Backpack_Kitbag_Medic_Sage": 1,
            "tacs_Backpack_Kitbag_Medic_Tan": 1,
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
            "launch_RPG7_F": {
                "magazinesBackpack": {
                    "RPG7_F": 1,
                    "PSRL1_FRAG_RF": 1,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_FieldPack_blk": 1,
            "B_FieldPack_cbr": 1,
            "B_FieldPack_green_F": 1,
            "B_FieldPack_khk": 1,
            "B_FieldPack_oli": 1,
        },
    });
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,Base) {
    @Role(Engineer);

    @Backpacks({
        "variants": {
            "B_FieldPack_blk": 1,
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

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,Base) {
    @Role(Demolitions);

    @Backpacks({
        "variants": {
            "B_TacticalPack_blk": 1,
            "B_TacticalPack_khk": 1,
            "B_TacticalPack_rgr": 1,
            "B_TacticalPack_oli": 1,
            "B_TacticalPack_sgg": 1,
        },
        "packs": [
            "eod",
            "demo",
        ],
    });
};
