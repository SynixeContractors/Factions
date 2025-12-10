#define JOSON_TYPHOON SCOPE_DLC; \
    faction = QPCLASS(t3_opfor); \
    side = 0; \
    textureList[] = {"Green",1}; \


class GCLASS(TyphoonBench);
class CLASS(TyphoonBench): GCLASS(TyphoonBench) {
    JOSON_TYPHOON
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_transport_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(TyphoonCovered);
class CLASS(TyphoonCovered): GCLASS(TyphoonCovered) {
    JOSON_TYPHOON
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_covered_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(TyphoonFlatbed);
class CLASS(TyphoonFlatbed): GCLASS(TyphoonFlatbed) {
    JOSON_TYPHOON
    //FIXME: needs green camo editor picture
    crew = QCLASS(Rifleman);
};

class GCLASS(TyphoonMedical);
class CLASS(TyphoonMedical): GCLASS(TyphoonMedical) {
    JOSON_TYPHOON
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_medical_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(TyphoonRepair);
class CLASS(TyphoonRepair): GCLASS(TyphoonRepair) {
    JOSON_TYPHOON
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_medical_F.jpg";
    crew = QCLASS(Engineer);
};

class GCLASS(TyphoonAmmo);
class CLASS(TyphoonAmmo): GCLASS(TyphoonAmmo) {
    JOSON_TYPHOON
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_ammo_F.jpg";
    crew = QCLASS(Rifleman);
};

class GCLASS(TyphoonFuel);
class CLASS(TyphoonFuel): GCLASS(TyphoonFuel) {
    JOSON_TYPHOON
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_03_fuel_F.jpg";
    crew = QCLASS(Rifleman);
};
