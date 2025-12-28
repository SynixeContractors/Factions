#define ROOIKAT_SAND(CAMONET) \
        textures[] = {\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",\
          CAMONET,\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"\
        };
#define ROOIKAT_GREEN(CAMONET) \
        textures[] = {\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",\
          CAMONET,\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"\
        };
#define ROOIKAT_SFIA(CAMONET) \
        textures[] = {\
          "\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa1_CO.paa",\
          "\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa2_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_CO.paa",\
          CAMONET,\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"\
        };
#define ROOIKAT_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT1_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT2_wdl_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_green_CO.paa",\
          CAMONET,\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT3_CO.paa"\
        };
#define ROOIKAT_FRANCE(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1_fr_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel_CO.paa",\
          CAMONET,\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"\
        };

class B_AFV_Wheeled_01_cannon_F;
class GCLASS(Roooikat): B_AFV_Wheeled_01_cannon_F {
    displayName = "Rooikat 120";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 540;
    class TextureSources {
      class Sand {
        displayName = "Sand (Desert Net)";
        ROOIKAT_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        ROOIKAT_SAND(NET_WINTER)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        ROOIKAT_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        ROOIKAT_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_bicolor {
        displayName = "Sand (Bicolor Woodland Net)";
        ROOIKAT_SAND(NET_BICOLOR)
        factions[] = {};
      };
      class Sand_woodland {
        displayName = "Sand (Woodland Net)";
        ROOIKAT_SAND(NET_WOODLAND)
        factions[] = {};
      };
      class Green {
        displayName = "Green (Desert Net)";
        ROOIKAT_GREEN(NET_DESERT)
        factions[] = {};
      };
      class Green_winter {
        displayName = "Green (Winter Net)";
        ROOIKAT_GREEN(NET_WINTER)
        factions[] = {};
      };
      class Green_jungle {
        displayName = "Green (Jungle Net)";
        ROOIKAT_GREEN(NET_JUNGLE)
        factions[] = {};
      };
      class Green_green {
        displayName = "Green (Green Net)";
        ROOIKAT_GREEN(NET_GREEN)
        factions[] = {};
      };
      class Green_bicolor {
        displayName = "Green (Bicolor Woodland Net)";
        ROOIKAT_GREEN(NET_BICOLOR)
        factions[] = {};
      };
      class Green_woodland {
        displayName = "Green (Woodland Net)";
        ROOIKAT_GREEN(NET_WOODLAND)
        factions[] = {};
      };
      class SFIA {
        displayName = "Mudwalker (Desert Net)";
        ROOIKAT_SFIA(NET_DESERT)
        factions[] = {};
      };
      class SFIA_winter {
        displayName = "Mudwalker (Winter Net)";
        ROOIKAT_SFIA(NET_WINTER)
        factions[] = {};
      };
      class SFIA_jungle {
        displayName = "Mudwalker (Jungle Net)";
        ROOIKAT_SFIA(NET_JUNGLE)
        factions[] = {};
      };
      class SFIA_green {
        displayName = "Mudwalker (Green Net)";
        ROOIKAT_SFIA(NET_GREEN)
        factions[] = {};
      };
      class SFIA_bicolor {
        displayName = "Mudwalker (Bicolor Woodland Net)";
        ROOIKAT_SFIA(NET_BICOLOR)
        factions[] = {};
      };
      class SFIA_woodland {
        displayName = "Mudwalker (Woodland Net)";
        ROOIKAT_SFIA(NET_WOODLAND)
        factions[] = {};
      };
      class WDL_01 {
        displayName = "Woodland (Desert Net)";
        ROOIKAT_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class WDL_01_winter {
        displayName = "Woodland (Winter Net)";
        ROOIKAT_WOODLAND(NET_WINTER)
        factions[] = {};
      };
      class WDL_01_jungle {
        displayName = "Woodland (Jungle Net)";
        ROOIKAT_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class WDL_01_green {
        displayName = "Woodland (Green Net)";
        ROOIKAT_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class WDL_01_bicolor {
        displayName = "Woodland (Bicolor Woodland Net)";
        ROOIKAT_WOODLAND(NET_BICOLOR)
        factions[] = {};
      };
      class WDL_01_woodland {
        displayName = "Woodland (Woodland Net)";
        ROOIKAT_WOODLAND(NET_WOODLAND)
        factions[] = {};
      };
      class France {
        displayName = "Savanna (Desert Net)";
        ROOIKAT_FRANCE(NET_DESERT)
        factions[] = {};
      };
      class France_winter {
        displayName = "Savanna (Winter Net)";
        ROOIKAT_FRANCE(NET_WINTER)
        factions[] = {};
      };
      class France_jungle {
        displayName = "Savanna (Jungle Net)";
        ROOIKAT_FRANCE(NET_JUNGLE)
        factions[] = {};
      };
      class France_green {
        displayName = "Savanna (Green Net)";
        ROOIKAT_FRANCE(NET_GREEN)
        factions[] = {};
      };
      class France_bicolor {
        displayName = "Savanna (Bicolor Woodland Net)";
        ROOIKAT_FRANCE(NET_BICOLOR)
        factions[] = {};
      };
      class France_woodland {
        displayName = "Savanna (Woodland Net)";
        ROOIKAT_FRANCE(NET_WOODLAND)
        factions[] = {};
      };
    };
};

#define ROOIKAT_UP_SAND(CAMONET) \
        textures[] = {\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa",\
          CAMONET,\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"\
        };
#define ROOIKAT_UP_GREEN(CAMONET) \
        textures[] = {\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa",\
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",\
          CAMONET,\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"\
        };
#define ROOIKAT_UP_SFIA(CAMONET) \
        textures[] = {\
          "\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa1_CO.paa",\
          "\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa2_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_CO.paa",\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa", \
          "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa",\
          CAMONET,\
          "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"\
        };
#define ROOIKAT_UP_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT1_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT2_wdl_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_green_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT3_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_commander_tow_CO.paa",\
          CAMONET,\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_EXT3_CO.paa"\
        };
#define ROOIKAT_UP_FRANCE(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1_fr_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_commander_tow_sand_CO.paa",\
          CAMONET,\
          "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"\
        };


class B_AFV_Wheeled_01_up_cannon_F;
class GCLASS(Roooikat_ERA): B_AFV_Wheeled_01_up_cannon_F {
    displayName = "Rooikat 120 (UP)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 540;
    class TextureSources {
      class Sand {
        displayName = "Sand (Desert Net)";
        ROOIKAT_UP_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        ROOIKAT_UP_SAND(NET_WINTER)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        ROOIKAT_UP_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        ROOIKAT_UP_SAND(NET_GREEN)
        factions[] = {};
      };
      class Green {
        displayName = "Green (Desert Net)";
        ROOIKAT_UP_GREEN(NET_DESERT)
        factions[] = {};
      };
      class Green_winter {
        displayName = "Green (Winter Net)";
        ROOIKAT_UP_GREEN(NET_WINTER)
        factions[] = {};
      };
      class Green_jungle {
        displayName = "Green (Jungle Net)";
        ROOIKAT_UP_GREEN(NET_JUNGLE)
        factions[] = {};
      };
      class Green_green {
        displayName = "Green (Green Net)";
        ROOIKAT_UP_GREEN(NET_GREEN)
        factions[] = {};
      };
      class SFIA {
        displayName = "Mudwalker (Desert Net)";
        ROOIKAT_UP_SFIA(NET_DESERT)
        factions[] = {};
      };
      class SFIA_winter {
        displayName = "Mudwalker (Winter Net)";
        ROOIKAT_UP_SFIA(NET_WINTER)
        factions[] = {};
      };
      class SFIA_jungle {
        displayName = "Mudwalker (Jungle Net)";
        ROOIKAT_UP_SFIA(NET_JUNGLE)
        factions[] = {};
      };
      class SFIA_green {
        displayName = "Mudwalker (Green Net)";
        ROOIKAT_UP_SFIA(NET_GREEN)
        factions[] = {};
      };
      class WDL_01 {
        displayName = "Woodland (Desert Net)";
        ROOIKAT_UP_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class WDL_01_winter {
        displayName = "Woodland (Winter Net)";
        ROOIKAT_UP_WOODLAND(NET_WINTER)
        factions[] = {};
      };
      class WDL_01_jungle {
        displayName = "Woodland (Jungle Net)";
        ROOIKAT_UP_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class WDL_01_green {
        displayName = "Woodland (Green Net)";
        ROOIKAT_UP_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class France {
        displayName = "Savanna (Desert Net)";
        ROOIKAT_UP_FRANCE(NET_DESERT)
        factions[] = {};
      };
      class France_winter {
        displayName = "Savanna (Winter Net)";
        ROOIKAT_UP_FRANCE(NET_WINTER)
        factions[] = {};
      };
      class France_jungle {
        displayName = "Savanna (Jungle Net)";
        ROOIKAT_UP_FRANCE(NET_JUNGLE)
        factions[] = {};
      };
      class France_green {
        displayName = "Savanna (Green Net)";
        ROOIKAT_UP_FRANCE(NET_GREEN)
        factions[] = {};
      };
    };
};
