#define JOSON_CAR_GREEN SCOPE_DLC; \
    faction = QPCLASS(t3_opfor); \
    side = 0; \
    textureList[] = {"Green",1};

class GCLASS(Typhoon_Bench);
class CLASS(Typhoon_Bench): GCLASS(Typhoon_Bench) {
    JOSON_CAR_GREEN
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_transport_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(Typhoon_Covered);
class CLASS(Typhoon_Covered): GCLASS(Typhoon_Covered) {
    JOSON_CAR_GREEN
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_covered_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(Typhoon_Cargo);
class CLASS(Typhoon_Cargo): GCLASS(Typhoon_Cargo) {
    JOSON_CAR_GREEN
    //FIXME: needs green camo editor picture
    crew = QCLASS(Rifleman);
};

class GCLASS(Typhoon_Medical);
class CLASS(Typhoon_Medical): GCLASS(Typhoon_Medical) {
    JOSON_CAR_GREEN
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_medical_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(Typhoon_Repair);
class CLASS(Typhoon_Repair): GCLASS(Typhoon_Repair) {
    JOSON_CAR_GREEN
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_medical_F.jpg";
    crew = QCLASS(Engineer);
};

class GCLASS(Typhoon_Ammo);
class CLASS(Typhoon_Ammo): GCLASS(Typhoon_Ammo) {
    JOSON_CAR_GREEN
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_ammo_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(Typhoon_Fuel);
class CLASS(Typhoon_Fuel): GCLASS(Typhoon_Fuel) {
    JOSON_CAR_GREEN
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_fuel_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(LSV);
class CLASS(LSV): GCLASS(LSV) {
    JOSON_CAR_GREEN
    //FIXME: needs green camo editor picture
      crew = QCLASS(Rifleman);
};
class GCLASS(LSV_M134);
class CLASS(LSV_M134): GCLASS(LSV_M134) {
    JOSON_CAR_GREEN
    //FIXME: needs green camo editor picture
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
class GCLASS(LSV_Metis);
class CLASS(LSV_Metis): GCLASS(LSV_Metis) {
    JOSON_CAR_GREEN
    //FIXME: needs green camo editor picture
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    JOSON_CAR_GREEN
    typicalCargo[] = {QCLASS(Rifleman)};
};
