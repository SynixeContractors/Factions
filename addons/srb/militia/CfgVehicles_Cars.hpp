// RAM

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": [
        "Guerilla_01",
        "Guerilla_02",
        "Guerilla_03",
        "Guerilla_04",
        "Guerilla_05",
        "Guerilla_06",
        "Guerilla_07",
        "Guerilla_08",
        "Guerilla_09",
        "Guerilla_10",
        "Astra",
        "Cruiser",
        "Olive",
        "Brown",
        "Daltgreen",
        "Orange",
        "Yellow",
        "Green",
        "Tan",
        "Blue",
        "Red",
        "Gray",
        "White",
        "Black",
    ],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "Ram_HMG",
            "editorPreview": "\\lxRF\\editorpreviews_rf\\Data\\CfgVehicles\\B_G_Pickup_hmg_rf.jpg",
            "animationList": ["hide_bullbar", 0.5, "hide_snorkel", 0.25, "hide_antenna", 1, "hide_trunk_door", 0.5, "hide_frame", 0.25, "Hide_Shield", 0.5, "hide_armor_window_armor_top", 0.25],
        },
        {
            "class": "Ram_Rocket",
            "editorPreview": "\\lxrf\\editorpreviews_rf\\Data\\CfgVehicles\\B_G_Pickup_Rocket_rf.jpg",
            "animationList": ["hide_bullbar", 0.5, "hide_snorkel", 1, "hide_armor_window_armor_top", 0.5],
        },
        {
            "class": "Ram_MRL",
            "editorPreview": "\\A3_Aegis\\EditorPreviews_F_Aegis\\Data\\CfgVehicles\\Aegis_O_A_Pickup_MRL_RF.jpg",
            "animationList": ["hide_bullbar", 0.5, "hide_snorkel", 0.25, "hide_trunk_door", 1, "hide_sidesteps", 0.25, "hide_rack", 0.25, "hide_rack_spotlights", 0.25],
        },
    ],
});

// LUT

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Sand", "Green", "Brown", "Black", "Jungle", "Marar"],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "LUT_MRL",
            "editorPreview": "\\A3_Aegis\\EditorPreviews_F_Aegis\\Data\\CfgVehicles\\O_Truck_02_MRL_F.jpg",
        },
        {
            "class": "LUT_AA",
            "editorPreview": "\\A3_Aegis\\EditorPreviews_F_Aegis\\Data\\CfgVehicles\\Aegis_O_A_Truck_02_aa_F.jpg",
            "animationList": ["hideSpareWheel", 0.5, "hideBumper", 0.5, "hideWindowProtector", 0.77, "hideCrates", 0, "shield_hide", 0.11],
        },
    ],
});

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Yellow", "Sand", "Orange", "Marar", "Lime", "Green", "Brown", "Black", "Jungle", "Daltgreen", "Blue"],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "LUT_Transport",
            "editorPreview": "\\A3_Atlas\\EditorPreviews_F_Atlas\\Data\\CfgVehicles\\Atlas_O_W_Truck_02_transport_F.jpg",
        },
        {
            "class": "LUT_TransportCovered",
            "editorPreview": "\\MU\\MU_MILITIA\\data\\preview\\O_MU_MIL_Truck_02_covered_F.jpg",
        },
        {
            "class": "LUT_Flatbed",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\O_Truck_02_flatbed_lxWS.jpg",
        },
        {
            "class": "LUT_Cargo",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\O_Truck_02_cargo_lxWS.jpg",
        },
    ],
});

// Offroad

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": [
        "Guerilla_01",
        "Guerilla_02",
        "Guerilla_03",
        "Guerilla_04",
        "Guerilla_05",
        "Guerilla_06",
        "Guerilla_07",
        "Guerilla_08",
        "Guerilla_09",
        "Guerilla_10",
        "Guerilla_11",
        "Guerilla_12",
        "Beige",
        "Black",
        "Blue",
        "Bluecustom",
        "Brown",
        "Darkred",
        "Green",
        "Olive",
        "Pink",
        "Red",
        "White",
    ],
    "prefix": "SIDE",
    "vehicles": [
        {
            "class": "Offroad",
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\O_G_Offroad_01_F.jpg",
            "animationList": ["HideDoor1", 0.333333, "HideDoor2", 0.333333, "HideDoor3", 0.333333, "HideBumper1", 0.5, "HideBumper2", 0.5],
        },
        {
            "class": "Offroad_Covered",
            "editorPreview": "\\A3\\EditorPreviews_F_Enoch\\Data\\CfgVehicles\\C_Offroad_01_covered_F.jpg",
            "animationList": ["HideRoofRack", 1, "HideCover", 0, "HideDoor3", 0, "HideBumper1", 1, "HideBumper2", 0],
        },
        {
            "class": "Offroad_HMG",
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\O_G_Offroad_01_armed_F.jpg",
            "animationList": ["HideDoor1", 0.333333, "HideDoor2", 0.333333, "HideDoor3", 0.333333, "HideBumper1", 0.5, "HideBumper2", 0.5],
        },
        {
            "class": "Offroad_AA",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\O_G_Offroad_AA_lxWS.jpg",
            "animationList": ["HideSnorkel", 0.33, "HideBumper1", 0.33, "HideBumper2", 0.33, "HideDoor3", 0.33, "shield_hide", 0.33],
        },
        {
            "class": "Offroad_AT",
            "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\O_G_Offroad_01_AT_F.jpg",
            "animationList": ["HideSnorkel", 0.33, "HideBumper1", 0.33, "HideBumper2", 0.33, "HideDoor3", 0.33, "shield_hide", 0.33],
        },
        {
            "class": "Offroad_Armored",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\I_G_Offroad_01_armor_base_lxWS.jpg",
            "animationList": ["HideSnorkel", 1, "HideBumper1", 0.5, "HideBumper2", 0.5, "HideBumper3", 1, "hideRoofLights", 1, "HatchL_rot", 0.5],
        },
        {
            "class": "Offroad_Armored_HMG",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\I_G_Offroad_01_armor_armed_lxWS.jpg",
            "animationList": ["HideSnorkel", 1, "HideBumper1", 1, "HideBumper2", 1, "HideBumper3", 0, "hideRoofLights", 0, "HatchL_rot", 0.5],
        },
        {
            "class": "Offroad_Armored_AT",
            "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\I_G_Offroad_01_armor_AT_lxWS.jpg",
            "animationList": ["HideSnorkel", 1, "HideBumper1", 1, "HideBumper2", 1, "HideBumper3", 0, "hideRoofLights", 0, "HatchL_rot", 0.5],
        },
    ],
});

// Jay

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "White", "Red", "Black_v20", "White_v2", "Red_v2"],
    "prefix": "SIDE",
    "vehicles": [
        {"class": "Jay_Fuel", "editorPreview": "\\A3\\EditorPreviews_F\\Data\\CfgVehicles\\C_Van_01_fuel_F.jpg"},
    ],
});
