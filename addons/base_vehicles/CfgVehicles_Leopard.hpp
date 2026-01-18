#define LEOPARD_EAF(CAMONET)\
            textures[] = {\
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_CO.paa",\
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_CO.paa",\
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_CO.paa",\
                CAMONET\
            }
#define LEOPARD_EAFARID(CAMONET)\
            textures[] = {\
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_arid_CO.paa",\
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_arid_CO.paa",\
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_arid_CO.paa",\
                CAMONET\
            }
#define LEOPARD_AAF(CAMONET)\
            textures[] = {\
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",\
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",\
                "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",\
                CAMONET\
            }
#define LEOPARD_KZG(CAMONET)\
            textures[] = {\
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_kzg_CO.paa",\
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_kzg_CO.paa",\
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_kzg_CO.paa",\
                CAMONET\
            }
#define LEOPARD_GREEN(CAMONET)\
            textures[] = {\
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",\
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",\
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",\
                CAMONET\
            }
#define LEOPARD_UNA(CAMONET)\
            textures[] = {\
                "lxws\vehicles_f_lxws\data\MBT_03\mbt_white_ext01_co.paa",\
                "lxws\vehicles_f_lxws\data\MBT_03\mbt_white_ext02_co.paa",\
                "lxws\vehicles_f_lxws\data\MBT_03\mbt_black_rcws_co.paa",\
                CAMONET\
            }
#define LEOPARD_WINTER(CAMONET)\
            textures[] = {\
                "go_data_winter\skins\data\go_mbt_03_ext01_natowinter_co.paa",\
                "go_data_winter\skins\data\go_mbt_03_ext02_natowinter_co.paa",\
                "go_data_winter\skins\data\go_mbt_03_rcws_natowinter_co.paa",\
                CAMONET\
            }

ADD_CAMO_EVENT_HANDLER(I_MBT_03_cannon_F,I_MBT_03_base_F);
class GCLASS(Leopard2): I_MBT_03_cannon_F {
    displayName = "Leopard 2A4M+";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class EAF_01 {
            displayName = "LDF (Geo Woodland, Desert Net)";
            LEOPARD_EAF(NET_DESERT);
            factions[] = {};
        };
        class EAF_01_green {
            displayName = "LDF (Geo Woodland, Green Net)";
            LEOPARD_EAF(NET_GREEN);
            factions[] = {};
        };
        class EAF_01_jungle {
            displayName = "LDF (Geo Woodland, Jungle Net)";
            LEOPARD_EAF(NET_JUNGLE);
            factions[] = {};
        };
        class EAF_01_winter {
            displayName = "LDF (Geo Woodland, Winter Net)";
            LEOPARD_EAF(NET_WINTER);
            factions[] = {};
        };
        class EAF_01_bicolor {
            displayName = "LDF (Geo Woodland, Bicolor Net)";
            LEOPARD_EAF(NET_BICOLOR);
            factions[] = {};
        };
        class EAF_01_woodland {
            displayName = "LDF (Geo Woodland, Woodland Net)";
            LEOPARD_EAF(NET_WOODLAND);
            factions[] = {};
        };
        class EAF_Arid {
            displayName = "LDF (Arid, Desert Net)";
            LEOPARD_EAFARID(NET_DESERT);
            factions[] = {};
        };
        class EAF_Arid_green {
            displayName = "LDF (Arid, Green Net)";
            LEOPARD_EAFARID(NET_GREEN);
            factions[] = {};
        };
        class EAF_Arid_jungle {
            displayName = "LDF (Arid, Jungle Net)";
            LEOPARD_EAFARID(NET_JUNGLE);
            factions[] = {};
        };
        class EAF_Arid_winter {
            displayName = "LDF (Arid, Winter Net)";
            LEOPARD_EAFARID(NET_WINTER);
            factions[] = {};
        };
        class EAF_Arid_bicolor {
            displayName = "LDF (Arid, Bicolor Net)";
            LEOPARD_EAFARID(NET_BICOLOR);
            factions[] = {};
        };
        class EAF_Arid_woodland {
            displayName = "LDF (Arid, Woodland Net)";
            LEOPARD_EAFARID(NET_WOODLAND);
            factions[] = {};
        };
        class Indep_01 {
            displayName = "DAP Green (DAP Desert Net)";
            factions[] = {};
            LEOPARD_AAF(NET_AAFDESERT);
        };
        class Indep_01_green {
            displayName = "DAP Green (DAP Wooland Net)";
            factions[] = {};
            LEOPARD_AAF(NET_AAFDESERT);
        };
        class Indep_01_jungle {
            displayName = "DAP Green (DAP Jungle Net)";
            factions[] = {};
            LEOPARD_AAF(NET_AAFJUNGLE);
        };
        class KZG_01 {
            displayName = "Khaybaran (Desert Net)";
            LEOPARD_KZG(NET_DESERT);
            factions[] = {};
        };
        class KZG_01_green {
            displayName = "Khaybaran (Green Net)";
            LEOPARD_KZG(NET_GREEN);
            factions[] = {};
        };
        class KZG_01_jungle {
            displayName = "Khaybaran (Jungle Net)";
            LEOPARD_KZG(NET_JUNGLE);
            factions[] = {};
        };
        class KZG_01_winter {
            displayName = "Khaybaran (Winter Net)";
            LEOPARD_KZG(NET_WINTER);
            factions[] = {};
        };
        class KZG_01_bicolor {
            displayName = "Khaybaran (Bicolor Net)";
            LEOPARD_KZG(NET_BICOLOR);
            factions[] = {};
        };
        class KZG_01_woodland {
            displayName = "Khaybaran (Woodland Net)";
            LEOPARD_KZG(NET_WOODLAND);
            factions[] = {};
        };
        class Olive_01 {
            displayName = "Green (Desert Net)";
            LEOPARD_GREEN(NET_DESERT);
            factions[] = {};
        };
        class Olive_01_green {
            displayName = "Green (Green Net)";
            LEOPARD_GREEN(NET_GREEN);
            factions[] = {};
        };
        class Olive_01_jungle {
            displayName = "Green (Jungle Net)";
            LEOPARD_GREEN(NET_JUNGLE);
            factions[] = {};
        };
        class Olive_01_winter {
            displayName = "Green (Winter Net)";
            LEOPARD_GREEN(NET_WINTER);
            factions[] = {};
        };
        class Olive_01_bicolor {
            displayName = "Green (Bicolor Net)";
            LEOPARD_GREEN(NET_BICOLOR);
            factions[] = {};
        };
        class Olive_01_woodland {
            displayName = "Green (Woodland Net)";
            LEOPARD_GREEN(NET_WOODLAND);
            factions[] = {};
        };
        class UNA {
            displayName = "UNA (Desert Net)";
            LEOPARD_UNA(NET_DESERT);
            factions[] = {};
        };
        class UNA_green {
            displayName = "UNA (Green Net)";
            LEOPARD_UNA(NET_GREEN);
            factions[] = {};
        };
        class UNA_jungle {
            displayName = "UNA (Jungle Net)";
            LEOPARD_UNA(NET_JUNGLE);
            factions[] = {};
        };
        class UNA_winter {
            displayName = "UNA (Winter Net)";
            LEOPARD_UNA(NET_WINTER);
            factions[] = {};
        };
        class UNA_bicolor {
            displayName = "UNA (Bicolor Net)";
            LEOPARD_UNA(NET_BICOLOR);
            factions[] = {};
        };
        class UNA_woodland {
            displayName = "UNA (Woodland Net)";
            LEOPARD_UNA(NET_WOODLAND);
            factions[] = {};
        };
        class Winter {
            displayName = "Winter (Desert Net)";
            LEOPARD_WINTER(NET_DESERT);
            factions[] = {};
        };
        class Winter_green {
            displayName = "Winter (Green Net)";
            LEOPARD_WINTER(NET_GREEN);
            factions[] = {};
        };
        class Winter_jungle {
            displayName = "Winter (Jungle Net)";
            LEOPARD_WINTER(NET_JUNGLE);
            factions[] = {};
        };
        class Winter_winter {
            displayName = "Winter (Winter Net)";
            LEOPARD_WINTER(NET_WINTER);
            factions[] = {};
        };
        class Winter_bicolor {
            displayName = "Winter (Bicolor Net)";
            LEOPARD_WINTER(NET_BICOLOR);
            factions[] = {};
        };
        class Winter_woodland {
            displayName = "Winter (Woodland Net)";
            LEOPARD_WINTER(NET_WOODLAND);
            factions[] = {};
        };
    };
};
