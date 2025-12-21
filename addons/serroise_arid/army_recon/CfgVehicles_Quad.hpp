class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    crew = QCLASS(Rifleman);
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Quadbike_01_F.jpg";
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {"Takistan", 1};
};
