class GCLASS(Offroad);
class CLASS(Offroad): GCLASS(Offroad) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Offroad_01_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(OffroadComms);
class CLASS(OffroadComms): GCLASS(OffroadComms) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\C_Offroad_01_comms_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamAA);
class CLASS(RamAA): GCLASS(RamAA) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"NATO_P",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_Pickup_aat_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamRCWS);
class CLASS(RamRCWS): GCLASS(RamRCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"NATO_P",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\vehicles_rf\pickup_01\Data\RCWS\rcws_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\B_ION_Pickup_rcws_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamComms);
class CLASS(RamComms): GCLASS(RamComms) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"NATO_P",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_T_Pickup_Comms_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTTransport);
class CLASS(LUTTransport): GCLASS(LUTTransport) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_transport_ard_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTTransportCovered);
class CLASS(LUTTransportCovered): GCLASS(LUTTransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_ard_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTRepair);
class CLASS(LUTRepair): GCLASS(LUTRepair) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_box_ard_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTMedical);
class CLASS(LUTMedical): GCLASS(LUTMedical) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_medical_ard_F.jpg";
    crew = QCLASS(Medic);
    typicalCargo[] = {QCLASS(Medic)};
};

class GCLASS(LUTFuel);
class CLASS(LUTFuel): GCLASS(LUTFuel) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_fuel_ard_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTFlatbed);
class CLASS(LUTFlatbed): GCLASS(LUTFlatbed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Rus",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa","",""};
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_Truck_02_flatbed_lxWS.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTAmmo);
class CLASS(LUTAmmo): GCLASS(LUTAmmo) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_Ammo_ard_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(LUTMRL);
class CLASS(LUTMRL): GCLASS(LUTMRL) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa","",""};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_MRL_F.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};
