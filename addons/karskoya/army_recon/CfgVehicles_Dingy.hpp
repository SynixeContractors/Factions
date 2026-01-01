class GCLASS(Dingy);
class CLASS(Dingy): GCLASS(Dingy) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Black",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Transport_01_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
