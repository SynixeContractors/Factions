#define NAMER_SAND(CAMONET) \
        textures[] = {\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",\
          "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",\
          CAMONET\
        };
#define NAMER_OLIVE(CAMONET) \
        textures[] = {\
          "A3\Armor_F_exp\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",\
          "A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa",\
          "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",\
          CAMONET\
        };
#define NAMER_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",\
          "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",\
          CAMONET\
        };

class MU_NATO_Panther_unarmed;
class CLASS(Namer): MU_NATO_Panther_unarmed {
    displayName = "Namer";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
      class Sand {
        displayName = "Sand (Desert Net)";
        NAMER_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        NAMER_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        NAMER_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        NAMER_SAND(NET_WINTER)
        factions[] = {};
      };
      class Olive {
        displayName = "Olive (Desert Net)";
        NAMER_OLIVE(NET_DESERT)
        factions[] = {};
      };
      class Olive_green {
        displayName = "Olive (Green Net)";
        NAMER_OLIVE(NET_GREEN)
        factions[] = {};
      };
      class Olive_jungle {
        displayName = "Olive (Jungle Net)";
        NAMER_OLIVE(NET_JUNGLE)
        factions[] = {};
      };
      class Olive_winter {
        displayName = "Olive (Winter Net)";
        NAMER_OLIVE(NET_WINTER)
        factions[] = {};
      };
      class Woodland {
        displayName = "Woodland (Desert Net)";
        NAMER_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class Woodland_green {
        displayName = "Woodland (Green Net)";
        NAMER_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class Woodland_jungle {
        displayName = "Woodland (Jungle Net)";
        NAMER_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class Woodland_winter {
        displayName = "Woodland (Winter Net)";
        NAMER_WOODLAND(NET_WINTER)
        factions[] = {};
      };
    };
};

class B_APC_Tracked_01_rcws_F;
class CLASS(Namer_RCWS): B_APC_Tracked_01_rcws_F {
    displayName = "Namer (RCWS)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
      class Sand {
        displayName = "Sand (Desert Net)";
        NAMER_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        NAMER_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        NAMER_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        NAMER_SAND(NET_WINTER)
        factions[] = {};
      };
      class Olive {
        displayName = "Olive (Desert Net)";
        NAMER_OLIVE(NET_DESERT)
        factions[] = {};
      };
      class Olive_green {
        displayName = "Olive (Green Net)";
        NAMER_OLIVE(NET_GREEN)
        factions[] = {};
      };
      class Olive_jungle {
        displayName = "Olive (Jungle Net)";
        NAMER_OLIVE(NET_JUNGLE)
        factions[] = {};
      };
      class Olive_winter {
        displayName = "Olive (Winter Net)";
        NAMER_OLIVE(NET_WINTER)
        factions[] = {};
      };
      class Woodland {
        displayName = "Woodland (Desert Net)";
        NAMER_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class Woodland_green {
        displayName = "Woodland (Green Net)";
        NAMER_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class Woodland_jungle {
        displayName = "Woodland (Jungle Net)";
        NAMER_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class Woodland_winter {
        displayName = "Woodland (Winter Net)";
        NAMER_WOODLAND(NET_WINTER)
        factions[] = {};
      };
    };
};
