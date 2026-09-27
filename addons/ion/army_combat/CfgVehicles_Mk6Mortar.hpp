class CLASS2(SIDE,Mk6Mortar): GCLASS(Mk6Mortar) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
    hiddenSelectionsTextures[] = {"\A3\Static_f\Mortar_01\data\Mortar_01_CO.paa"};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};
