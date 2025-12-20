class GCLASS(LSV);
class CLASS(LSV): GCLASS(LSV) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_LSV_02_unarmed_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LSV_M134);
class CLASS(LSV_M134): GCLASS(LSV_M134) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_LSV_02_armed_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LSV_metis);
class CLASS(LSV_metis): GCLASS(LSV_metis) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_LSV_02_AT_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
