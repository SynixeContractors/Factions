class GCLASS(SU75);
class CLASS(SU75): GCLASS(SU75) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"RUBlue",1};
    editorPreview = "\A3\EditorPreviews_F_Jets\Data\CfgVehicles\O_Plane_Fighter_02_F.jpg";
    crew = QCLASS(FighterPilot);
};

class GCLASS(SU75_Stealth);
class CLASS(SU75_Stealth): GCLASS(SU75_Stealth) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"RUBlue",1};
    editorPreview = "\A3\EditorPreviews_F_Jets\Data\Cfgvehicles\O_Plane_Fighter_02_F.jpg";
    crew = QCLASS(FighterPilot);
};

class GCLASS(Yak130);
class CLASS(Yak130): GCLASS(Yak130) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"RUBlue",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Plane_CAS_02_dynamicLoadout_F.jpg";
    crew = QCLASS(FighterPilot);
};

class GCLASS(Shahpar);
class CLASS(Shahpar): GCLASS(Shahpar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Rus",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_02_dynamicLoadout_F.jpg";
    crew = "C_UAV_AI_F";
};

class GCLASS(C130);
class CLASS(C130): GCLASS(C130) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"GenBlue",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};
