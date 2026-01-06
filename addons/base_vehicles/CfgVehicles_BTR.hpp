ADD_CAMO_EVENT_HANDLER(Aegis_O_A_APC_Wheeled_04_export_F,APC_Wheeled_04_export_base_F);

class GCLASS(BTR): Aegis_O_A_APC_Wheeled_04_export_F {
    displayName = "BTR-100A";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 300;
    class EventHandlers: EventHandlers {
        postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
    };
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_co.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_sand_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_sand_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_sand_co.paa"
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_hex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_hex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_hex_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_ghex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ghex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_ghex_co.paa"
            };
            factions[] = {};
        };
        class Indep {
            displayName = "DAP Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class SFIA {
            displayName = "Mudwalker";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_SFIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_SFIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_SFIA_co.paa"
            };
            factions[] = {};
        };
        class Loyalist {
            displayName = "DAP Green (Graffiti)";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_loyalist_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_01 {
            displayName = "Guerrilla 01";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_02 {
            displayName = "Guerrilla 02";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_2_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_2_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_2_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_03 {
            displayName = "Guerrilla 03";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_3_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_3_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_3_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_04 {
            displayName = "Blotches (Desert)";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_Tura_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Tura_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_Tura_co.paa"
            };
            factions[] = {};
        };
        class ardistan {
            displayName = "Ardistan";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_ardi_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ardi_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\btr100a_turret_ardi_co.paa"
            };
            factions[] = {};
        };
        class UNO {
            displayName = "UN";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_UNO_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_UNO_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\btr100a_turret_uno_co.paa"
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_WHEX_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_WHEX_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\btr100a_turret_WHEX_co.paa"
            };
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_TK_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_TK_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\btr100a_turret_tk_co.paa"
            };
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatist 01";
            textures[] = {
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_Chdkz_CO.paa",
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Chdkz_CO.paa",
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_chdkz_CO.paa"
            };
            factions[] = {};
        };
        class Para_01 {
            displayName = "Paramilitary";
            textures[] = {
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_paramilitary_co.paa",
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_paramilitary_co.paa",
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_Para_co.paa"
            };
            factions[] = {};
        };
        };
};

ADD_CAMO_EVENT_HANDLER(O_R_APC_Wheeled_04_cannon_F,APC_Wheeled_04_base_F);
class GCLASS(BTR_IFV): O_R_APC_Wheeled_04_cannon_F {
    displayName = "BTR-100K (Bumergang-BM)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 300;
    class EventHandlers: EventHandlers {
        postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
    };
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_tow_RUkhk_CO.paa",
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_sand_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_sand_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_tow_sand_CO.paa",
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_hex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_hex_CO.paa",
            "lxws\vehicles_1_f_lxws\apc_tracked_02\Data\apc_tracked_02_30mm_hex_co.paa",
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_ghex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ghex_CO.paa",
            "lxws\vehicles_1_f_lxws\apc_tracked_02\Data\apc_tracked_02_30mm_ghex_co.paa",
            };
            factions[] = {};
        };
        class SFIA {
            displayName = "Mudwalker";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_SFIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_SFIA_CO.paa",
            "lxWS\vehicles_1_f_lxws\APC_Tracked_02\data\APC_Tracked_02_30mm_sfia_co.paa",
            };
            factions[] = {};
        };
        class Loyalist {
            displayName = "DAP Green (Graffiti)";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_loyalist_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_02 {
            displayName = "Guerrilla 02";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_2_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_2_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_2_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_04 {
            displayName = "Blotches (Desert)";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_Tura_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Tura_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_tow_sand_CO.paa",
            };
            factions[] = {};
        };
        class Guerrilla_05 {
            displayName = "Guerrilla 05";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_Tura_2_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Tura_2_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_Tura_2_co.paa"
            };
            factions[] = {};
        };
        class ardistan {
            displayName = "Ardistan";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_ardi_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ardi_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\data\apc_tracked_02_30mm_ard_CO.paa",
            };
            factions[] = {};
        };
        class UNO {
            displayName = "UN";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_UNO_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_UNO_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_tow_UNO_CO.paa",
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_WHEX_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_WHEX_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\data\apc_tracked_02_30mm_WHEX_CO.paa",
            };
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_TK_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_TK_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_tow_TK_CO.paa",
            };
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatist 01";
            textures[] = {
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_Chdkz_CO.paa",
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Chdkz_CO.paa",
            "\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_tow_chdkz_co.paa",
            };
            factions[] = {};
        };
    };
};

ADD_CAMO_EVENT_HANDLER(O_R_APC_Wheeled_04_cannon_v2_F,APC_Wheeled_04_base_v2_F);
class GCLASS(BTR_SPG): O_R_APC_Wheeled_04_cannon_v2_F {
    displayName = "BTR-100SU (Sprut-SD)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 300;
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_sprut_body_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_co.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Sep_01 {
            displayName = "Separatists";
            textures[] = {
            "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_Chdkz_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_co.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_sand_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_sand_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_sand_co.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_Hex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Hex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_hex_co.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_Ghex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Ghex_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_ghex_co.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Indep {
            displayName = "DAP Green";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class Loyalist {
            displayName = "DAP Green (Graffiti)";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_loyalist_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class SFIA {
            displayName = "Mudwalker";
            textures[] = {
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_SFIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_SFIA_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_SFIA_co.paa"
            };
            factions[] = {};
        };
        class ardistan {
            displayName = "Ardistan";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_ardi_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ardi_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_ardi_co.paa"
            };
        };
        class WoodlandHex {
            displayName = "Hex Woodland";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_WHEX_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_WHEX_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_WHEX_co.paa"
            };
            factions[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_TK_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_TK_CO.paa",
            "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_TK_co.paa"
            };
            factions[] = {};
        };
    };
};
