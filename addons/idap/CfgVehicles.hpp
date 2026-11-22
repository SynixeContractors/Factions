class CfgVehicles {
    #include "CfgVehicles_Units.hpp"
    @Vehicles({
        "faction": "civilian",
        "camo": "IDAP",
        "crew": "AidWorker",
        "vehicles": [
            {
                "class": "Jeep",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Offroad_02_unarmed_F.jpg",
            },
        ],
    });

    @Vehicles({
        "faction": "civilian",
        "camo": "IdapAmbulance",
        "crew": "Paramedic",
        "vehicles": [
            {
                "class": "Van_Ambulance",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Van_02_medevac_F.jpg",
            },
        ],
    });
    @Vehicles({
        "faction": "civilian",
        "camo": "IDAP",
        "crew": "AidWorker",
        "vehicles": [
            {
                "class": "Van_Transport",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Van_02_transport_F.jpg",
            },
            {
                "class": "Van_Cargo",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Van_02_vehicle_F.jpg",
            },
            {
                "class": "Offroad",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Offroad_01_F.jpg",
            },
            {
                "class": "Offroad_Services",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Offroad_01_F.jpg",
            },
            {
                "class": "Offroad_Comms",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Offroad_01_F.jpg",
            },
            {"class": "Ram", "editorPreview": "\\lxRF\\editorpreviews_rf\\Data\\CfgVehicles\\C_IDAP_Pickup_rf.jpg"},
            {
                "class": "Ram_Covered",
                "editorPreview": "\\lxRF\\editorpreviews_rf\\Data\\CfgVehicles\\C_IDAP_Pickup_rf.jpg",
            },
            {
                "class": "Ram_Fuel",
                "editorPreview": "\\lxRF\\editorpreviews_rf\\Data\\CfgVehicles\\C_IDAP_Pickup_fuel_rf.jpg",
            },
        ],
    });

    @Vehicles({
        "faction": "civilian",
        "camo": "IDAP",
        "crew": "Pilot",
        "vehicles": [
            {
                "class": "Mohawk",
                "cargo": ["AidWorker"],
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Heli_Transport_02_F.jpg",
            },
            {
                "class": "Puma",
                "cargo": ["AidWorker"],
                "editorPreview": "\\lxRF\\editorpreviews_rf\\Data\\CfgVehicles\\C_IDAP_Heli_EC_01A_civ_RF.jpg",
            },
        ],
    });

    @Vehicles({
        "faction": "civilian",
        "side": "CIV",
        "camo": "IDAP",
        "crew": "AidWorker",
        "vehicles": [
            {
                "class": "LUT_Transport",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Truck_02_transport_F.jpg",
            },
            {
                "class": "LUT_TransportCovered",
                "editorPreview": "\\A3\\EditorPreviews_F_Orange\\Data\\CfgVehicles\\C_IDAP_Truck_02_F.jpg",
            },
            {
                "class": "LUT_Repair",
                "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\C_IDAP_Truck_02_box_lxWS.jpg",
            },
            {
                "class": "LUT_Flatbed",
                "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\C_IDAP_Truck_02_flatbed_lxWS.jpg",
            },
            {
                "class": "LUT_Cargo",
                "editorPreview": "\\lxws\\editorpreviews_f_lxws\\Data\\CfgVehicles\\C_IDAP_Truck_02_cargo_lxWS.jpg",
            },
            {"class": "LUT_Fuel", "editorPreview": ""},
        ],
    });

};
