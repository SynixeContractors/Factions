class C_Van_01_fuel_F;
class GCLASS(FuelTruck): C_Van_01_fuel_F {
    displayName = "Fuel Truck";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Black {
            displayName = "Black & Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
            faction[] = {};
        };
        class White {
            displayName = "White & Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
            faction[] = {};
        };
        class Red {
            displayName = "Red & Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
            faction[] = {};
        };
        class Black_v2 {
            displayName = "Black & Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_red_CO.paa"};
            faction[] = {};
        };
        class White_v2 {
            displayName = "White & Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_red_CO.paa"};
            faction[] = {};
        };
        class Red_v2 {
            displayName = "Red & Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_red_CO.paa"};
            faction[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerllia (Green)";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};
            faction[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerllia (White)";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};
            faction[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerllia (Brown)";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};
            faction[] = {};
        };
    };
};
