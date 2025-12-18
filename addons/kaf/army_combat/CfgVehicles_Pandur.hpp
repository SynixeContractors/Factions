class GCLASS(Pandur);
class CLASS(Pandur): GCLASS(Pandur) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_APC_Wheeled_03_cannon_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_olive_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_olive_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_olive_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa","\A3\Armor_F\Data\camonet_NATO_Green_CO.paa","\A3\Armor_F\Data\cage_olive_CO.paa"};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
