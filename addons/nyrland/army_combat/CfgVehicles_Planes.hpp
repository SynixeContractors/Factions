class GCLASS(F35);
class CLASS(F35): GCLASS(F35) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"DarkGrey_BAF",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
    crew = QCLASS(FighterPilot);
};

class GCLASS(F35_Stealth);
class CLASS(F35_Stealth): GCLASS(F35_Stealth) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"DarkGrey_BAF",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
    crew = QCLASS(FighterPilot);
};

class GCLASS(MQ9);
class CLASS(MQ9): GCLASS(MQ9) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"BAF",1};
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_UAV_07_F.jpg";
    crew = QCLASS(FighterPilot);
};

class GCLASS(C130);
class CLASS(C130): GCLASS(C130) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"BAFGrey",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MBT_03_cannon_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};
