#define TEXTURES class TextureSources: TextureSources { \
        RESET_FACTIONS(Black); \
        RESET_FACTIONS(Gendarmerie); \
        class GreenHex: GreenHex { \
            displayName = "Hex Woodland"; \
            factions[] = {}; \
            textures[] = {"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa","a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_01_ghex_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa","A3\armor_f\data\cage_csat_green_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_ghex_CO.paa"}; \
        }; \
        class Hex: Hex { \
            displayName = "Hex Ochre"; \
            factions[] = {}; \
            textures[] = {"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa","a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_01_hex_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_hex_CO.paa"}; \
        }; \
        RESET_FACTIONS(HIMF); \
        class MarineHex: MarineHex { \
            displayName = "Hex Urban"; \
            factions[] = {}; \
            textures[] = {"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_OHEX_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OHEX_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\Turret_OHEX_CO.paa","\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"}; \
        }; \
        RESET_FACTIONS(Sand); \
        class Sand_Desert: Sand_Desert { \
            displayName = "Sand (Desert Net)"; \
            factions[] = {}; \
            textures[] = {"lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_01_nato_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_02_nato_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_01_nato_CO.paa","lxws\vehicles_f_lxws\data\camonet_NATO_flat_desert_CO.paa","A3\armor_f\data\cage_sand_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_nato_CO.paa"}; \
        }; \
        class SFIA: SFIA { \
            displayName = "Mudwalker"; \
            factions[] = {}; \
            textures[] = {"lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_01_sfia_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_02_sfia_CO.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_01_sfia_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa","lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_sfia_CO.paa"}; \
        }; \
        class Takistan: Takistan { \
            displayName = "Hex Mixed"; \
            factions[] = {}; \
            textures[] = {"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_tk_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_tk_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_adds_01_tk_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_adds_02_tk_CO.paa"}; \
        }; \
        RESET_FACTIONS(UN_WHITE); \
        class WoodlandHex: WoodlandHex { \
            displayName = "Hex Green"; \
            factions[] = {}; \
            textures[] = {"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_WHEX_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_WHEX_CO.paa","\A3_Atlas\Soft_F_Atlas\MRAP_02\Data\Turret_WHEX_CO.paa","\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"}; \
        }; \
    }

class APC_Wheeled_02_base_F: Wheeled_APC_F {};
class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F {
    class TextureSources: TextureSources {
        class Black;
        class Gendarmerie;
        class GreenHex;
        class Hex;
        class HIMF;
        class MarineHex;
        class Sand;
        class Sand_Desert;
        class SFIA;
        class Takistan;
        class UN_WHITE;
        class WoodlandHex;
    };
};

// Unarmed
class APC_Wheeled_02_unarmed_base_lxws: APC_Wheeled_02_base_v2_F {
    TEXTURES;
};
class GCLASS(OtokarUnarmed): APC_Wheeled_02_unarmed_base_lxws {
    displayName = "Otokar Cobra II (Unarmed)";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
};

// HMG
class APC_Wheeled_02_hmg_base_lxws: APC_Wheeled_02_base_v2_F {
    TEXTURES;
};
class GCLASS(OtokarHMG): APC_Wheeled_02_hmg_base_lxws {
    displayName = "Otokar Cobra II (HMG)";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
};

// RCWS
class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
    TEXTURES;
};
class GCLASS(OtokarRCWS): O_APC_Wheeled_02_rcws_v2_F {
    displayName = "Otokar Cobra II (RCWS)";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
};
