#define IFV1_GREEN(CAMONET) \
textures[] = {\
    "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUkhk_CO.paa",\
    "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",\
    "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUkhk_CO.paa",\
    CAMONET,\
    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"\
};
#define IFV1_GREENHEX(CAMONET) \
textures[] = {\
    "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa",\
    "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa",\
    "A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa",\
    CAMONET,\
    "A3\armor_f\data\cage_csat_green_CO.paa"\
};
#define IFV1_HEX(CAMONET) \
           textures[] = {\
   "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",\
   "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",\
   "A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa",\
   CAMONET,\
   "A3\armor_f\data\cage_csat_co.paa"\
           };
#define IFV1_SAND(CAMONET) \
textures[] = {\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand1_co.paa",\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand2_co.paa",\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand3_co.paa",\
    CAMONET,\
    "A3\armor_f\data\cage_csat_co.paa"\
};

#define IFV1_SFIA(CAMONET) \
textures[] = {\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa1_co.paa",\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa2_co.paa",\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa3_co.paa",\
    CAMONET,\
    "A3\armor_f\data\cage_csat_co.paa"\
};

#define IFV1_TAKISTAN(CAMONET) \
textures[] = {\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_tk_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_tk_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\RCWS30_tk_CO.paa",\
    CAMONET,\
    "\A3\Armor_F\Data\cage_CSAT_CO.paa"\
};
#define IFV1_SEP(CAMONET) \
textures[] = {\
    "\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_01_Opf_CO.paa",\
    "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",\
    "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUkhk_CO.paa",\
    CAMONET,\
    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"\
};
#define IFV1_CDF(CAMONET) \
textures[] = {\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_CDF_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_CDF_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\RCWS30_CDF_CO.paa",\
    CAMONET,\
    "\A3_Atlas\Armor_F_Atlas\Data\cage_CDF_CO.paa",\
};

class TextureSources {
    class Green {
        displayName = "Green (Green Net)";
        IFV1_GREEN(NET_GREEN)
        factions[] = {};
    };
    class Green_desert {
        displayName = "Green (Desert Net)";
        IFV1_GREEN(NET_DESERT)
        factions[] = {};
    };
    class Green_jungle {
        displayName = "Green (Jungle Net)";
        IFV1_GREEN(NET_JUNGLE)
        factions[] = {};
    };
    class Green_winter {
        displayName = "Green (Winter Net)";
        IFV1_GREEN(NET_WINTER)
        factions[] = {};
    };
    class GreenHex {
        displayName = "Hex Green (Hex Green Net)";
        IFV1_GREENHEX(NET_GREENHEX)
        factions[] = {};
    };
    class GreenHex_desert {
        displayName = "Hex Green (Hex Ochre Net)";
        IFV1_GREENHEX(NET_HEX)
        factions[] = {};
    };
    class GreenHex_winter {
        displayName = "Hex Green (Winter Net)";
        IFV1_GREENHEX(NET_WINTER)
        factions[] = {};
    };
    class Hex {
        displayName = "Hex Ochre (Hex Green Net)";
        IFV1_HEX(NET_GREENHEX)
        factions[] = {};
    };
    class Hex_desert {
        displayName = "Hex Ochre (Hex Ochre Net)";
        IFV1_HEX(NET_HEX)
        factions[] = {};
    };
    class Hex_winter {
        displayName = "Hex Ochre (Winter Net)";
        IFV1_HEX(NET_WINTER)
        factions[] = {};
    };
    class Sand {
        displayName = "Sand (Desert Net)";
        IFV1_SAND(NET_DESERT)
        factions[] = {};
    };
    class Sand_green {
        displayName = "Sand (Green Net)";
        IFV1_SAND(NET_GREEN)
        factions[] = {};
    };
    class Sand_jungle {
        displayName = "Sand (Jungle Net)";
        IFV1_SAND(NET_JUNGLE)
        factions[] = {};
    };
    class Sand_winter {
        displayName = "Sand (Winter Net)";
        IFV1_SAND(NET_WINTER)
        factions[] = {};
    };
    class Sep_01 {
        displayName = "Separatist (Green Net)";
        IFV1_SEP(NET_GREEN)
        factions[] = {};
    };
    class Sep_01_desert {
        displayName = "Separatist (Desert Net)";
        IFV1_SEP(NET_DESERT)
        factions[] = {};
    };
    class Sep_01_jungle {
        displayName = "Separatist (Jungle Net)";
        IFV1_SEP(NET_JUNGLE)
        factions[] = {};
    };
    class Sep_01_winter {
        displayName = "Separatist (Winter Net)";
        IFV1_SEP(NET_WINTER)
        factions[] = {};
    };
    class SFIA {
        displayName = "Mudwalker (Desert Net)";
        IFV1_SFIA(NET_DESERT)
        factions[] = {};
    };
    class SFIA_green {
        displayName = "Mudwalker (Green Net)";
        IFV1_SFIA(NET_GREEN)
        factions[] = {};
    };
    class SFIA_jungle {
        displayName = "Mudwalker (Jungle Net)";
        IFV1_SFIA(NET_JUNGLE)
        factions[] = {};
    };
    class SFIA_winter {
        displayName = "Mudwalker (Winter Net)";
        IFV1_SFIA(NET_WINTER)
        factions[] = {};
    };
    class Takistan {
        displayName = "Hex Mixed (Hex Green Net)";
        IFV1_TAKISTAN(NET_GREENHEX)
        factions[] = {};
    };
    class Takistan_desert {
        displayName = "Hex Mixed (Hex Ochre Net)";
        IFV1_TAKISTAN(NET_HEX)
        factions[] = {};
    };
    class Takistan_winter {
        displayName = "Hex Mixed (Winter Net)";
        IFV1_TAKISTAN(NET_WINTER)
        factions[] = {};
    };
    class cdf {
        displayName = "CDF (Desert Net)";
        IFV1_CDF(NET_DESERT)
        factions[] = {};
    };
    class cdf_green {
        displayName = "CDF (Green Net)";
        IFV1_CDF(NET_GREEN)
        factions[] = {};
    };
    class cdf_jungle {
        displayName = "CDF (Jungle Net)";
        IFV1_CDF(NET_JUNGLE)
        factions[] = {};
    };
    class cdf_winter {
        displayName = "CDF (Winter Net)";
        IFV1_CDF(NET_WINTER)
        factions[] = {};
    };
};
