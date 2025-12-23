class GCLASS(Ram);
class CLASS(Ram): GCLASS(Ram) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"NATO",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Pickup_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Ram_Comms);
class CLASS(Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"NATO",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Pickup_Comms_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(Ram_AT);
class CLASS(Ram_AT): GCLASS(Ram_AT) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"NATO",1};
    editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Pickup_at_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(Ram_AA);
class CLASS(Ram_AA): GCLASS(Ram_AA) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"NATO",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_Pickup_aat_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};
