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
#define NAMER_BROWN(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_brown_CO.paa",\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_brown_CO.paa",\
          "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa",\
          CAMONET\
        };
#define NAMER_KZG(CAMONET) \
        textures[] = {\
          "\s\synixe_factions\addons\textures\data\namer\Namer_body_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\merkava\Merkava_body_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\common\Turret_rcws_KZG_CO.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER(B_APC_Tracked_01_rcws_F,B_APC_Tracked_01_base_F);
ADD_CAMO_EVENT_HANDLER_NOBASE(MU_NATO_Panther_unarmed,B_APC_Tracked_01_rcws_F);
class GCLASS(Namer): MU_NATO_Panther_unarmed {
    displayName = "Namer";
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
      class Brown {
        displayName = "Brown (Desert Net)";
        NAMER_BROWN(NET_DESERT)
        factions[] = {};
      };
      class Brown_green {
        displayName = "Brown (Green Net)";
        NAMER_BROWN(NET_GREEN)
        factions[] = {};
      };
      class Brown_jungle {
        displayName = "Brown (Jungle Net)";
        NAMER_BROWN(NET_JUNGLE)
        factions[] = {};
      };
      class Brown_winter {
        displayName = "Brown (Winter Net)";
        NAMER_BROWN(NET_WINTER)
        factions[] = {};
      };
      class KZG_01 {
        displayName = "Khaybaran (Desert Net)";
        NAMER_KZG(NET_DESERT)
        factions[] = {};
      };
      class KZG_01_green {
        displayName = "Khaybaran (Green Net)";
        NAMER_KZG(NET_GREEN)
        factions[] = {};
      };
      class KZG_01_jungle {
        displayName = "Khaybaran (Jungle Net)";
        NAMER_KZG(NET_JUNGLE)
        factions[] = {};
      };
      class KZG_01_winter {
        displayName = "Khaybaran (Winter Net)";
        NAMER_KZG(NET_WINTER)
        factions[] = {};
      };
    };
};


class GCLASS(Namer_RCWS): B_APC_Tracked_01_rcws_F {
    displayName = "Namer (RCWS)";
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
      class Brown {
        displayName = "Brown (Desert Net)";
        NAMER_BROWN(NET_DESERT)
        factions[] = {};
      };
      class Brown_green {
        displayName = "Brown (Green Net)";
        NAMER_BROWN(NET_GREEN)
        factions[] = {};
      };
      class Brown_jungle {
        displayName = "Brown (Jungle Net)";
        NAMER_BROWN(NET_JUNGLE)
        factions[] = {};
      };
      class Brown_winter {
        displayName = "Brown (Winter Net)";
        NAMER_BROWN(NET_WINTER)
        factions[] = {};
      };
      class KZG_01 {
        displayName = "Khaybaran (Desert Net)";
        NAMER_KZG(NET_DESERT)
        factions[] = {};
      };
      class KZG_01_green {
        displayName = "Khaybaran (Green Net)";
        NAMER_KZG(NET_GREEN)
        factions[] = {};
      };
      class KZG_01_jungle {
        displayName = "Khaybaran (Jungle Net)";
        NAMER_KZG(NET_JUNGLE)
        factions[] = {};
      };
      class KZG_01_winter {
        displayName = "Khaybaran (Winter Net)";
        NAMER_KZG(NET_WINTER)
        factions[] = {};
      };
    };
};

#define NAMER_CEV_SAND(CAMONET) \
        textures[] = {\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",\
          "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_CO.paa",\
          CAMONET\
        };
#define NAMER_CEV_OLIVE(CAMONET) \
        textures[] = {\
          "A3\Armor_F_exp\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",\
          "A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa",\
          "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",\
          "A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_crv_olive_co.paa",\
          CAMONET\
        };
#define NAMER_CEV_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",\
          "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",\
          "A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_crv_olive_co.paa",\
          CAMONET\
        };
