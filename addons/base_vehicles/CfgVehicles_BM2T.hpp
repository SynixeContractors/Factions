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

class O_APC_Tracked_02_cannon_F;
class GCLASS(BM2_IFV1): O_APC_Tracked_02_cannon_F {
    displayName = "BM-2T (RCWS-30)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "textures/BM2_IFV1.hpp"
};

#define IFV2_ARDISTAN(CAMONET) \
textures[] = {\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ard_CO.paa",\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ard_CO.paa",\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\apc_tracked_02_ext_03_RUkhk_co.paa",\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\data\apc_tracked_02_30mm_ard_CO.paa",\
  CAMONET,\
  "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"\
};
#define IFV2_GREEN(CAMONET) \
textures[] = {\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUkhk_CO.paa",\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\apc_tracked_02_ext_03_RUkhk_co.paa",\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_30mm_RUkhk_CO.paa",\
  CAMONET,\
  "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"\
};
#define IFV2_GREENHEX(CAMONET) \
textures[] = {\
  "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa",\
  "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_ext_03_ghex_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_30mm_ghex_co.paa",\
  CAMONET,\
  "A3\armor_f\data\cage_csat_green_CO.paa"\
};
#define IFV2_GREY(CAMONET)\
textures[] = {\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_ext_01_black_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_ext_02_black_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_ext_03_black_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_30mm_black_co.paa",\
  CAMONET,\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\cage_black_CO.paa"\
};
#define IFV2_HEX(CAMONET)\
textures[] = {\
  "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",\
  "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_ext_03_hex_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_30mm_hex_co.paa",\
  CAMONET,\
  "A3\armor_f\data\cage_csat_co.paa"\
};

#define IFV2_SFIA(CAMONET)\
textures[] = {\
  "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa1_co.paa",\
  "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_africa2_co.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_ext_03_sfia_CO.paa",\
  "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_30mm_sfia_co.paa",\
  CAMONET,\
  "A3\armor_f\data\cage_csat_co.paa"\
};
#define IFV2_SEP(CAMONET) \
textures[] = {\
  "\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_01_Opf_CO.paa",\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",\
  "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\apc_tracked_02_ext_03_RUkhk_co.paa",\
  "\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_tow_chdkz_co.paa",\
  CAMONET,\
  "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"\
};
#define IFV2_WOODLANDHEX(CAMONET)\
textures[] = {\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_whex_CO.paa",\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_whex_CO.paa",\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\data\apc_tracked_02_ext_03_WHEX_CO.paa",\
  "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\data\apc_tracked_02_30mm_WHEX_CO.paa",\
  CAMONET,\
  "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"\
};
#define IFV2_SAND(CAMONET) \
textures[] = {\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand1_co.paa",\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand2_co.paa",\
    "lxws\vehicles_f_lxws\data\APC_Tracked_02\kamysh_sand3_co.paa",\
    "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_tow_sand_CO.paa",\
    CAMONET,\
    "A3\armor_f\data\cage_csat_co.paa"\
};
#define IFV2_TAKISTAN(CAMONET) \
textures[] = {\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_tk_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_tk_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_tk_CO.paa",\
    "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_tow_TK_CO.paa",\
    CAMONET,\
    "\A3\Armor_F\Data\cage_CSAT_CO.paa"\
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
    #include "textures/BM2_IFV2.hpp"
};

class O_R_APC_Tracked_02_medical_F;
class GCLASS(BM2_unarmed): O_R_APC_Tracked_02_medical_F {
    displayName = "BM-2P (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        //unarmed doesnt take camo nets
        class Green {
            displayName = "Green";
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_medevac_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                "",
                "",
                ""
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_medical_whex_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_whex_CO.paa",
                "",
                "",
                ""
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
    #include "textures/BM2_AA.hpp"
};
