// Pandur

class GCLASS(Pandur);
class CLASS(Pandur): GCLASS(Pandur) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

// Badger

class GCLASS(Badger_Unarmed);
class CLASS(Badger_Unarmed): GCLASS(Badger_Unarmed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_medical_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Badger_Medical);
class CLASS(Badger_Medical): GCLASS(Badger_Medical) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_medical_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

// Warrior

class GCLASS(Warrior);
class CLASS(Warrior): GCLASS(Warrior) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Olive_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_APC_tracked_03_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

// BMP

class GCLASS(BM2_IFV1);
class CLASS(BM2_IFV1): GCLASS(BM2_IFV1) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_APC_Tracked_02_30mm_lxWS.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(BM2_IFV2);
class CLASS(BM2_IFV2): GCLASS(BM2_IFV2) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Tracked_02_cannon_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(BM2_AA);
class CLASS(BM2_AA): GCLASS(BM2_AA) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Tracked_02_AA_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

// BTR

class GCLASS(BTR);
class CLASS(BTR): GCLASS(BTR) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_APC_Wheeled_04_export_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(BTR_IFV);
class CLASS(BTR_IFV): GCLASS(BTR_IFV) {
    SCOPE_DLC;
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

