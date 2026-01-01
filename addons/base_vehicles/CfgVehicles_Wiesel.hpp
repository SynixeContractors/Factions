class I_LT_01_cannon_F;
class GCLASS(Wiesel): I_LT_01_cannon_F {
    displayName = "Wiesel (Autocannon)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Indep_01 {
            displayName = "DAP Green (DAP Green Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                "A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {};
        };
        class Indep_02 {
            displayName = "DAP Green (DAP Jungle Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "DAP Green (DAP Desert Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            factions[] = {};
        };
        class Indep_Olive {
            displayName = "Olive (Woodland Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_desert {
            displayName = "Olive (Desert Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_jungle {
            displayName = "Olive (Jungle Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand (Desert Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Cannon_sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_jungle {
            displayName = "Sand (Jungle Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Cannon_sand_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_woodland {
            displayName = "Sand (Woodland Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Cannon_sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe {
            displayName = "Green (Jungle Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wiesel_cannon_ee_co.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_desert {
            displayName = "Green (Desert Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wiesel_cannon_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_woodland {
            displayName = "Green (Woodland Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wiesel_cannon_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
    };
};

class I_LT_01_AA_F;
class GCLASS(Wiesel_SAM): I_LT_01_AA_F {
    displayName = "Wiesel (SAM)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Indep_01 {
            displayName = "DAP Green (DAP Green Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                "A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {};
        };
        class Indep_02 {
            displayName = "DAP Green (DAP Jungle Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "DAP Green (DAP Desert Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            factions[] = {};
        };
        class Indep_Olive {
            displayName = "Olive (Woodland Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_desert {
            displayName = "Olive (Desert Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_jungle {
            displayName = "Olive (Jungle Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand (Desert Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_jungle {
            displayName = "Sand (Jungle Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_woodland {
            displayName = "Sand (Woodland Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe {
            displayName = "Green (Jungle Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_desert {
            displayName = "Green (Desert Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_woodland {
            displayName = "Green (Woodland Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
    };
};

class I_LT_01_AT_F;
class GCLASS(Wiesel_ATGM): I_LT_01_AT_F {
    displayName = "Wiesel (ATGM)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Indep_01 {
            displayName = "DAP Green (DAP Green Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                "A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {};
        };
        class Indep_02 {
            displayName = "DAP Green (DAP Jungle Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "DAP Green (DAP Desert Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            factions[] = {};
        };
        class Indep_Olive {
            displayName = "Olive (Woodland Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_desert {
            displayName = "Olive (Desert Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_jungle {
            displayName = "Olive (Jungle Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand (Desert Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_jungle {
            displayName = "Sand (Jungle Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_woodland {
            displayName = "Sand (Woodland Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe {
            displayName = "Green (Jungle Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_desert {
            displayName = "Green (Desert Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_woodland {
            displayName = "Green (Woodland Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
    };
};
class I_LT_01_scout_F;
class GCLASS(Wiesel_Radar): I_LT_01_scout_F {
    displayName = "Wiesel (Radar)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Indep_01 {
            displayName = "DAP Green (DAP Green Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                "A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {};
        };
        class Indep_02 {
            displayName = "DAP Green (DAP Jungle Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "DAP Green (DAP Desert Net)";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            factions[] = {};
        };
        class Indep_Olive {
            displayName = "Olive (Woodland Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_desert {
            displayName = "Olive (Desert Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Indep_Olive_jungle {
            displayName = "Olive (Jungle Net)";
            textures[] = {
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
                "\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand (Desert Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Radar_sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_jungle {
            displayName = "Sand (Jungle Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Radar_sand_CO.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        class Sand_woodland {
            displayName = "Sand (Woodland Net)";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Radar_sand_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_Sand_CO.paa"
            };
            factions[] = {};
        };
        // This technically doesnt exist but idk texture works okayish
        class Eastern_Europe {
            displayName = "Green (Jungle Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_desert {
            displayName = "Green (Desert Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe_woodland {
            displayName = "Green (Woodland Net)";
            textures[] = {
                "\x\tacu\addons\assets\data\wiesel\wiesel_main_ee_co.paa",
                "\x\tacu\addons\assets\data\wiesel\wieseil_at_ee_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                "\A3\Armor_F\Data\cage_olive_CO.paa"
            };
            factions[] = {};
        };
    };
};
