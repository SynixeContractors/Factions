class GCLASS(Orca);
class CLASS(Orca): GCLASS(Orca) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Heli_Light_02_unarmed_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(OrcaArmed);
class CLASS(OrcaArmed): GCLASS(OrcaArmed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Heli_Light_02_dynamicLoadout_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(OrcaR);
class CLASS(OrcaR): GCLASS(OrcaR) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_Heli_Light_02_unarmed_lxWS.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(OrcaAR);
class CLASS(OrcaAR): GCLASS(OrcaAR) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_Heli_Light_02_dynamicLoadout_lxWS.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Mi35);
class CLASS(Mi35): GCLASS(Mi35) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Heli_Attack_03_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};

class GCLASS(Ka54);
class CLASS(Ka54): GCLASS(Ka54) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Heli_Attack_02_dynamicLoadout_F.jpg";
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot), QCLASS(HeliPilot), QCLASS(HeliPilot)};
};
