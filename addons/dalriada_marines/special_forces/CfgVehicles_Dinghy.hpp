class GCLASS(Dinghy);
class CLASS(Dinghy): GCLASS(Dinghy) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"Black",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Transport_01_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
