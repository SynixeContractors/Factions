ADD_CAMO_EVENT_HANDLER(Aegis_B_Heli_Attack_03_F,Heli_Attack_03_base_F);
class GCLASS(Apache): Aegis_B_Heli_Attack_03_F {
    displayName = "AH-64E Apache";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1600;
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class BAF {
            displayName = "BAF";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_CO.paa"};
            factions[] = {};
        };
        class BAF_Old {
            displayName = "BAF (Legacy)";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_BAF_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_BAF_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_BAF_CO.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "DAP Green";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_INDP_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_INDP_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_INDP_CO.paa"};
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_sand_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_sand_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_sand_CO.paa"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_green_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_green_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_green_CO.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_black_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_black_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_black_CO.paa"};
            factions[] = {};
        };
        class Marar {
            displayName = "Marar";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_Marar_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_Marar_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_Marar_CO.paa"};
            factions[] = {};
        };
    };
};
