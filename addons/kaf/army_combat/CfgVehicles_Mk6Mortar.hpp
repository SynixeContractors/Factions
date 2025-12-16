class GCLASS(Mk6Mortar);
class CLASS(Mk6Mortar): GCLASS(Mk6Mortar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
    hiddenSelectionsTextures[] = {"\A3\Static_f\Mortar_01\data\Mortar_01_CO.paa"};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
