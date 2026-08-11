class CLASS2(SIDE,QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Quadbike_01_F.jpg";
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    textureList[] = {"Black", 1};
};
