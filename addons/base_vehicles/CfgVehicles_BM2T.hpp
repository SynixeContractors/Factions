#define NET_GREEN "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
#define NET_HEX "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
#define NET_WINTER "go_data_winter\skins\data\go_camonet_white_co.paa"
#define NET_JUNGLE "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
#define NET_DESERT "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"

class O_APC_Tracked_02_cannon_F;
class GCLASS(BM2_IFV1): O_APC_Tracked_02_cannon_F {
    displayName = "BM-2T (RCWS-30)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green";
            textures[] = {
                "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa",
                "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa",
                "A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
                "A3\armor_f\data\cage_csat_green_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {
                "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand1_co.paa",
                "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand2_co.paa",
                "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand3_co.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                "A3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatist";
            textures[] = {
                "\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_01_Opf_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class SFIA {
            displayName = "Mudwalker";
            textures[] = {
                "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa1_co.paa",
                "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa2_co.paa",
                "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa3_co.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                "A3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_tk_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_tk_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\RCWS30_tk_CO.paa",
                "\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_CSAT_CO.paa"
            };
            factions[] = {};
        };
    };
};

class O_APC_Tracked_02_30mm_lxWS;
class GCLASS(BM2_IFV2):  O_APC_Tracked_02_30mm_lxWS {
    displayName = "BM-2K (Bumergang-BM)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUkhk_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\apc_tracked_02_ext_03_RUkhk_co.paa",
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_30mm_RUkhk_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
    };
};

class O_APC_Tracked_02_AA_F;
class GCLASS(BM2_AA): O_APC_Tracked_02_AA_F {
    displayName = "BM-2PVO (ZSU-35)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUkhk_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_RUkhk_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
              "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
    };
};
