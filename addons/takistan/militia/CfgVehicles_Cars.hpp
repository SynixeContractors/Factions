
class GCLASS(Offroad);
class CLASS(Offroad): GCLASS(Offroad) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_Covered);
class CLASS(Offroad_Covered): GCLASS(Offroad_Covered) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1
    };
    editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\C_Offroad_01_covered_F.jpg";
    animationList[] = {"HideRoofRack",1,"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_HMG);
class CLASS(Offroad_HMG): GCLASS(Offroad_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1,
        "SFIA",1,
        "SFIA2",1
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_armed_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_AA);
class CLASS(Offroad_AA): GCLASS(Offroad_AA) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_G_Offroad_AA_lxWS.jpg";
    animationList[] = {"HideSnorkel",0.33,"HideBumper1",0.33,"HideBumper2",0.33,"HideDoor3",0.33,"shield_hide",0.33};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_AT);
class CLASS(Offroad_AT): GCLASS(Offroad_AT) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1,
        "SFIA",1,
        "SFIA2",1
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_AT_F.jpg";
    animationList[] = {"HideSnorkel",0.33,"HideBumper1",0.33,"HideBumper2",0.33,"HideDoor3",0.33,"shield_hide",0.33};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_Armored);
class CLASS(Offroad_Armored): GCLASS(Offroad_Armored) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1,
        "SFIA",1,
        "SFIA2",1
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_G_Offroad_01_armor_base_lxWS.jpg";
    animationList[] = {"HideSnorkel",1,"HideBumper1",0.5,"HideBumper2",0.5,"HideBumper3",1,"hideRoofLights",1,"HatchL_rot",0.5};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_Armored_HMG);
class CLASS(Offroad_Armored_HMG): GCLASS(Offroad_Armored_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1,
        "SFIA",1,
        "SFIA2",1
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_G_Offroad_01_armor_armed_lxWS.jpg";
    animationList[] = {"HideSnorkel",1,"HideBumper1",1,"HideBumper2",1,"HideBumper3",0,"hideRoofLights",0,"HatchL_rot",0.5};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Offroad_Armored_AT);
class CLASS(Offroad_Armored_AT): GCLASS(Offroad_Armored_AT) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1,
        "Guerilla_11",1,
        "Guerilla_12",1,
        "SFIA",1,
        "SFIA2",1
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_G_Offroad_01_armor_AT_lxWS.jpg";
    animationList[] = {"HideSnorkel",1,"HideBumper1",1,"HideBumper2",1,"HideBumper3",0,"hideRoofLights",0,"HatchL_rot",0.5};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
