// RAM

class CLASS2(SIDE,Ram_HMG): GCLASS(Ram_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
        "Guerilla_10",1
    };
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_Pickup_hmg_rf.jpg";
    animationList[] = {"hide_bullbar",0.5,"hide_snorkel",0.25,"hide_antenna",1,"hide_trunk_door",0.5,"hide_frame",0.25,"Hide_Shield",0.5,"hide_armor_window_armor_top",0.25};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Ram_Rocket): GCLASS(Ram_Rocket) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
        "Guerilla_10",1
    };
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\B_G_Pickup_Rocket_rf.jpg";
    animationList[] = {"hide_bullbar",0.5,"hide_snorkel",1,"hide_armor_window_armor_top",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Ram_MRL): GCLASS(Ram_MRL) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
        "Guerilla_10",1
    };
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_MRL_RF.jpg";
    animationList[] = {"hide_bullbar",0.5,"hide_snorkel",0.25,"hide_trunk_door",1,"hide_sidesteps",0.25,"hide_rack",0.25,"hide_rack_spotlights",0.25};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

// LUT

class CLASS2(SIDE,LUT_MRL): GCLASS(LUT_MRL) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Ardistan",1,
        "RUS",1,
        "Mudwalker",1
    };
    hiddenSelectionsTextures[] = {"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa","lxws\vehicles_f_lxws\data\Truck_02\zamak_mrl_brown_co.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Truck_02_MRL_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_AA): GCLASS(LUT_AA) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "SFIA",1,
        "Brown",1,
        "RUS",1
    };
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Truck_02_aa_F.jpg";
    animationList[] = {"hideSpareWheel",0.5,"hideBumper",0.5,"hideWindowProtector",0.77,"hideCrates",0,"shield_hide",0.11};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Transport): GCLASS(LUT_Transport) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Ardistan",1,
        "SFIA",1,
        "Jungle",1,
        "Black",1
    };
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"};
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Truck_02_transport_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_TransportCovered): GCLASS(LUT_TransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Ardistan",1,
        "SFIA",1,
        "Jungle",1,
        "Black",1
    };
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"};
    editorPreview = "\MU\MU_MILITIA\data\preview\O_MU_MIL_Truck_02_covered_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,LUT_Flatbed): GCLASS(LUT_Flatbed) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Ardistan",1,
        "Mudwalker",1,
        "Jungle",1,
        "Black",1,
        "Blue",1
    };
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa","\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa","lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_flatbed_lxWS.jpg";
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
    hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_F.jpg";
    animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,OffroadCovered): GCLASS(OffroadCovered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
    hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
    editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\C_Offroad_01_covered_F.jpg";
    animationList[] = {"HideRoofRack",1,"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_HMG): GCLASS(Offroad_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
    hiddenSelectionsTextures[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_armed_F.jpg";
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
    hiddenSelectionsTextures[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa"};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_G_Offroad_AA_lxWS.jpg";
    animationList[] = {"HideSnorkel",0.33,"HideBumper1",0.33,"HideBumper2",0.33,"HideDoor3",0.33,"shield_hide",0.33};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_AT): GCLASS(Offroad_AT) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
    hiddenSelectionsTextures[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Offroad_01_AT_F.jpg";
    animationList[] = {"HideSnorkel",0.33,"HideBumper1",0.33,"HideBumper2",0.33,"HideDoor3",0.33,"shield_hide",0.33};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored): GCLASS(Offroad_Armored) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
    hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa"};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_G_Offroad_01_armor_base_lxWS.jpg";
    animationList[] = {"HideSnorkel",1,"HideBumper1",0.5,"HideBumper2",0.5,"HideBumper3",1,"hideRoofLights",1,"HatchL_rot",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored_HMG): GCLASS(Offroad_Armored_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
    hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_G_Offroad_01_armor_armed_lxWS.jpg";
    animationList[] = {"HideSnorkel",1,"HideBumper1",1,"HideBumper2",1,"HideBumper3",0,"hideRoofLights",0,"HatchL_rot",0.5};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Offroad_Armored_AT): GCLASS(Offroad_Armored_AT) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
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
    hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_G_Offroad_01_armor_AT_lxWS.jpg";
    animationList[] = {"HideSnorkel",1,"HideBumper1",1,"HideBumper2",1,"HideBumper3",0,"hideRoofLights",0,"HatchL_rot",0.5};
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
        "Guerilla_02",1,
        "Guerilla_03",1
    };
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Van_01_fuel_F.jpg";
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};
