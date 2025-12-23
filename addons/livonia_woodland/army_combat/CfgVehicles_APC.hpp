class GCLASS(Warrior);
class CLASS(Warrior): GCLASS(Warrior) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_APC_tracked_03_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Badger);
class CLASS(Badger): GCLASS(Badger) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Badger_Command);
class CLASS(Badger_Command): GCLASS(Badger_Command) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Badger_Mortar);
class CLASS(Badger_Mortar): GCLASS(Badger_Mortar) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Badger_ATGM);
class CLASS(Badger_ATGM): GCLASS(Badger_ATGM) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_atgm_v2.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Badger_Medical);
class CLASS(Badger_Medical): GCLASS(Badger_Medical) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01",1};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_medical_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
