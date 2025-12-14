class GCLASS(Leopard2);
class CLASS(Leopard2): GCLASS(Leopard2) {
    displayName = "Leopard 2LV";
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    textureList[] = {"EAF_01", 1, "EAF_01_desert", 1, "EAF_Arid", 1, "EAF_Arid_jungle", 1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_CO.paa","\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_CO.paa","\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_CO.paa","A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
