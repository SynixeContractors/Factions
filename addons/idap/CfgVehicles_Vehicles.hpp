class GCLASS(JeepWrangler);
class CLASS(JeepWrangler): GCLASS(JeepWrangler) {
    SCOPE_DLC;
    faction = QCLASS(civilian);
    displayName = "Jeep Wrangler";
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
    displayName = "Van (Ambulance)";
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
    displayName = "Van (Cargo)";
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
    displayName = "Van (Cargo)";
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
    displayName = "Offroad";
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
    displayName = "Offroad (Services)";
    textureList[] = {"IDAP",1};
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_Offroad_01_F.jpg";
    crew = QCLASS(AidWorker);
    typicalCargo[] = {QCLASS(AidWorker)};
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa","\A3\Soft_F_Orange\Offroad_01\Data\Offroad_01_ext_IDAP_CO.paa"};
};
