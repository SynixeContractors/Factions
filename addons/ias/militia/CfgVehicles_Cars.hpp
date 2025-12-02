class GCLASS(RamHMG);
class CLASS(RamHMG): GCLASS(RamHMG) {
    SCOPE_DLC;
    faction = QPCLASS(t4_opfor);
    side = 0;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1
        };
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_Pickup_hmg_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(RamRocket);
class CLASS(RamRocket): GCLASS(RamRocket) {
    SCOPE_DLC;
    faction = QPCLASS(t4_opfor);
    side = 0;
    textureList[] = {
        "Guerilla_01",1,
        "Guerilla_02",1,
        "Guerilla_03",1,
        "Guerilla_04",1,
        "Guerilla_05",1,
        "Guerilla_06",1,
        "Guerilla_07",1,
        "Guerilla_08",1,
        "Guerilla_09",1,
        "Guerilla_10",1
        };
    hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
    editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\B_G_Pickup_Rocket_rf.jpg";
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
