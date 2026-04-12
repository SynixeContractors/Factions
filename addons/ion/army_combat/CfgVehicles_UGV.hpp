class CLASS2(SIDE,UGV_RCWS): GCLASS(UGV_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_rcws_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_ION_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_ION_CO.paa"};
    crew = QCLASS2(SIDE,Hidden);
    typicalCargo[] = {};
};

class CLASS2(SIDE,UGV): GCLASS(UGV) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_ION_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa","\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_ION_CO.paa"};
    crew = QCLASS2(SIDE,Hidden);
    typicalCargo[] = {};
};
//as of rn, drones are kinda broken, gotta figure that out lol
