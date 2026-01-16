class GCLASS(Cougar_Pylon);
class CLASS(Cougar_Pylon): GCLASS(Cougar_Pylon) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Heli_EC_04_military_RF.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};

class GCLASS(PumaM);
class CLASS(PumaM): GCLASS(PumaM) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Heli_EC_04_military_RF.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};
