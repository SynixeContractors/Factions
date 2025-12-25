// LUT

class CLASS2(SIDE,LUT_Transport): GCLASS(LUT_Transport) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Brown",1,
        "Blue",1,
        "Olive",1,
    };
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Truck_02_transport_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_TransportCovered): GCLASS(LUT_TransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Brown",1,
        "Blue",1,
        "Olive",1,
    };
    editorPreview = "\MU\MU_MILITIA\data\preview\O_MU_MIL_Truck_02_covered_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Flatbed): GCLASS(LUT_Flatbed) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Brown",1,
        "Blue",1,
        "Olive",1,
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_flatbed_lxWS.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Cargo): GCLASS(LUT_Cargo) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Brown",1,
        "Blue",1,
        "Olive",1,
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_cargo_lxWS.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

// Offroad

class CLASS2(SIDE,Offroad): GCLASS(Offroad) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Beige",1,
        "Black",1,
        "Blue",1,
        "Darkred",1,
        "Green",1,
        "Olive",1,
        "Red",1,
        "White",1
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Covered): GCLASS(Offroad_Covered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Beige",1,
        "Black",1,
        "Blue",1,
        "Darkred",1,
        "Green",1,
        "Olive",1,
        "Red",1,
        "White",1
    };
    editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\C_Offroad_01_covered_F.jpg";
    animationList[] = {"HideRoofRack",1,"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

// Jay

class CLASS2(SIDE,Jay_Fuel): GCLASS(Jay_Fuel) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Red",1,
        "White",1,
        "Black_v2",1,
        "White_v2",1,
        "Red_v2",1
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Van_01_fuel_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Jay_Box): GCLASS(Jay_Box) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Red",1,
        "White",1,
        "White Box",1,
        "Yellow",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Van_01_fuel_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Jay_Flatbed): GCLASS(Jay_Flatbed) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Red",1,
        "Insurgent_04",1,
        "Insurgent_05",1,
        "Insurgent_06",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Van_01_fuel_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

// Van

class CLASS2(SIDE,Van_Transport): GCLASS(Van_Transport) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
        "Black",1,
        "Red",1,
        "Blue",1,
        "White",1
    };
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_Van_02_transport_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Van_Cargo): GCLASS(Van_Cargo) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
        "Black",1,
        "Red",1,
        "Blue",1,
        "White",1
    };
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_Van_02_vehicle_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};
