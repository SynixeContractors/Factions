class GCLASS(T100);
class CLASS(T100): GCLASS(T100) {
  SCOPE_DLC;
  faction = QPCLASS(t3_opfor);
  side = 0;
  //FIXME: make green
  textureList[] = {"Hex",1};
  hiddenSelectionstextures[] = {"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"};
  crew = QCLASS(Crewman);
  typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman), QCLASS(Crewman)};
};
