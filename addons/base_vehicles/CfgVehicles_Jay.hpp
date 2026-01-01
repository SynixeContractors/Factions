class C_Van_01_transport_F;
class GCLASS(Jay_Flatbed): C_Van_01_transport_F {
    displayName = "Jay (Flatbed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {};
        };
        class Red {
            displayName = "Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_02 {
            displayName = "Guerrilla 02";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_03 {
            displayName = "Guerrilla 03";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_04 {
            displayName = "Guerrilla 04";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_05 {
            displayName = "Guerrilla 05";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_06 {
            displayName = "Guerrilla 06";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_07 {
            displayName = "Guerrilla 07";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Guerilla_08 {
            displayName = "Guerrilla 08";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
        class Brown {
            displayName = "Brown";
            textures[] = {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};
            materials[] = {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            factions[] = {"IND_C_F"};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};
            materials[] = {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            factions[] = {"IND_C_F"};
        };
        class Insurgent_01 {
            displayName = "Insurgent 01";
            textures[] = {"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS01_CO.paa","\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS01_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};
            faction[] = {"IND_T_F"};
        };
        class Insurgent_02 {
            displayName = "Insurgent 02";
            textures[] = {"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS02_CO.paa","\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS02_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};
            faction[] = {"IND_T_F"};
        };
        class Insurgent_03 {
            displayName = "Insurgent 03";
            textures[] = {"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS03_CO.paa","\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS03_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};
            faction[] = {"IND_T_F"};
        };
        class Insurgent_04 {
            displayName = "Insurgent 04";
            textures[] = {"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS04_CO.paa","\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS04_CO.paa","\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"};
            faction[] = {"IND_T_F"};
        };
        class Insurgent_05 {
            displayName = "Insurgent 05";
            textures[] = {"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS05_CO.paa","\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS05_CO.paa","\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"};
            faction[] = {"IND_T_F"};
        };
        class Insurgent_06 {
            displayName = "Insurgent 06";
            textures[] = {"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS06_CO.paa","\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS06_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};
            faction[] = {"IND_T_F"};
        };
    };
};

class C_Van_01_box_F;
class GCLASS(Jay_Box): C_Van_01_box_F {
    displayName = "Jay (Box)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
            faction[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
            faction[] = {};
        };
        class Red {
            displayName = "Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
            faction[] = {};
        };
        class WhiteBox {
            DLC = "ws";
            displayName = "White Box";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\lxWS\vehicles_1_f_lxws\Van_01\data\Van_01_adds_white_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {};
        };
        class YellowBlack {
            DLC = "ws";
            displayName = "Yellow";
            textures[] = {"\lxWS\vehicles_1_f_lxws\Van_01\data\Van_01_ext_yellow_CO.paa","\a3\soft_f_gamma\van_01\data\Van_01_adds_CO.paa","\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            materials[] = {"\a3\soft_f_gamma\van_01\data\van_01_ext.rvmat","\a3\soft_f_gamma\van_01\data\van_01_adds.rvmat","\a3\soft_f_gamma\van_01\data\van_01_int_base.rvmat"};
            faction[] = {};
        };
    };
};

class C_Van_01_fuel_F;
class GCLASS(Jay_Fuel): C_Van_01_fuel_F {
    displayName = "Jay (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 140;
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
