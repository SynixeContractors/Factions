#define T100_ARDISTAN(CAMONET)\
            textures[] = {\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_body_ardi_CO.paa",\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_turret_ardi_CO.paa",\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_ardi_CO.paa",\
              CAMONET\
            };
#define T100_GREEN(CAMONET) \
            textures[] = {\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUkhk_CO.paa",\
              "\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa",\
              CAMONET\
            };
#define T100_GREENHEX(CAMONET) \
            textures[] = {\
              "a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",\
              "a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa",\
              "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",\
              CAMONET\
            };
#define T100_HEX(CAMONET) \
            textures[] = {\
              "a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",\
              "a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",\
              "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",\
              CAMONET\
            };
#define T100_SEP(CAMONET) \
            textures[] = {\
              "\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_body_opf_CO.paa",\
              "\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_turret_opf_CO.paa",\
              "\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_opf_CO.paa",\
              CAMONET\
            };
#define T100_SFIA(CAMONET) \
            textures[] = {\
              "lxws\vehicles_f_lxws\data\MBT_02\MBT_02_sand_body_CO.paa",\
              "lxws\vehicles_f_lxws\data\MBT_02\mbt_02_sand_turret_co.paa",\
              "lxws\vehicles_f_lxws\data\MBT_02\mbt_02_sand_co.paa",\
              CAMONET\
            };
#define T100_TAKISTAN(CAMONET) \
            textures[] = {\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_body_tk_CO.paa",\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_turret_tk_CO.paa",\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\Atlas_MBT_02_tk_CO.paa",\
              CAMONET\
            };
#define T100_WOODLANDHEX(CAMONET) \
            textures[] = {\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Body_WHEX_CO.paa",\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Turret_WHEX_CO.paa",\
              "\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_WHEX_CO.paa",\
              CAMONET\
            };
#define T100_GREY(CAMONET) \
            textures[] = {\
              "a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa",\
              "a3\Armor_F_Decade\MBT_02\Data\MBT_02_turret_expo_CO.paa",\
              "a3\Armor_F_Decade\MBT_02\Data\MBT_02_expo_CO.paa",\
              CAMONET\
            };
#define T100_MAZE(CAMONET) \
            textures[] = {\
              "\s\synixe_factions\addons\textures\data\t100\t100_body_JSN_CO.paa",\
              "\s\synixe_factions\addons\textures\data\t100\t100_turret_JSN_CO.paa",\
              "\s\synixe_factions\addons\textures\data\t100\t100_addons_JSN_CO.paa", \
              CAMONET\
            };
#define T100_CDF(CAMONET) \
            textures[] = {\
              "\s\synixe_factions\addons\textures\data\t100\t100_body_CDF_CO.paa",\
              "\s\synixe_factions\addons\textures\data\t100\t100_turret_CDF_CO.paa",\
              "\s\synixe_factions\addons\textures\data\t100\t100_addons_CDF_CO.paa",\
              CAMONET\
            };
class O_MBT_02_cannon_F;
class GCLASS(T100): O_MBT_02_cannon_F {
    displayName = "T-100";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        class Ardistan {
            displayName = "Ardistan (Desert Net)";
            T100_ARDISTAN(NET_DESERT)
            factions[] = {};
        };
        class Ardistan_green {
            displayName = "Ardistan (Green Net)";
            T100_ARDISTAN(NET_GREEN)
            factions[] = {};
        };
        class Ardistan_jungle {
            displayName = "Ardistan (Jungle Net)";
            T100_ARDISTAN(NET_JUNGLE)
            factions[] = {};
        };
        class Ardistan_winter {
            displayName = "Ardistan (Winter Net)";
            T100_ARDISTAN(NET_WINTER)
            factions[] = {};
        };
        class Ardistan_bicolor {
            displayName = "Ardistan (Bicolor Woodland Net)";
            T100_ARDISTAN(NET_BICOLOR)
            factions[] = {};
        };
        class Ardistan_woodland {
            displayName = "Ardistan (Woodland Net)";
            T100_ARDISTAN(NET_WOODLAND)
            factions[] = {};
        };
        class Grey {
            displayName = "Grey (Desert Net)";
            T100_GREY(NET_DESERT)
            factions[] = {};
        };
        class Grey_green {
            displayName = "Grey (Green Net)";
            T100_GREY(NET_GREEN)
            factions[] = {};
        };
        class Grey_jungle {
            displayName = "Grey (Jungle Net)";
            T100_GREY(NET_JUNGLE)
            factions[] = {};
        };
        class Grey_winter {
            displayName = "Grey (Winter Net)";
            T100_GREY(NET_WINTER)
            factions[] = {};
        };
        class Grey_bicolor {
            displayName = "Grey (Bicolor Woodland Net)";
            T100_GREY(NET_BICOLOR)
            factions[] = {};
        };
        class Grey_woodland {
            displayName = "Grey (Woodland Net)";
            T100_GREY(NET_WOODLAND)
            factions[] = {};
        };
        class Green {
            displayName = "Green (Desert Net)";
            T100_GREEN(NET_DESERT)
            factions[] = {};
        };
        class Green_green {
            displayName = "Green (Green Net)";
            T100_GREEN(NET_GREEN)
            factions[] = {};
        };
        class Green_jungle {
            displayName = "Green (Jungle Net)";
            T100_GREEN(NET_JUNGLE)
            factions[] = {};
        };
        class Green_winter {
            displayName = "Green (Winter Net)";
            T100_GREEN(NET_WINTER)
            factions[] = {};
        };
        class Green_bicolor {
            displayName = "Green (Bicolor Woodland Net)";
            T100_GREEN(NET_BICOLOR)
            factions[] = {};
        };
        class Green_woodland {
            displayName = "Green (Woodland Net)";
            T100_GREEN(NET_WOODLAND)
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green (Hex Green Net)";
            T100_GREENHEX(NET_GREENHEX)
            factions[] = {};
        };
        class GreenHex_desert {
            displayName = "Hex Green (Hex Ochre Net)";
            T100_GREENHEX(NET_HEX)
            factions[] = {};
        };
        class GreenHex_winter {
            displayName = "Hex Green (Winter Net)";
            T100_GREENHEX(NET_WINTER)
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre (Hex Green Net)";
            T100_HEX(NET_GREENHEX)
            factions[] = {};
        };
        class Hex_desert {
            displayName = "Hex Ochre (Hex Ochre Net)";
            T100_HEX(NET_HEX)
            factions[] = {};
        };
        class Hex_winter {
            displayName = "Hex Ochre (Winter Net)";
            T100_HEX(NET_WINTER)
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatists (Desert Net)";
            T100_SEP(NET_DESERT)
            factions[] = {};
        };
        class Sep_01_green {
            displayName = "Separatists (Green Net)";
            T100_SEP(NET_GREEN)
            factions[] = {};
        };
        class Sep_01_jungle {
            displayName = "Separatists (Jungle Net)";
            T100_SEP(NET_JUNGLE)
            factions[] = {};
        };
        class Sep_01_winter {
            displayName = "Separatists (Winter Net)";
            T100_SEP(NET_WINTER)
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
        class SFIA {
            displayName = "Mudwalker (Desert Net)";
            T100_SFIA(NET_DESERT)
            factions[] = {};
        };
        class SFIA_green {
            displayName = "Mudwalker (Green Net)";
            T100_SFIA(NET_GREEN)
            factions[] = {};
        };
        class SFIA_jungle {
            displayName = "Mudwalker (Jungle Net)";
            T100_SFIA(NET_JUNGLE)
            factions[] = {};
        };
        class SFIA_winter {
            displayName = "Mudwalker (Winter Net)";
            T100_SFIA(NET_WINTER)
            factions[] = {};
        };
        class SFIA_bicolor {
            displayName = "Mudwalker (Bicolor Woodland Net)";
            T100_SFIA(NET_BICOLOR)
            factions[] = {};
        };
        class SFIA_woodland {
            displayName = "Mudwalker (Woodland Net)";
            T100_SFIA(NET_WOODLAND)
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed (Hex Green Net)";
            T100_TAKISTAN(NET_GREENHEX)
            factions[] = {};
        };
        class Takistan_desert {
            displayName = "Hex Mixed (Hex Ochre Net)";
            T100_TAKISTAN(NET_HEX)
            factions[] = {};
        };
        class Takistan_winter {
            displayName = "Hex Mixed (Winter Net)";
            T100_TAKISTAN(NET_WINTER)
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland (Hex Green Net)";
            T100_WOODLANDHEX(NET_GREENHEX)
            factions[] = {};
        };
        class WoodlandHex_desert {
            displayName = "Hex Woodland (Hex Ochre Net)";
            T100_WOODLANDHEX(NET_HEX)
            factions[] = {};
        };
        class WoodlandHex_winter {
            displayName = "Hex Woodland (Winter Net)";
            T100_WOODLANDHEX(NET_WINTER)
            factions[] = {};
        };
        class Maze {
            displayName = "Maze (Desert Net)";
            T100_MAZE(NET_DESERT)
            factions[] = {};
        };
        class Maze_green {
            displayName = "Maze (Green Net)";
            T100_MAZE(NET_GREEN)
            factions[] = {};
        };
        class Maze_jungle {
            displayName = "Maze (Jungle Net)";
            T100_MAZE(NET_JUNGLE)
            factions[] = {};
        };
        class Maze_winter {
            displayName = "Maze (Winter Net)";
            T100_MAZE(NET_WINTER)
            factions[] = {};
        };
        class Maze_bicolor {
            displayName = "Maze (Bicolor Woodland Net)";
            T100_MAZE(NET_BICOLOR)
            factions[] = {};
        };
        class Maze_woodland {
            displayName = "Maze (Woodland Net)";
            T100_MAZE(NET_WOODLAND)
            factions[] = {};
        };
        class Cdf {
            displayName = "CDF (Desert Net)";
            T100_CDF(NET_DESERT)
            factions[] = {};
        };
        class Cdf_green {
            displayName = "CDF (Green Net)";
            T100_CDF(NET_GREEN)
            factions[] = {};
        };
        class Cdf_jungle {
            displayName = "CDF (Jungle Net)";
            T100_CDF(NET_JUNGLE)
            factions[] = {};
        };
        class Cdf_winter {
            displayName = "CDF (Winter Net)";
            T100_CDF(NET_WINTER)
            factions[] = {};
        };
        class Cdf_bicolor {
            displayName = "CDF (Bicolor Woodland Net)";
            T100_CDF(NET_BICOLOR)
            factions[] = {};
        };
        class Cdf_woodland {
            displayName = "CDF (Woodland Net)";
            T100_CDF(NET_WOODLAND)
            factions[] = {};
        };
    };
};

class O_MBT_02_railgun_F;
class GCLASS(T100_Railgun): O_MBT_02_railgun_F {
    displayName = "T-100X (Railgun)";
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
            T100_ARDISTAN(NET_DESERT)
            factions[] = {};
        };
        class Ardistan_green {
            displayName = "Ardistan (Green Net)";
            T100_ARDISTAN(NET_GREEN)
            factions[] = {};
        };
        class Ardistan_jungle {
            displayName = "Ardistan (Jungle Net)";
            T100_ARDISTAN(NET_JUNGLE)
            factions[] = {};
        };
        class Ardistan_winter {
            displayName = "Ardistan (Winter Net)";
            T100_ARDISTAN(NET_WINTER)
            factions[] = {};
        };
        class Ardistan_bicolor {
            displayName = "Ardistan (Bicolor Woodland Net)";
            T100_ARDISTAN(NET_BICOLOR)
            factions[] = {};
        };
        class Ardistan_woodland {
            displayName = "Ardistan (Woodland Net)";
            T100_ARDISTAN(NET_WOODLAND)
            factions[] = {};
        };
        #endif
        class Grey {
            displayName = "Grey (Desert Net)";
            T100_GREY(NET_DESERT)
            factions[] = {};
        };
        class Grey_green {
            displayName = "Grey (Green Net)";
            T100_GREY(NET_GREEN)
            factions[] = {};
        };
        class Grey_jungle {
            displayName = "Grey (Jungle Net)";
            T100_GREY(NET_JUNGLE)
            factions[] = {};
        };
        class Grey_winter {
            displayName = "Grey (Winter Net)";
            T100_GREY(NET_WINTER)
            factions[] = {};
        };
        class Grey_bicolor {
            displayName = "Grey (Bicolor Woodland Net)";
            T100_GREY(NET_BICOLOR)
            factions[] = {};
        };
        class Grey_woodland {
            displayName = "Grey (Woodland Net)";
            T100_GREY(NET_WOODLAND)
            factions[] = {};
        };
        class Green {
            displayName = "Green (Desert Net)";
            T100_GREEN(NET_DESERT)
            factions[] = {};
        };
        class Green_green {
            displayName = "Green (Green Net)";
            T100_GREEN(NET_GREEN)
            factions[] = {};
        };
        class Green_jungle {
            displayName = "Green (Jungle Net)";
            T100_GREEN(NET_JUNGLE)
            factions[] = {};
        };
        class Green_winter {
            displayName = "Green (Winter Net)";
            T100_GREEN(NET_WINTER)
            factions[] = {};
        };
        class Green_bicolor {
            displayName = "Green (Bicolor Woodland Net)";
            T100_GREEN(NET_BICOLOR)
            factions[] = {};
        };
        class Green_woodland {
            displayName = "Green (Woodland Net)";
            T100_GREEN(NET_WOODLAND)
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green (Hex Green Net)";
            T100_GREENHEX(NET_GREENHEX)
            factions[] = {};
        };
        class GreenHex_desert {
            displayName = "Hex Green (Hex Ochre Net)";
            T100_GREENHEX(NET_HEX)
            factions[] = {};
        };
        class GreenHex_winter {
            displayName = "Hex Green (Winter Net)";
            T100_GREENHEX(NET_WINTER)
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre (Hex Green Net)";
            T100_HEX(NET_GREENHEX)
            factions[] = {};
        };
        class Hex_desert {
            displayName = "Hex Ochre (Hex Ochre Net)";
            T100_HEX(NET_HEX)
            factions[] = {};
        };
        class Hex_winter {
            displayName = "Hex Ochre (Winter Net)";
            T100_HEX(NET_WINTER)
            factions[] = {};
        };
        #ifndef HIDEBROKEN
        class Sep_01 {
            displayName = "Separatists (Desert Net)";
            T100_SEP(NET_DESERT)
            factions[] = {};
        };
        class Sep_01_green {
            displayName = "Separatists (Green Net)";
            T100_SEP(NET_GREEN)
            factions[] = {};
        };
        class Sep_01_jungle {
            displayName = "Separatists (Jungle Net)";
            T100_SEP(NET_JUNGLE)
            factions[] = {};
        };
        class Sep_01_winter {
            displayName = "Separatists (Winter Net)";
            T100_SEP(NET_WINTER)
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
        #endif
        class SFIA {
            displayName = "Mudwalker (Desert Net)";
            T100_SFIA(NET_DESERT)
            factions[] = {};
        };
        class SFIA_green {
            displayName = "Mudwalker (Green Net)";
            T100_SFIA(NET_GREEN)
            factions[] = {};
        };
        class SFIA_jungle {
            displayName = "Mudwalker (Jungle Net)";
            T100_SFIA(NET_JUNGLE)
            factions[] = {};
        };
        class SFIA_winter {
            displayName = "Mudwalker (Winter Net)";
            T100_SFIA(NET_WINTER)
            factions[] = {};
        };
        class SFIA_bicolor {
            displayName = "Mudwalker (Bicolor Woodland Net)";
            T100_SFIA(NET_BICOLOR)
            factions[] = {};
        };
        class SFIA_woodland {
            displayName = "Mudwalker (Woodland Net)";
            T100_SFIA(NET_WOODLAND)
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed (Hex Green Net)";
            T100_TAKISTAN(NET_GREENHEX)
            factions[] = {};
        };
        class Takistan_desert {
            displayName = "Hex Mixed (Hex Ochre Net)";
            T100_TAKISTAN(NET_HEX)
            factions[] = {};
        };
        class Takistan_winter {
            displayName = "Hex Mixed (Winter Net)";
            T100_TAKISTAN(NET_WINTER)
            factions[] = {};
        };
        #ifndef HIDEBROKEN
        class WoodlandHex {
            displayName = "Hex Woodland (Hex Green Net)";
            T100_WOODLANDHEX(NET_GREENHEX)
            factions[] = {};
        };
        class WoodlandHex_desert {
            displayName = "Hex Woodland (Hex Ochre Net)";
            T100_WOODLANDHEX(NET_HEX)
            factions[] = {};
        };
        class WoodlandHex_winter {
            displayName = "Hex Woodland (Winter Net)";
            T100_WOODLANDHEX(NET_WINTER)
            factions[] = {};
        };
        #endif
        class Maze {
            displayName = "Maze (Desert Net)";
            T100_MAZE(NET_DESERT)
            factions[] = {};
        };
        class Maze_green {
            displayName = "Maze (Green Net)";
            T100_MAZE(NET_GREEN)
            factions[] = {};
        };
        class Maze_jungle {
            displayName = "Maze (Jungle Net)";
            T100_MAZE(NET_JUNGLE)
            factions[] = {};
        };
        class Maze_winter {
            displayName = "Maze (Winter Net)";
            T100_MAZE(NET_WINTER)
            factions[] = {};
        };
        class Maze_bicolor {
            displayName = "Maze (Bicolor Woodland Net)";
            T100_MAZE(NET_BICOLOR)
            factions[] = {};
        };
        class Maze_woodland {
            displayName = "Maze (Woodland Net)";
            T100_MAZE(NET_WOODLAND)
            factions[] = {};
        };
        class Cdf {
            displayName = "CDF (Desert Net)";
            T100_CDF(NET_DESERT)
            factions[] = {};
        };
        class Cdf_green {
            displayName = "CDF (Green Net)";
            T100_CDF(NET_GREEN)
            factions[] = {};
        };
        class Cdf_jungle {
            displayName = "CDF (Jungle Net)";
            T100_CDF(NET_JUNGLE)
            factions[] = {};
        };
        class Cdf_winter {
            displayName = "CDF (Winter Net)";
            T100_CDF(NET_WINTER)
            factions[] = {};
        };
        class Cdf_bicolor {
            displayName = "CDF (Bicolor Woodland Net)";
            T100_CDF(NET_BICOLOR)
            factions[] = {};
        };
        class Cdf_woodland {
            displayName = "CDF (Woodland Net)";
            T100_CDF(NET_WOODLAND)
            factions[] = {};
        };
    };
};