#define NAMER_CEV_BROWN(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_brown_CO.paa",\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_brown_CO.paa",\
          "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa",\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_CRV_brown_CO.paa",\
          CAMONET\
        };
#define NAMER_CEV_KZG(CAMONET) \
        textures[] = {\
          "\s\synixe_factions\addons\textures\data\namer\Namer_body_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\merkava\Merkava_body_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\common\Turret_rcws_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\namer\Namer_CEV_KZG_CO.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER_NOBASE(B_APC_Tracked_01_CRV_F,B_APC_Tracked_01_base_F);
class GCLASS(Namer_CEV): B_APC_Tracked_01_CRV_F {
    displayName = "Namer (CEV)";
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
        NAMER_CEV_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        NAMER_CEV_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        NAMER_CEV_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        NAMER_CEV_SAND(NET_WINTER)
        factions[] = {};
      };
      class Olive {
        displayName = "Olive (Desert Net)";
        NAMER_CEV_OLIVE(NET_DESERT)
        factions[] = {};
      };
      class Olive_green {
        displayName = "Olive (Green Net)";
        NAMER_CEV_OLIVE(NET_GREEN)
        factions[] = {};
      };
      class Olive_jungle {
        displayName = "Olive (Jungle Net)";
        NAMER_CEV_OLIVE(NET_JUNGLE)
        factions[] = {};
      };
      class Olive_winter {
        displayName = "Olive (Winter Net)";
        NAMER_CEV_OLIVE(NET_WINTER)
        factions[] = {};
      };
      class Woodland {
        displayName = "Woodland (Desert Net)";
        NAMER_CEV_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class Woodland_green {
        displayName = "Woodland (Green Net)";
        NAMER_CEV_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class Woodland_jungle {
        displayName = "Woodland (Jungle Net)";
        NAMER_CEV_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class Woodland_winter {
        displayName = "Woodland (Winter Net)";
        NAMER_CEV_WOODLAND(NET_WINTER)
        factions[] = {};
      };
      class Brown {
        displayName = "Brown (Desert Net)";
        NAMER_CEV_BROWN(NET_DESERT)
        factions[] = {};
      };
      class Brown_green {
        displayName = "Brown (Green Net)";
        NAMER_CEV_BROWN(NET_GREEN)
        factions[] = {};
      };
      class Brown_jungle {
        displayName = "Brown (Jungle Net)";
        NAMER_CEV_BROWN(NET_JUNGLE)
        factions[] = {};
      };
      class Brown_winter {
        displayName = "Brown (Winter Net)";
        NAMER_CEV_BROWN(NET_WINTER)
        factions[] = {};
      };
      class KZG_01 {
        displayName = "Khaybaran (Desert Net)";
        NAMER_CEV_KZG(NET_DESERT)
        factions[] = {};
      };
      class KZG_01_green {
        displayName = "Khaybaran (Green Net)";
        NAMER_CEV_KZG(NET_GREEN)
        factions[] = {};
      };
      class KZG_01_jungle {
        displayName = "Khaybaran (Jungle Net)";
        NAMER_CEV_KZG(NET_JUNGLE)
        factions[] = {};
      };
      class KZG_01_winter {
        displayName = "Khaybaran (Winter Net)";
        NAMER_CEV_KZG(NET_WINTER)
        factions[] = {};
      };
    };
};

#define NAMER_AA_SAND(CAMONET) \
        textures[] = {\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",\
          "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",\
          "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_co.paa",\
          CAMONET\
        };
#define NAMER_AA_OLIVE(CAMONET) \
        textures[] = {\
          "A3\Armor_F_exp\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",\
          "A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa",\
          "A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa",\
          CAMONET\
        };
#define NAMER_AA_WOODLAND(CAMONET) \
        textures[] = {\
          "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",\
          "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_AA_tow_wdl_CO.paa",\
          CAMONET\
        };
#define NAMER_AA_BROWN(CAMONET) \
        textures[] = {\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_brown_CO.paa",\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_brown_CO.paa",\
          "\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_AA_tower_brown_CO.paa",\
          CAMONET\
        };
#define NAMER_AA_KZG(CAMONET) \
        textures[] = {\
          "\s\synixe_factions\addons\textures\data\namer\Namer_body_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\merkava\Merkava_body_KZG_CO.paa",\
          "\s\synixe_factions\addons\textures\data\namer\Namer_AA_KZG_CO.paa",\
          CAMONET\
        };

ADD_CAMO_EVENT_HANDLER_NOBASE(B_APC_Tracked_01_AA_F,B_APC_Tracked_01_base_F);
class GCLASS(Namer_AA): B_APC_Tracked_01_AA_F {
    displayName = "Namer (AA)";
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
        NAMER_AA_SAND(NET_DESERT)
        factions[] = {};
      };
      class Sand_green {
        displayName = "Sand (Green Net)";
        NAMER_AA_SAND(NET_GREEN)
        factions[] = {};
      };
      class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        NAMER_AA_SAND(NET_JUNGLE)
        factions[] = {};
      };
      class Sand_winter {
        displayName = "Sand (Winter Net)";
        NAMER_AA_SAND(NET_WINTER)
        factions[] = {};
      };
      class Olive {
        displayName = "Olive (Desert Net)";
        NAMER_AA_OLIVE(NET_DESERT)
        factions[] = {};
      };
      class Olive_green {
        displayName = "Olive (Green Net)";
        NAMER_AA_OLIVE(NET_GREEN)
        factions[] = {};
      };
      class Olive_jungle {
        displayName = "Olive (Jungle Net)";
        NAMER_AA_OLIVE(NET_JUNGLE)
        factions[] = {};
      };
      class Olive_winter {
        displayName = "Olive (Winter Net)";
        NAMER_AA_OLIVE(NET_WINTER)
        factions[] = {};
      };
      class Woodland {
        displayName = "Woodland (Desert Net)";
        NAMER_AA_WOODLAND(NET_DESERT)
        factions[] = {};
      };
      class Woodland_green {
        displayName = "Woodland (Green Net)";
        NAMER_AA_WOODLAND(NET_GREEN)
        factions[] = {};
      };
      class Woodland_jungle {
        displayName = "Woodland (Jungle Net)";
        NAMER_AA_WOODLAND(NET_JUNGLE)
        factions[] = {};
      };
      class Woodland_winter {
        displayName = "Woodland (Winter Net)";
        NAMER_AA_WOODLAND(NET_WINTER)
        factions[] = {};
      };
      class Brown {
        displayName = "Brown (Desert Net)";
        NAMER_AA_BROWN(NET_DESERT)
        factions[] = {};
      };
      class Brown_green {
        displayName = "Brown (Green Net)";
        NAMER_AA_BROWN(NET_GREEN)
        factions[] = {};
      };
      class Brown_jungle {
        displayName = "Brown (Jungle Net)";
        NAMER_AA_BROWN(NET_JUNGLE)
        factions[] = {};
      };
      class Brown_winter {
        displayName = "Brown (Winter Net)";
        NAMER_AA_BROWN(NET_WINTER)
        factions[] = {};
      };
      class KZG_01 {
        displayName = "Khaybaran (Desert Net)";
        NAMER_AA_KZG(NET_DESERT)
        factions[] = {};
      };
      class KZG_01_green {
        displayName = "Khaybaran (Green Net)";
        NAMER_AA_KZG(NET_GREEN)
        factions[] = {};
      };
      class KZG_01_jungle {
        displayName = "Khaybaran (Jungle Net)";
        NAMER_AA_KZG(NET_JUNGLE)
        factions[] = {};
      };
      class KZG_01_winter {
        displayName = "Khaybaran (Winter Net)";
        NAMER_AA_KZG(NET_WINTER)
        factions[] = {};
      };
    };
};
