// LUT

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "Brown", "Blue", "Green"],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "LUT_Transport",
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Truck_02_transport_F.jpg",
        },
    ],
});

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "Brown", "Blue", "Olive"],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "LUT_TransportCovered",
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Truck_02_covered_F.jpg",
        },
        {
            "class": "LUT_Flatbed",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\C_Truck_02_flatbed_lxWS.jpg",
        },
        {
            "class": "LUT_Cargo",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\C_Truck_02_cargo_lxWS.jpg",
        },
    ],
});

// Offroad

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Beige", "Black", "Blue", "Darkred", "Green", "Olive", "Red", "White"],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "Offroad",
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Offroad_01_F.jpg",
            "animationList": ["HideDoor1", 0.333333, "HideDoor2", 0.333333, "HideDoor3", 0.333333, "HideBumper1", 0.5, "HideBumper2", 0.5],
        },
        {
            "class": "Offroad_Covered",
            "editorPreview": "\\A3\\EditorPreviews_F_Enoch\\Data\\CfgVehicles\\C_Offroad_01_covered_F.jpg",
            "animationList": ["HideRoofRack", 1, "HideCover", 0, "HideDoor3", 0, "HideBumper1", 1, "HideBumper2", 0],
        },
    ],
});

// Jay

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "Red", "White", "Black_v2", "White_v2", "Red_v2"],
    "prefix": "SIDE",
    "vehicles": [
        {"class": "Jay_Fuel", "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Van_01_fuel_F.jpg"},
        {
            "class": "Jay_Box",
            "camo": ["Black", "Red", "White", "White Box", "Yellow"],
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Van_01_box_F.jpg",
        },
        {
            "class": "Jay_Flatbed",
            "camo": ["Black", "Red", "Insurgent_04", "Insurgent_05", "Insurgent_06"],
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Van_01_transport_F.jpg",
        },
    ],
});

// Van

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Green", "Black", "Red", "Blue", "White"],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "Van_Transport",
            "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_Van_02_transport_F.jpg",
        },
        {
            "class": "Van_Cargo",
            "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_Van_02_vehicle_F.jpg",
        },
    ],
});

