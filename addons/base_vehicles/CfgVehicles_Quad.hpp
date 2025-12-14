class Quadbike_01_base_F: Car_F {
    class TextureSources {
        class Black {
            displayName = "Black";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
        };
        class Blue {
            displayName = "Blue";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};
        };
        class Blufor {
            displayName = "Sand";
            factions[] = {};
            textures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
        };
        class Brown {
            displayName = "Brown";
            factions[] = {};
            textures[] = {"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_brown_CO.paa","\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_brown_CO.paa"};
        };
        class Green {
            displayName = "Green";
            factions[] = {};
            textures[] = {"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_RUkhk_CO.paa"};
        };
        class GreenHex {
            displayName = "Hex Woodland";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_ghex_CO.paa","\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_ghex_CO.paa"};
        };
        class Guerrilla_01 {
            displayName = "Guerrilla 01";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};
        };
        class Guerrilla_02 {
            displayName = "Guerrilla 02";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};
        };
        class Indep {
            displayName = "DAP Woodland";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};
        };
        class Jungle {
            displayName = "Jungle";
            factions[] = {};
            textures[] = {"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_jungle_CO.paa","\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_jungle_CO.paa"};
        };
        class LDF {
            displayName = "LDF Desert";
            factions[] = {};
            textures[] = {"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_EAF_CO.paa","\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_EAF_CO.paa"};
        };
        class Olive {
            displayName = "Olive";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa","\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"};
        };
        class Opfor {
            displayName = "Hex Ochre";
            factions[] = {};
            textures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};
        };
        class ForestRangers {
            displayName = "Forest Rangers";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Enoch\Quadbike_01\Data\Quadbike_01_ranger_CO.paa","\A3\Soft_F_Enoch\Quadbike_01\Data\Quadbike_01_wheel_ranger_CO.paa"};
        };
        class Red {
            displayName = "Red";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};
        };
        class Takistan {
            displayName = "Hex Mixed";
            factions[] = {};
            textures[] = {"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_tk_CO.paa","\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_tk_CO.paa"};
        };
        class White {
            displayName = "White";
            factions[] = {};
            textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            factions[] = {};
            textures[] = {"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_WHEX_CO.paa","\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_WHEX_CO.paa"};
        };
    };
};

class GCLASS(QuadBike): Quadbike_01_base_F {
    displayName = "Quad Bike";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 18;
    hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
};
