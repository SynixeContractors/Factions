class GCLASS(Warrior);
class CLASS(Warrior): GCLASS(Warrior) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive_01",1};
    hiddenSelectionTextures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa","\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_BAF_Green_CO.paa","\A3\Armor_F\Data\cage_olive_CO.paa"};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