// Quad

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "Blue", "Brown", "Green", "Red", "White"],
    "prefix": "SIDE",
    "vehicles": [
        {"class": "QuadBike", "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Quadbike_01_F.jpg"},
    ],
});

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "prefix": "SIDE",
    "vehicles": [
        "M2_High",
        "M2_Low",
    ],
});

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "Disenfranchised Young Men";
    editorSubcategory = QGCLASS(militia);
    
    @Uniforms({
        "variants": {
            "casual_solid_brown_sage_uniform": 1,
            "casual_solid_gray_sage_uniform": 1,
            "casual_solid_navy_sage_uniform": 1,
            "casual_plaid_black_sage_uniform": 1,
            "casual_plaid_gray_sage_uniform": 1,
            "casual_plaid_navy_sage_uniform": 1,
            "U_C_PilotJacket_black_RF": 1,
            "U_C_PilotJacket_brown_RF": 1,
            "U_C_PilotJacket_lbrown_RF": 1,
            "eou_gorka_2": 1,
            "eou_gorka_25": 1,
            "eou_gorka_6": 1,
            "eou_gorka_7": 1,
            "U_O_R_Gorka_01_black_F": 1,
            "Opf_U_O_S_Uniform_01_sweater_F": 1,
            "Opf_U_O_S_Uniform_01_sweater_flora_F": 1,
        },
        "packs": [
            "rifleman_medical",
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
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "": 1,
        "H_Watchcap_cbr": 1,
        "H_Watchcap_blk": 1,
        "H_Watchcap_camo": 1,
        "H_Watchcap_khk": 1,
        "H_Watchcap_sgg": 1,
        "H_Bandanna_blu": 1,
        "H_Bandanna_sgg": 1,
        "H_Booniehat_oli": 1,
    });

    @Facewear({
        "G_Balaclava_blk": 1,
        "G_Balaclava_BlueStrips": 1,
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
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "arifle_AKM_F": {
                "magazinesVest": {
                    "30Rnd_762x39_Mag_F": 5,
                }
            },
            "Aegis_arifle_AKS74_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "Aegis_arifle_AK74_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "arifle_AKS_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "sgun_Mp153_classic_F": {
                "magazinesVest": {
                    "4Rnd_12Gauge_Pellets": 8,
                }
            },
            "sgun_HunterShotgun_01_F": {
                "magazinesVest": {
                    "2Rnd_12Gauge_Pellets": 10,
                }
            },
            "srifle_DMR_06_hunter_F": {
                "magazinesVest": {
                    "10Rnd_Mk14_762x51_Mag_blk_lxWS": 7,
                }
            },
            "Opf_arifle_SKS_F": {
                "magazinesVest": {
                    "30Rnd_762x39_Mag_F": 5,
                }
            },
            "arifle_SLR_lxWS": {
                "magazinesVest": {
                    "20Rnd_762x51_slr_lxWS": 5,
                }
            },
            "synixe_armoury_arifle_M16A3": {
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 5,
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
                    "75Rnd_762x39_Mag_F": 2,
                },
                "magazinesBackpack": {
                    "75Rnd_762x39_Mag_F": 4,
                },
            },
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
            "B_FieldPack_blk": 1,
            "B_FieldPack_green_F": 1,
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
            "B_FieldPack_blk": 1,
            "B_FieldPack_green_F": 1,
            "B_FieldPack_oli": 1,
        },
    });
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,Base) {
    @Role(AsstMachinegunner);

    @Backpacks({
        "variants": {
            "B_FieldPack_blk": 1,
            "B_FieldPack_green_F": 1,
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
                    "20Rnd_762x51_Mag_blk_lxWS": 5,
                }
            },
            "srifle_DMR_06_camo_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 5,
                }
            },
            "srifle_DMR_06_hunter_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 5,
                }
            },
            "srifle_DMR_06_olive_F": {
                "magazinesVest": {
                    "20Rnd_762x51_Mag_blk_lxWS": 5,
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

    @Primary({
        "weapons": {
            "Aegis_arifle_AKS74_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "arifle_AKS_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "SMG_05_F": {
                "magazinesVest": {
                    "30Rnd_9x21_Mag_SMG_02": 5,
                }
            },
            "sgun_HunterShotgun_01_sawedoff_F": {
                "magazinesVest": {
                    "2Rnd_12Gauge_Pellets": 10,
                }
            },
        },
        "optics": {
            "": 1,
        },
    });

    @Backpacks({
        "variants": {
            "tacs_Backpack_Kitbag_Medic_Black": 1,
            "tacs_Backpack_Kitbag_Medic_Green": 1,
            "tacs_Backpack_Kitbag_Medic_Grey": 1,
            "tacs_Backpack_Kitbag_Medic_Sage": 1,
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

    @Primary({
        "weapons": {
            "Aegis_arifle_AKS74_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "arifle_AKS_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "SMG_05_F": {
                "magazinesVest": {
                    "30Rnd_9x21_Mag_SMG_02": 5,
                }
            },
            "sgun_HunterShotgun_01_sawedoff_F": {
                "magazinesVest": {
                    "2Rnd_12Gauge_Pellets": 10,
                }
            },
        },
        "optics": {
            "": 1,
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
        "packs": [
            "engineer",
        ],
    });
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,Base) {
    @Role(Demolitions);

    @Primary({
        "weapons": {
            "Aegis_arifle_AKS74_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "arifle_AKS_F": {
                "magazinesVest": {
                    "30Rnd_545x39_Mag_F": 5,
                }
            },
            "SMG_05_F": {
                "magazinesVest": {
                    "30Rnd_9x21_Mag_SMG_02": 5,
                }
            },
            "sgun_HunterShotgun_01_sawedoff_F": {
                "magazinesVest": {
                    "2Rnd_12Gauge_Pellets": 10,
                }
            },
        },
        "optics": {
            "": 1,
        },
    });

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
