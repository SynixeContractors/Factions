#define T100_SPG_ARDISTAN(CAMONET) \
            textures[] = {\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_body_ardi_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa", \
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_ardi_CO.paa",\
              "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa",\
              CAMONET\
            };
#define T100_SPG_GREEN(CAMONET) \
            textures[] = {\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa", \
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa",\
              "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa", \
              CAMONET\
            };
#define T100_SPG_GREENHEX(CAMONET) \
            textures[] = {\
              "a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",\
              "a3\Armor_F_Exp\MBT_02\Data\MBT_02_scorcher_ghex_CO.paa", \
              "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",\
              "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",\
              CAMONET\
            };
#define T100_SPG_HEX(CAMONET) \
            textures[] = {\
              "a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",\
              "a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa",\
              "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",\
              "a3\data_f\vehicles\turret_opfor_co.paa",\
              CAMONET\
            };
#define T100_SPG_SEP(CAMONET) \
            textures[] = {\
              "\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_body_opf_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa",\
              "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa",\
              CAMONET\
            };
#define T100_SPG_SFIA(CAMONET) \
            textures[] = {\
              "lxws\vehicles_f_lxws\data\MBT_02\MBT_02_sand_body_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa",\
              "lxws\vehicles_f_lxws\data\MBT_02\mbt_02_sand_co.paa",\
              "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa",\
              CAMONET\
            };
#define T100_SPG_TAKISTAN(CAMONET) \
            textures[] = {\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_body_tk_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa", \
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_tk_CO.paa",\
              "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa",\
              CAMONET\
            };
#define T100_SPG_WOODLANDHEX(CAMONET) \
            textures[] = {\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Body_WHEX_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa", \
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_WHEX_CO.paa",\
              "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa",\
              CAMONET\
            };
class O_MBT_02_arty_F;
class GCLASS(T100_SPG): O_MBT_02_arty_F {
    displayName = "T-100SU Sohor-S (SPG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        #ifndef HIDEBROKEN
        class Ardistan {
            displayName = "Ardistan (Desert Net)";
            T100_SPG_ARDISTAN(NET_DESERT)
            factions[] = {};
        };
        class Ardistan_green {
            displayName = "Ardistan (Green Net)";
            T100_SPG_ARDISTAN(NET_GREEN)
            factions[] = {};
        };
        class Ardistan_jungle {
            displayName = "Ardistan (Jungle Net)";
            T100_SPG_ARDISTAN(NET_JUNGLE)
            factions[] = {};
        };
        class Ardistan_winter {
            displayName = "Ardistan (Winter Net)";
            T100_SPG_ARDISTAN(NET_WINTER)
            factions[] = {};
        };
        class Ardistan_bicolor {
            displayName = "Ardistan (Bicolor Woodland Net)";
            T100_SPG_ARDISTAN(NET_BICOLOR)
            factions[] = {};
        };
        class Ardistan_woodland {
            displayName = "Ardistan (Woodland Net)";
            T100_SPG_ARDISTAN(NET_WOODLAND)
            factions[] = {};
        };
        #endif
        class Green {
            displayName = "Green (Desert Net)";
            T100_SPG_GREEN(NET_DESERT)
            factions[] = {};
        };
        class Green_green {
            displayName = "Green (Green Net)";
            T100_SPG_GREEN(NET_GREEN)
            factions[] = {};
        };
        class Green_jungle {
            displayName = "Green (Jungle Net)";
            T100_SPG_GREEN(NET_JUNGLE)
            factions[] = {};
        };
        class Green_winter {
            displayName = "Green (Winter Net)";
            T100_SPG_GREEN(NET_WINTER)
            factions[] = {};
        };
        class Green_bicolor {
            displayName = "Green (Bicolor Woodland Net)";
            T100_SPG_GREEN(NET_BICOLOR)
            factions[] = {};
        };
        class Green_woodland {
            displayName = "Green (Woodland Net)";
            T100_SPG_GREEN(NET_WOODLAND)
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green (Hex Green Net)";
            T100_SPG_GREENHEX(NET_GREENHEX)
            factions[] = {};
        };
        class GreenHex_desert {
            displayName = "Hex Green (Hex Ochre Net)";
            T100_SPG_GREENHEX(NET_HEX)
            factions[] = {};
        };
        class GreenHex_winter {
            displayName = "Hex Green (Winter Net)";
            T100_SPG_GREENHEX(NET_WINTER)
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre (Hex Green Net)";
            T100_SPG_HEX(NET_GREENHEX)
            factions[] = {};
        };
        class Hex_desert {
            displayName = "Hex Ochre (Hex Ochre Net)";
            T100_SPG_HEX(NET_HEX)
            factions[] = {};
        };
        class Hex_winter {
            displayName = "Hex Ochre (Winter Net)";
            T100_SPG_HEX(NET_WINTER)
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatists (Desert Net)";
            T100_SPG_SEP(NET_DESERT)
            factions[] = {};
        };
        class Sep_01_green {
            displayName = "Separatists (Green Net)";
            T100_SPG_SEP(NET_GREEN)
            factions[] = {};
        };
        class Sep_01_jungle {
            displayName = "Separatists (Jungle Net)";
            T100_SPG_SEP(NET_JUNGLE)
            factions[] = {};
        };
        class Sep_01_winter {
            displayName = "Separatists (Winter Net)";
            T100_SPG_SEP(NET_WINTER)
            factions[] = {};
        };
        class Sep_01_bicolor {
            displayName = "Separatists (Bicolor Woodland Net)";
            T100_SEP(NET_BICOLOR)
            factions[] = {};
        };
        class Sep_01_woodland {
            displayName = "Separatists (Woodland Net)";
            T100_SEP(NET_WOODLAND)
            factions[] = {};
        };
        #ifndef HIDEBROKEN
        class SFIA {
            displayName = "SFIA (Desert Net)";
            T100_SPG_SFIA(NET_DESERT)
            factions[] = {};
        };
        class SFIA_green {
            displayName = "SFIA (Green Net)";
            T100_SPG_SFIA(NET_GREEN)
            factions[] = {};
        };
        class SFIA_jungle {
            displayName = "SFIA (Jungle Net)";
            T100_SPG_SFIA(NET_JUNGLE)
            factions[] = {};
        };
        class SFIA_winter {
            displayName = "SFIA (Winter Net)";
            T100_SPG_SFIA(NET_WINTER)
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed (Hex Green Net)";
            T100_SPG_TAKISTAN(NET_GREENHEX)
            factions[] = {};
        };
        class Takistan_desert {
            displayName = "Hex Mixed (Hex Ochre Net)";
            T100_SPG_TAKISTAN(NET_HEX)
            factions[] = {};
        };
        class Takistan_winter {
            displayName = "Hex Mixed (Winter Net)";
            T100_SPG_TAKISTAN(NET_WINTER)
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland (Hex Green Net)";
            T100_SPG_WOODLANDHEX(NET_GREENHEX)
            factions[] = {};
        };
        class WoodlandHex_desert {
            displayName = "Hex Woodland (Hex Ochre Net)";
            T100_SPG_WOODLANDHEX(NET_HEX)
            factions[] = {};
        };
        class WoodlandHex_winter {
            displayName = "Hex Woodland (Winter Net)";
            T100_SPG_WOODLANDHEX(NET_WINTER)
            factions[] = {};
        };
        #endif
    };
};
