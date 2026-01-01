class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    crew = QCLASS(Rifleman);
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Quadbike_01_F.jpg";
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {"Olive", 1};
};
