class Pickup_01_base_rf;
class GCLASS(Ram): Pickup_01_base_rf {
    displayName = "Ram 1500";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_covered_base_rf;
class GCLASS(Ram_Covered): Pickup_covered_base_rf {
    displayName = "Ram 1500 (Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_hmg_base_rf;
class GCLASS(Ram_HMG): Pickup_01_hmg_base_rf {
    displayName = "Ram 1500 (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_aat_base_rf;
class GCLASS(Ram_AA): Pickup_01_aat_base_rf {
    displayName = "Ram 1500 (AA)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_rcws_base_rf;
class GCLASS(Ram_RCWS): Pickup_01_rcws_base_rf {
    displayName = "Ram 1500 (RCWS)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_minigun_base_rf;
class GCLASS(Ram_M134): Pickup_01_minigun_base_rf {
    displayName = "Ram 1500 (M134)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_comms_base_rf;
class GCLASS(Ram_Comms): Pickup_comms_base_rf {
    displayName = "Ram 1500 (Comms)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_mrl_base_rf;
class GCLASS(Ram_MRL): Pickup_01_mrl_base_rf {
    displayName = "Ram 1500 (MRL)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_fuel_base_rf;
class GCLASS(Ram_Fuel): Pickup_fuel_base_rf {
    displayName = "Ram 1500 (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_mmg_base_rf;
class GCLASS(Ram_MMG): Pickup_01_mmg_base_rf {
    displayName = "Ram 1500 (MMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Aegis_Pickup_01_AT_base_RF;
class GCLASS(Ram_AT): Aegis_Pickup_01_AT_base_RF {
    displayName = "Ram 1500 (AT)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    #include "textures\Ram.hpp"
};

class Pickup_01_Rocket_base_rf;
class GCLASS(Ram_Rocket): Pickup_01_Rocket_base_rf {
    displayName = "Ram 1500 (Rocket)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 98;
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_white_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"};
            factions[] = {};
        };
        class Gray {
            displayName = "Grey";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_grey_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_grey_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Red {
            displayName = "Red";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_red_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_red_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_blue_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_blue_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class EAF {
            displayName = "LDF (Geo Woodland)";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ldf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ldf_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class ParkRanger {
            displayName = "Forest Rangers";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_livonian_ranger_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_livonian_ranger_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_01_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_01_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_01_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerrilla 02";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_02_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_02_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_02_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerrilla 03";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_03_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_03_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_03_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_04 {
            displayName = "Guerrilla 04";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_04_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_04_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_04_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_05 {
            displayName = "Guerrilla 05";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_05_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_05_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_05_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_06 {
            displayName = "Guerrilla 06";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_06_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_06_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_06_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_07 {
            displayName = "Guerrilla 07";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_07_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_07_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_07_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_09 {
            displayName = "Guerrilla 09";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_09_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_09_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_09_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_08 {
            displayName = "Guerrilla 08";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_08_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_08_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_tura_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_08_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Guerilla_10 {
            displayName = "Guerrilla 10";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_sfia_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_sfia_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_sfia_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class AAF {
            displayName = "DAP Woodland";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_aaf_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_aaf_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_aaf_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Dazzle {
            displayName = "Dazzle Dark";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ctrg_pacific_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_pacific_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ctrg_pacific_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Dazzle_Arid {
            displayName = "Dazzle Light";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ctrg_arid_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_ctrg_arid_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Urban {
            displayName = "DAP Urban";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_urban_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_urban_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_tan_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_tan_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_green_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_green_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Yellow {
            displayName = "Yellow";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_yellow_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_yellow_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Orange {
            displayName = "Orange";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_orange_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_blue_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_orange_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Daltgreen {
            displayName = "Daltgreen";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_daltgreen_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_daltgreen_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class ION {
            displayName = "ION";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_ion_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_black_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class GENDARMERIE {
            displayName = "Gendarmerie";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_gendarmerie_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_gendarmerie_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_gendarmerie_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Argana_Royal {
            displayName = "Argana (Royal)";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_argana_royal_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_argana_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_argana_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_argana_royal_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class NATO {
            displayName = "Sand";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_nato_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_nato_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class NATO_P {
            displayName = "Green";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_nato_pacific_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_pacific_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_nato_pacific_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class CSAT {
            displayName = "Hex Ochre";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_csat_hex_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_csat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_csat_hex_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class CSAT_Pacific {
            displayName = "Hex Tropic";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_csat_ghex_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_pacific_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_csat_ghex_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_brown_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_brown_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_olive_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class CivService {
            displayName = "Island Port Authority";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_port_authority_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_white_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_olive_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_port_authority_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class Cruiser {
            displayName = "Cruiser";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_cougarcruiser_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_cougarcruiser_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
        class UNA {
            displayName = "UNA";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_una_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_water_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class MTP_Desert {
            displayName = "MTP (Desert)";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_mtp_desert_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_argana_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_mtp_desert_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Tundra {
            displayName = "Tundra";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_tundra_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_tundra_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Digital_desert {
            displayName = "Digital (Desert)";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_digital_desert_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_argana_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_digital_desert_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"};
            factions[] = {};
        };
        class Astra {
            displayName = "Astra";
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_astra_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_black_tank_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","lxrf\weapons_rf\dynamicloadout\data\missile_Tratnyr_black_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_white_co.paa"};
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_aat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_launcher.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"};
            factions[] = {};
        };
    };
};
