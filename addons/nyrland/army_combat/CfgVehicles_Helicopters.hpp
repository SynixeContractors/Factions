class GCLASS(Cougar);
class CLASS(Cougar): GCLASS(Cougar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Heli_EC_04_military_RF.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Cougar_Armed);
class CLASS(Cougar_Armed): GCLASS(Cougar_Armed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Heli_EC_03_RF.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Cougar_Pylon);
class CLASS(Cougar_Pylon): GCLASS(Cougar_Pylon) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_EC_02_RF.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Cougar_Rescue);
class CLASS(Cougar_Rescue): GCLASS(Cougar_Rescue) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"CIV_GRAYORANGE",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_Heli_EC_04_rescue_RF.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Chinook);
class CLASS(Chinook): GCLASS(Chinook) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_03_unarmed_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Chinook_M134);
class CLASS(Chinook_M134): GCLASS(Chinook_M134) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_03_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Apache);
class CLASS(Apache): GCLASS(Apache) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Heli_Attack_03_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};
