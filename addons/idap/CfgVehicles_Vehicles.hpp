class GCLASS(Jeep);
class CLASS(Jeep): GCLASS(Jeep) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_02_unarmed_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(Van_Ambulance);
class CLASS(Van_Ambulance): GCLASS(Van_Ambulance) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IdapAmbulance",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Van_02_medevac_F.jpg";
    crew = QCLASS(Paramedic);
    typicalCargo[] = {QCLASS(Paramedic)};
};
class GCLASS(Van_Transport);
class CLASS(Van_Transport): GCLASS(Van_Transport) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Van_02_transport_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
class GCLASS(Van_Cargo);
class CLASS(Van_Cargo): GCLASS(Van_Cargo) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Van_02_vehicle_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(Offroad);
class CLASS(Offroad): GCLASS(Offroad) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_01_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
class GCLASS(Offroad_Services);
class CLASS(Offroad_Services): GCLASS(Offroad_Services) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_01_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
class GCLASS(Offroad_Comms);
class CLASS(Offroad_Comms): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_01_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(Ram);
class CLASS(Ram): GCLASS(Ram) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_rf.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
class GCLASS(Ram_Covered);
class CLASS(Ram_Covered): GCLASS(Ram_Covered) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_rf.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(Ram_Fuel);
class CLASS(Ram_Fuel): GCLASS(Ram_Fuel) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_fuel_rf.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(Mohawk);
class CLASS(Mohawk): GCLASS(Mohawk) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Heli_Transport_02_F.jpg";
    crew = QCLASS(Pilot);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(Puma);
class CLASS(Puma): GCLASS(Puma) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Heli_EC_01A_civ_RF.jpg";
    crew = QCLASS(Pilot);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(LUT_Transport);
class CLASS(LUT_Transport): GCLASS(LUT_Transport) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    side = 3;
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Truck_02_transport_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(LUT_TransportCovered);
class CLASS(LUT_TransportCovered): GCLASS(LUT_TransportCovered) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    side = 3;
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Truck_02_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(LUT_Repair);
class CLASS(LUT_Repair): GCLASS(LUT_Repair) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    side = 3;
    textureList[] = {"IDAP",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\C_IDAP_Truck_02_box_lxWS.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(LUT_Flatbed);
class CLASS(LUT_Flatbed): GCLASS(LUT_Flatbed) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    side = 3;
    textureList[] = {"IDAP",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\C_IDAP_Truck_02_flatbed_lxWS.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(LUT_Cargo);
class CLASS(LUT_Cargo): GCLASS(LUT_Cargo) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    side = 3;
    textureList[] = {"IDAP",1};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\C_IDAP_Truck_02_cargo_lxWS.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(LUT_Fuel);
class CLASS(LUT_Fuel): GCLASS(LUT_Fuel) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    side = 3;
    textureList[] = {"IDAP",1};
    editorPreview = "";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
