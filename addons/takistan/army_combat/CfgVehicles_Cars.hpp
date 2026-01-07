// RAM

class GCLASS(Ram_HMG);
class CLASS(Ram_HMG): GCLASS(Ram_HMG) {
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
        "Guerilla_10",1
    };
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_Pickup_hmg_rf.jpg";
    animationList[] = {"hide_bullbar",0.5,"hide_snorkel",0.25,"hide_antenna",1,"hide_trunk_door",0.5,"hide_frame",0.25,"Hide_Shield",0.5,"hide_armor_window_armor_top",0.25};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Ram_Rocket);
class CLASS(Ram_Rocket): GCLASS(Ram_Rocket) {
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
        "Guerilla_10",1
    };
    
    editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\B_G_Pickup_Rocket_rf.jpg";
    animationList[] = {"hide_bullbar",0.5,"hide_snorkel",1,"hide_armor_window_armor_top",0.5};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Ram_MRL);
class CLASS(Ram_MRL): GCLASS(Ram_MRL) {
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
        "Guerilla_10",1
    };
    
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_MRL_RF.jpg";
    animationList[] = {"hide_bullbar",0.5,"hide_snorkel",0.25,"hide_trunk_door",1,"hide_sidesteps",0.25,"hide_rack",0.25,"hide_rack_spotlights",0.25};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

// LUT

class GCLASS(LUT_MRL);
class CLASS(LUT_MRL): GCLASS(LUT_MRL) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Ardistan",1,
        "RUS",1,
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Truck_02_MRL_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUT_AA);
class CLASS(LUT_AA): GCLASS(LUT_AA) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "SFIA",1,
        "Brown",1,
        "RUS",1
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Truck_02_aa_F.jpg";
    animationList[] = {"hideSpareWheel",0.5,"hideBumper",0.5,"hideWindowProtector",0.77,"hideCrates",0,"shield_hide",0.11};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUT_Transport);
class CLASS(LUT_Transport): GCLASS(LUT_Transport) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Ardistan",1,
        "SFIA",1,
        "Jungle",1,
        "Black",1
    };
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Truck_02_transport_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUT_TransportCovered);
class CLASS(LUT_TransportCovered): GCLASS(LUT_TransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Ardistan",1,
        "SFIA",1,
        "Jungle",1,
        "Black",1
    };
    editorPreview = "\MU\MU_MILITIA\data\preview\O_MU_MIL_Truck_02_covered_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUT_Flatbed);
class CLASS(LUT_Flatbed): GCLASS(LUT_Flatbed) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Ardistan",1,
        "Mudwalker",1,
        "Jungle",1,
        "Black",1,
        "Blue",1
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_flatbed_lxWS.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUT_Cargo);
class CLASS(LUT_Cargo): GCLASS(LUT_Cargo) {
    SCOPE_DLC;
    faction = QPCLASS(t4_indep);
    side = 2;
    textureList[] = {
        "Ardistan",1,
        "Mudwalker",1,
        "Jungle",1,
        "Black",1,
        "Blue",1
    };
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_flatbed_lxWS.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
