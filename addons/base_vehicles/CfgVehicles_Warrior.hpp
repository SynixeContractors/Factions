class I_APC_tracked_03_cannon_v2_F;
class GCLASS(Warrior): I_APC_tracked_03_cannon_v2_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "FV510 Warrior";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    class TextureSources {
        class Indep_01 {
            displayName = "DAP Woodland";
            textures[] = {"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa","A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {};
        };
        class Indep_02 {
            displayName = "DAP Woodland (Jungle Camo Net)";
            textures[] = {"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext_INDP_CO.paa","\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext2_INDP_CO.paa","\A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa","\A3\Armor_F\Data\cage_AAF_CO.paa"};
            factions[] = {};
        };
        class Indep_03 {
            displayName = "DAP Woodland (Desert Camo Net)";
            textures[] = {"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext_INDP_CO.paa","\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext2_INDP_CO.paa","\A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","\A3\Armor_F\Data\cage_AAF_CO.paa"};
            factions[] = {};
        };
        class EAF_01 {
            displayName = "LDF (Geo Woodland)";
            textures[] = {"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa","A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa","A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa","A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"};
            factions[] = {};
        };
        class Sand_01 {
            displayName = "Sand";
            textures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_CO.paa","\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_CO.paa","\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa","\A3\Armor_F\Data\cage_sand_CO.paa"};
            factions[] = {};
        };
        class Olive_01 {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa","\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_BAF_Green_CO.paa","\A3\Armor_F\Data\cage_olive_CO.paa"};
            factions[] = {};
        };
        class EAF_Arid {
            displayName = "LDF (Arid)";
            textures[] = {"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_eaf_arid_co.paa","\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_eaf_arid_co.paa","\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa","\A3\Armor_F\Data\cage_sand_CO.paa"};
            factions[] = {};
        };
    };
};
