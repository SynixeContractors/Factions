class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    crew = QCLASS(Rifleman);
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Quadbike_01_F.jpg";
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa","\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"};
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {"Olive", 1};
};
