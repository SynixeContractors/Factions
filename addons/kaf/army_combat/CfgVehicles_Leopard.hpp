class GCLASS(Leopard2);
class CLASS(Leopard2): GCLASS(Leopard2) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive_01",1};
    hiddenSelectionsTextures[] = {"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa", "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa", "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa", "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
