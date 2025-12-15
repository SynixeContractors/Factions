class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    crew = QCLASS(Rifleman);
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Quadbike_01_ghex_F.jpg";
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {"GreenHex", 1};
};
