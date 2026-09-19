class GCLASS(Polaris);
class CLASS(Polaris): GCLASS(Polaris) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_unarmed_F.jpg";
    hiddenSelectionsTextures[] = {};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(Polaris_NoDoor);
class CLASS(Polaris_NoDoor): GCLASS(Polaris_NoDoor) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_LSV_01_light_F.jpg";
    hiddenSelectionsTextures[] = {};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(Polaris_Titan);
class CLASS(Polaris_Titan): GCLASS(Polaris_Titan) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_AT_F.jpg";
    hiddenSelectionsTextures[] = {};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};


class GCLASS(Polaris_HMG);
class CLASS(Polaris_HMG): GCLASS(Polaris_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_LSV_01_armed_F.jpg";
    hiddenSelectionsTextures[] = {};
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

