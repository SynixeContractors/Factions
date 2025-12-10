class GCLASS(LUTTransport);
class CLASS(LUTTransport): GCLASS(LUTTransport) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_transport_F.jpg";    
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTTransportCovered);
class CLASS(LUTTransportCovered): GCLASS(LUTTransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTRepair);
class CLASS(LUTRepair): GCLASS(LUTRepair) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_box_F.jpg";    
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTMedical);
class CLASS(LUTMedical): GCLASS(LUTMedical) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_medical_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTFuel);
class CLASS(LUTFuel): GCLASS(LUTFuel) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_fuel_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTAmmo);
class CLASS(LUTAmmo): GCLASS(LUTAmmo) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_Ammo_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTMRL);
class CLASS(LUTMRL): GCLASS(LUTMRL) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_MRL_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};