class GCLASS(Ram);
class CLASS(Ram): GCLASS(Ram) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamHMG);
class CLASS(RamHMG): GCLASS(RamHMG) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_HMG_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(RamComms);
class CLASS(RamComms): GCLASS(RamComms) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_Comms_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamMRL);
class CLASS(RamMRL): GCLASS(RamMRL) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    // editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_MRL_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(RamFuel);
class CLASS(RamFuel): GCLASS(RamFuel) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    // editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_Fuel_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamMinigun);
class CLASS(RamMinigun): GCLASS(RamMinigun) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    // editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_Minigun_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(RamAT);
class CLASS(RamAT): GCLASS(RamAT) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    // editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_AT_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};

class GCLASS(RamAA);
class CLASS(RamAA): GCLASS(RamAA) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF",1};
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
    // editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_E_Pickup_AA_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman), QCLASS(Rifleman)};
};
