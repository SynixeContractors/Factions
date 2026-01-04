#define MERKAVA_SPG_SAND(CAMONET) \
        textures[] = {\
          "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",\
          "A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa",\
          "A3\Data_F\Vehicles\Turret_CO.paa",\
          CAMONET\
        };
#define MERKAVA_SPG_OLIVE(CAMONET) \
        textures[] = {\
          "A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",\
          "A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa",\
          "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",\
          CAMONET\
        };
#define MERKAVA_SPG_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_scorcher_wdl_CO.paa",\
          "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",\
          CAMONET\
        };
#define MERKAVA_SPG_BROWN(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_body_brown_CO.paa", \
          "\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_scorcher_brown_CO.paa",\
          "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER(B_MBT_01_arty_F,B_MBT_01_arty_base_F);
class GCLASS(Merkava_SPG): B_MBT_01_arty_F {
    displayName = "Merkava Sholef (SPG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "eventhandler_camo.hpp"
    class TextureSources {
      class Sand {
        displayName = "Sand (Desert Net)";
        MERKAVA_SPG_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        MERKAVA_SPG_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        MERKAVA_SPG_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        MERKAVA_SPG_SAND(NET_WINTER)
        factions[] = {};
      };
      class Olive {
        displayName = "Olive (Desert Net)";
        MERKAVA_SPG_OLIVE(NET_DESERT)
        factions[] = {};
      };
      class Olive_green {
        displayName = "Olive (Green Net)";
        MERKAVA_SPG_OLIVE(NET_GREEN)
        factions[] = {};
      };
      class Olive_jungle {
        displayName = "Olive (Jungle Net)";
        MERKAVA_SPG_OLIVE(NET_JUNGLE)
        factions[] = {};
      };
      class Olive_winter {
        displayName = "Olive (Winter Net)";
        MERKAVA_SPG_OLIVE(NET_WINTER)
        factions[] = {};
      };
      class Woodland {
        displayName = "Woodland (Desert Net)";
        MERKAVA_SPG_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class Woodland_green {
        displayName = "Woodland (Green Net)";
        MERKAVA_SPG_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class Woodland_jungle {
        displayName = "Woodland (Jungle Net)";
        MERKAVA_SPG_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class Woodland_winter {
        displayName = "Woodland (Winter Net)";
        MERKAVA_SPG_WOODLAND(NET_WINTER)
        factions[] = {};
      };
      class Brown {
        displayName = "Brown (Desert Net)";
        MERKAVA_SPG_BROWN(NET_DESERT)
        factions[] = {};
      };
      class Brown_green {
        displayName = "Brown (Green Net)";
        MERKAVA_SPG_BROWN(NET_GREEN)
        factions[] = {};
      };
      class Brown_jungle {
        displayName = "Brown (Jungle Net)";
        MERKAVA_SPG_BROWN(NET_JUNGLE)
        factions[] = {};
      };
      class Brown_winter {
        displayName = "Brown (Winter Net)";
        MERKAVA_SPG_BROWN(NET_WINTER)
        factions[] = {};
      };
    };
};
#define MERKAVA_MLRS_SAND(CAMONET) \
        textures[] = {\
          "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",\
          "A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa",\
          CAMONET\
        };
#define MERKAVA_MLRS_OLIVE(CAMONET) \
        textures[] = {\
          "A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",\
          "A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa",\
          CAMONET\
        };
#define MERKAVA_MLRS_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_MLRS_wdl_co.paa",\
          CAMONET\
        };
#define MERKAVA_MLRS_BROWN(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\MBT_01\Data\MBT_01_body_brown_CO.paa", \
          "A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER(B_MBT_01_mlrs_F,B_MBT_01_mlrs_base_F);
class GCLASS(Merkava_MLRS): B_MBT_01_mlrs_F {
    displayName = "Merkava Seara (MRL)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "eventhandler_camo.hpp"
    class TextureSources {
      class Sand {
        displayName = "Sand (Desert Net)";
        MERKAVA_MLRS_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        MERKAVA_MLRS_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        MERKAVA_MLRS_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        MERKAVA_MLRS_SAND(NET_WINTER)
        factions[] = {};
      };
      class Olive {
        displayName = "Olive (Desert Net)";
        MERKAVA_MLRS_OLIVE(NET_DESERT)
        factions[] = {};
      };
      class Olive_green {
        displayName = "Olive (Green Net)";
        MERKAVA_MLRS_OLIVE(NET_GREEN)
        factions[] = {};
      };
      class Olive_jungle {
        displayName = "Olive (Jungle Net)";
        MERKAVA_MLRS_OLIVE(NET_JUNGLE)
        factions[] = {};
      };
      class Olive_winter {
        displayName = "Olive (Winter Net)";
        MERKAVA_MLRS_OLIVE(NET_WINTER)
        factions[] = {};
      };
      class Woodland {
        displayName = "Woodland (Desert Net)";
        MERKAVA_MLRS_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class Woodland_green {
        displayName = "Woodland (Green Net)";
        MERKAVA_MLRS_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class Woodland_jungle {
        displayName = "Woodland (Jungle Net)";
        MERKAVA_MLRS_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class Woodland_winter {
        displayName = "Woodland (Winter Net)";
        MERKAVA_MLRS_WOODLAND(NET_WINTER)
        factions[] = {};
      };
      class Brown {
        displayName = "Brown (Desert Net)";
        MERKAVA_MLRS_BROWN(NET_DESERT)
        factions[] = {};
      };
      class Brown_green {
        displayName = "Brown (Green Net)";
        MERKAVA_MLRS_BROWN(NET_GREEN)
        factions[] = {};
      };
      class Brown_jungle {
        displayName = "Brown (Jungle Net)";
        MERKAVA_MLRS_BROWN(NET_JUNGLE)
        factions[] = {};
      };
      class Brown_winter {
        displayName = "Brown (Winter Net)";
        MERKAVA_MLRS_BROWN(NET_WINTER)
        factions[] = {};
      };
    };
};
