class O_A_MBT_02_cannon_F;
class GCLASS(T100): O_A_MBT_02_cannon_F {
    displayName = "T-100 (Black Eagle)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Ardistan {
	    displayName = "Ardistan";
	    textures[] = {"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_body_ardi_CO.paa","\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_turret_ardi_CO.paa","\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_ardi_CO.paa","\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"};
            factions[] = {};
        };
        class Green {
	    displayName = "Green";
	    textures[] = {"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"};
            factions[] = {};
        };
      delete GreenHex;
      delete Hex;
      delete Sep_01;
      delete SFIA;
      delete Takistan;
      delete WoodlandHex;
    };
};
