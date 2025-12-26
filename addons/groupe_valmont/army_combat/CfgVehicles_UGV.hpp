class CLASS2(SIDE,UGV_RCWS): GCLASS(UGV_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_UGV_01_rcws_olive_F.jpg";
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa","\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
    crew = QCLASS2(SIDE,Base);
    typicalCargo[] = {};
};

class CLASS2(SIDE,UGV): GCLASS(UGV) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_UGV_01_olive_F.jpg";
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa","\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
    crew = QCLASS2(SIDE,Base);
    typicalCargo[] = {};
};
//as of rn, drones are kinda broken, gotta figure that out lol
