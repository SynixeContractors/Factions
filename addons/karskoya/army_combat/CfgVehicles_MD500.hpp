class GCLASS(MD500E);
class CLASS(MD500E): GCLASS(MD500E) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Light_01_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};

class GCLASS(MD500E_Armed);
class CLASS(MD500E_Armed): GCLASS(MD500E_Armed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Light_01_dynamicLoadout_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};
