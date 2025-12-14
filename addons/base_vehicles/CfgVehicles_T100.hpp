class O_A_MBT_02_cannon_F;
class GCLASS(T100): O_A_MBT_02_cannon_F {
    displayName = "T-100 (Black Eagle)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
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
        class GreenHex {
            displayName = "Hex Green";
            textures[] = {"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa","a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa","a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"};
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa","a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa","a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatist";
            textures[] = {"\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_body_opf_CO.paa","\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_turret_opf_CO.paa","\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_opf_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"};
            factions[] = {};
        };
        class SFIA {
            displayName = "Mudwalker";
            textures[] = {"lxws\vehicles_f_lxws\data\MBT_02\MBT_02_sand_body_CO.paa","lxws\vehicles_f_lxws\data\MBT_02\mbt_02_sand_turret_co.paa","lxws\vehicles_f_lxws\data\MBT_02\mbt_02_sand_co.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_body_tk_CO.paa","\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_turret_tk_CO.paa","\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_tk_CO.paa","\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa"};
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland";
            textures[] = {"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Body_WHEX_CO.paa","\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Turret_WHEX_CO.paa","\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_WHEX_CO.paa","\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"};
            factions[] = {};
        };

    };
};
