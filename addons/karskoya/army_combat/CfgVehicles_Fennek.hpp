class GCLASS(Fennek);
class CLASS(Fennek): GCLASS(Fennek) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_tna_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(Fennek_HMG);
class CLASS(Fennek_HMG): GCLASS(Fennek_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_hmg_tna_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(Fennek_GMG);
class CLASS(Fennek_GMG): GCLASS(Fennek_GMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_gmg_tna_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};
