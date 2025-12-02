class GCLASS(JeepWrangler);
class CLASS(JeepWrangler): GCLASS(JeepWrangler) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_02_unarmed_F.jpg";
    hiddenSelectionsTextures[] = {"\a3\Soft_F_Orange\Offroad_02\Data\offroad_02_ext_IDAP_co.paa","\a3\Soft_F_Orange\Offroad_02\Data\offroad_02_ext_IDAP_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};

class GCLASS(VanAmbulance);
class CLASS(VanAmbulance): GCLASS(VanAmbulance) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IdapAmbulance",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Van_02_medevac_F.jpg";
    hiddenSelectionsTextures[] = {"a3\soft_f_orange\van_02\data\van_body_idapambulance_co.paa","a3\soft_f_orange\van_02\data\van_wheel_red_co.paa","a3\soft_f_orange\van_02\data\van_glass_medevac_dirty_ca.paa","a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa","a3\soft_f_orange\van_02\data\van_body_idapambulance_co.paa"};
    crew = QCLASS(Paramedic);
    typicalCargo[] = {QCLASS(Paramedic)};
};
class GCLASS(VanTransport);
class CLASS(VanTransport): GCLASS(VanTransport) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Van_02_transport_F.jpg";
    hiddenSelectionsTextures[] = {"a3\soft_f_orange\van_02\data\van_body_idaptrans_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_dirty_co.paa","a3\soft_f_orange\van_02\data\van_glass_dirty_ca.paa","a3\soft_f_orange\van_02\data\van_body_idaptrans_co.paa"};
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
class GCLASS(VanCargo);
class CLASS(VanCargo): GCLASS(VanCargo) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Van_02_vehicle_F.jpg";
    hiddenSelectionsTextures[] = {"a3\soft_f_orange\van_02\data\van_body_idapcargo_co.paa","a3\soft_f_orange\van_02\data\van_wheel_dirty_co.paa","a3\soft_f_orange\van_02\data\van_glass_dirty_ca.paa","a3\soft_f_orange\van_02\data\van_body_idapcargo_co.paa"};
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
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa","\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa"};
};
class GCLASS(OffroadServices);
class CLASS(OffroadServices): GCLASS(OffroadServices) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_01_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa","\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa"};
};
class GCLASS(OffroadComms);
class CLASS(OffroadComms): GCLASS(OffroadComms) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_01_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa","\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
};

class GCLASS(Ram);
class CLASS(Ram): GCLASS(Ram) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_rf.jpg";
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_idap_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_water_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_idap_co.paa"};
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
class GCLASS(RamCovered);
class CLASS(RamCovered): GCLASS(RamCovered) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_idap_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_port_authority_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_rf.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
// class GCLASS(RamWater);
// class CLASS(RamWater): GCLASS(RamWater) {
//     SCOPE_DLC;
//     faction = QCLASS(civilian);
//     displayName = "Ram 1500 (Water)";
//     textureList[] = {"IDAP",1};
//     hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_idap_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_water_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_idap_co.paa"};
//     editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_water_rf.jpg";
//     crew = QCLASS(AidWorker);
//     typicalCargo[] = {QCLASS(AidWorker)};
// };
class GCLASS(RamFuel);
class CLASS(RamFuel): GCLASS(RamFuel) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    textureList[] = {"IDAP",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_idap_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fuel_black_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_idap_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\C_IDAP_Pickup_fuel_rf.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
};
