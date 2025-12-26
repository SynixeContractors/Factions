class CLASS2(SIDE,QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Quadbike_01_F.jpg";
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa","\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"};
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    textureList[] = {"Olive", 1};
};
