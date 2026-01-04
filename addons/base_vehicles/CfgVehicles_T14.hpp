#define T14_HEX(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",\
          CAMONET\
        };
#define T14_GREENHEX(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",\
          CAMONET\
        };
#define T14_JUNGLE(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",\
          CAMONET\
        };
#define T14_GREY(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",\
          CAMONET\
        };
#define T14_GREEN(CAMONET)\
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_1_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_2_CO.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER(O_MBT_04_cannon_F,MBT_04_cannon_base_F);
class GCLASS(T14): O_MBT_04_cannon_F {
    displayName = "T-14";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "eventhandler_camo.hpp"
    class TextureSources {
      class Hex {
        displayName = "Hex Ochre (Hex Green Net)";
        T14_HEX(NET_GREENHEX)
        factions[] = {};
      };
      class Hex_desert {
        displayName = "Hex Ochre (Hex Ochre Net)";
        T14_HEX(NET_HEX)
        factions[] = {};
      };
      class Hex_winter {
        displayName = "Hex Ochre (Winter Net)";
        T14_HEX(NET_WINTER)
        factions[] = {};
      };
      class GreenHex {
        displayName = "Hex Green (Hex Green Net)";
        T14_GREENHEX(NET_GREENHEX)
        factions[] = {};
      };
      class GreenHex_desert {
        displayName = "Hex Green (Hex Ochre Net)";
        T14_GREENHEX(NET_HEX)
        factions[] = {};
      };
      class GreenHex_winter {
        displayName = "Hex Green (Winter Net)";
        T14_GREENHEX(NET_WINTER)
        factions[] = {};
      };
      class Jungle {
        displayName = "Jungle (Desert Net)";
        T14_JUNGLE(NET_DESERT)
        factions[] = {};
      };
      class Jungle_green {
        displayName = "Jungle (Green Net)";
        T14_JUNGLE(NET_GREEN)
        factions[] = {};
      };
      class Jungle_jungle {
        displayName = "Jungle (Jungle Net)";
        T14_JUNGLE(NET_JUNGLE)
        factions[] = {};
      };
      class Jungle_winter {
        displayName = "Jungle (Winter Net)";
        T14_JUNGLE(NET_WINTER)
        factions[] = {};
      };
      class Jungle_bicolor {
        displayName = "Jungle (Bicolor Woodland Net)";
        T14_JUNGLE(NET_BICOLOR)
        factions[] = {};
      };
      class Jungle_Woodland {
        displayName = "Jungle (Woodland Net)";
        T14_JUNGLE(NET_WOODLAND)
        factions[] = {};
      };
      class Grey {
        displayName = "Grey (Desert Net)";
        T14_GREY(NET_DESERT)
        factions[] = {};
      };
      class Grey_green {
        displayName = "Grey (Green Net)";
        T14_GREY(NET_GREEN)
        factions[] = {};
      };
      class Grey_jungle {
        displayName = "Grey (Jungle Net)";
        T14_GREY(NET_JUNGLE)
        factions[] = {};
      };
      class Grey_winter {
        displayName = "Grey (Winter Net)";
        T14_GREY(NET_WINTER)
        factions[] = {};
      };
      class Grey_bicolor {
        displayName = "Grey (Bicolor Woodland Net)";
        T14_GREY(NET_BICOLOR)
        factions[] = {};
      };
      class Grey_Woodland {
        displayName = "Grey (Woodland Net)";
        T14_GREY(NET_WOODLAND)
        factions[] = {};
      };
      class Green {
        displayName = "Green (Desert Net)";
        T14_GREEN(NET_DESERT)
        factions[] = {};
      };
      class Green_green {
        displayName = "Green (Green Net)";
        T14_GREEN(NET_GREEN)
        factions[] = {};
      };
      class Green_jungle {
        displayName = "Green (Green Net)";
        T14_GREEN(NET_JUNGLE)
        factions[] = {};
      };
      class Green_winter {
        displayName = "Green (Winter Net)";
        T14_GREEN(NET_WINTER)
        factions[] = {};
      };
      class Green_bicolor {
        displayName = "Green (Bicolor Woodland Net)";
        T14_GREEN(NET_BICOLOR)
        factions[] = {};
      };
      class Green_Woodland {
        displayName = "Green (Woodland Net)";
        T14_GREEN(NET_WOODLAND)
        factions[] = {};
      };
    };
};

#define T14K_HEX(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",\
          CAMONET\
        };
