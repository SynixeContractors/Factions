class GCLASS(OtokarUnarmed);
class CLASS(OtokarUnarmed): GCLASS(OtokarUnarmed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa","A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa","A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa","A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_APC_tracked_03_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(OtokarHMG);
class CLASS(OtokarHMG): GCLASS(OtokarHMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_EAF_CO.paa","\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_EAF_CO.paa","\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_EAF_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(OtokarRCWS);
class CLASS(OtokarRCWS): GCLASS(OtokarRCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_opfor);
    side = 0;
    textureList[] = {"Green",1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_EAF_CO.paa","\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_EAF_CO.paa","\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_EAF_CO.paa","A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa","A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa","\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_lxws_EAF_CO.paa"};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_APC_Wheeled_01_cannon_v2_F.jpg";
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
