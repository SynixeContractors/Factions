// LUT

class CLASS2(SIDE,LUT_Transport): GCLASS(LUT_Transport) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_transport_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_TransportCovered): GCLASS(LUT_TransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Flatbed): GCLASS(LUT_Flatbed) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\C_Truck_02_flatbed_lxWS.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Cargo): GCLASS(LUT_Cargo) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_flatbed_lxWS.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Ammo): GCLASS(LUT_Ammo) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Green",1,
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_Ammo_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

// Offroad

class CLASS2(SIDE,Offroad): GCLASS(Offroad) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_AT): GCLASS(Offroad_AT) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_HMG): GCLASS(Offroad_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_AA): GCLASS(Offroad_AA) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Covered): GCLASS(Offroad_Covered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
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
        "Guerilla_01",1,
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
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_06",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Van_01_transport_F.jpg";
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
        "FIA1",1,
        "FIA2",1,
        "FIA3",1
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
        "FIA1",1,
        "FIA2",1,
        "FIA3",1
    };
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_Van_02_vehicle_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

// Quad

class CLASS2(SIDE,QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
        "Green",1,
    };
    crew = QCLASS2(SIDE,Rifleman);
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Quadbike_01_F.jpg";
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored): GCLASS(Offroad_Armored) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored_AT): GCLASS(Offroad_Armored_AT) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored_HMG): GCLASS(Offroad_Armored_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored_AA): GCLASS(Offroad_Armored_AA) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,RSG60Mortar): GCLASS(RSG60Mortar) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Olive",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,M2_High): GCLASS(M2_High) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HMG_02_high_F.jpg";
    animationList[] = {"HideRail",0,"HideShield",0};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,M2_Low): GCLASS(M2_Low) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HMG_02_F.jpg";
    animationList[] = {"HideRail",0,"HideShield",0};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,MD500E): GCLASS(MD500E) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Black",1,
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Light_01_F.jpg";
    crew = QCLASS2(SIDE,HeliPilot);
    typicalCargo[] = {QCLASS2(SIDE,HeliPilot)};
};