#define T14K_GREENHEX(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",\
          CAMONET\
        };
#define T14K_JUNGLE(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_jungle_CO.paa",\
          CAMONET\
        };
#define T14K_GREY(CAMONET)\
        textures[] = {\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",\
          "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",\
          "\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",\
          CAMONET\
        };
#define T14K_GREEN(CAMONET)\
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_1_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_2_CO.paa",\
          "\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER(O_MBT_04_command_F,MBT_04_command_base_F);
class GCLASS(T14_RCWS): O_MBT_04_command_F {
    displayName = "T-14K (RCWS-30)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "eventhandler_camo.hpp"
    class TextureSources {
      class Hex {
        displayName = "Hex Ochre (Hex Green Net)";
        T14K_HEX(NET_GREENHEX)
        factions[] = {};
      };
      class Hex_desert {
        displayName = "Hex Ochre (Hex Ochre Net)";
        T14K_HEX(NET_HEX)
        factions[] = {};
      };
      class Hex_winter {
        displayName = "Hex Ochre (Winter Net)";
        T14K_HEX(NET_WINTER)
        factions[] = {};
      };
      class GreenHex {
        displayName = "Hex Green (Hex Green Net)";
        T14K_GREENHEX(NET_GREENHEX)
        factions[] = {};
      };
      class GreenHex_desert {
        displayName = "Hex Green (Hex Ochre Net)";
        T14K_GREENHEX(NET_HEX)
        factions[] = {};
      };
      class GreenHex_winter {
        displayName = "Hex Green (Winter Net)";
        T14K_GREENHEX(NET_WINTER)
        factions[] = {};
      };
      class Jungle {
        displayName = "Jungle (Desert Net)";
        T14K_JUNGLE(NET_DESERT)
        factions[] = {};
      };
      class Jungle_green {
        displayName = "Jungle (Green Net)";
        T14K_JUNGLE(NET_GREEN)
        factions[] = {};
      };
      class Jungle_jungle {
        displayName = "Jungle (Jungle Net)";
        T14K_JUNGLE(NET_JUNGLE)
        factions[] = {};
      };
      class Jungle_winter {
        displayName = "Jungle (Winter Net)";
        T14K_JUNGLE(NET_WINTER)
        factions[] = {};
      };
      class Jungle_bicolor {
        displayName = "Jungle (Bicolor Woodland Net)";
        T14K_JUNGLE(NET_BICOLOR)
        factions[] = {};
      };
      class Jungle_Woodland {
        displayName = "Jungle (Woodland Net)";
        T14K_JUNGLE(NET_WOODLAND)
        factions[] = {};
      };
      class Grey {
        displayName = "Grey (Desert Net)";
        T14K_GREY(NET_DESERT)
        factions[] = {};
      };
      class Grey_green {
        displayName = "Grey (Green Net)";
        T14K_GREY(NET_GREEN)
        factions[] = {};
      };
      class Grey_jungle {
        displayName = "Grey (Jungle Net)";
        T14K_GREY(NET_JUNGLE)
        factions[] = {};
      };
      class Grey_winter {
        displayName = "Grey (Winter Net)";
        T14K_GREY(NET_WINTER)
        factions[] = {};
      };
      class Grey_bicolor {
        displayName = "Grey (Bicolor Woodland Net)";
        T14K_GREY(NET_BICOLOR)
        factions[] = {};
      };
      class Grey_Woodland {
        displayName = "Grey (Woodland Net)";
        T14K_GREY(NET_WOODLAND)
        factions[] = {};
      };
      class Green {
        displayName = "Green (Desert Net)";
        T14K_GREEN(NET_DESERT)
        factions[] = {};
      };
      class Green_green {
        displayName = "Green (Green Net)";
        T14K_GREEN(NET_GREEN)
        factions[] = {};
      };
      class Green_jungle {
        displayName = "Green (Green Net)";
        T14K_GREEN(NET_JUNGLE)
        factions[] = {};
      };
      class Green_winter {
        displayName = "Green (Winter Net)";
        T14K_GREEN(NET_WINTER)
        factions[] = {};
      };
      class Green_bicolor {
        displayName = "Green (Bicolor Woodland Net)";
        T14K_GREEN(NET_BICOLOR)
        factions[] = {};
      };
      class Green_Woodland {
        displayName = "Green (Woodland Net)";
        T14K_GREEN(NET_WOODLAND)
        factions[] = {};
      };
    };
};
