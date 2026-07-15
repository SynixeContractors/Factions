class CLASS2(SIDE,UGV_RCWS): GCLASS(UGV_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_rcws_F.jpg";
};

class CLASS2(SIDE,UGV): GCLASS(UGV) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"ION",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_F.jpg";
};
//as of rn, drones are kinda broken, gotta figure that out lol
