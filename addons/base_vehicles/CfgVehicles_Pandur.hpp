class I_APC_Wheeled_03_cannon_F;
class GCLASS(Pandur): I_APC_Wheeled_03_cannon_F {
    displayName = "Pandur II";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    class TextureSources {
        class Indep {
            displayName = "DAP Woodland";
            textures[] = {"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa","A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa","A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa","A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {};
        };
        class Indep_02 {
            displayName = "DAP Woodland (Jungle Net)";
            textures[] = {"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_INDP_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_INDP_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa","\A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa","\A3\Armor_F\Data\cage_AAF_CO.paa"};
            factions[] = {};
        };
        class Indep_03 {
            displayName = "DAP Woodland (Desert Net)";
            textures[] = {"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_INDP_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_INDP_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa","\A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","\A3\Armor_F\Data\cage_AAF_CO.paa"};
            factions[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerilla (Woodland)";
            textures[] = {"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_01_CO.paa","A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_01_CO.paa","A3\Data_F_Tacops\data\RCWS30_IG_01_CO.paa","A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_01_CO.paa","A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
            factions[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerilla (Desert)";
            textures[] = {"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa","A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa","A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa","A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa","A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa","A3\armor_f\data\cage_sand_co.paa"};
            factions[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerilla (Jungle)";
            textures[] = {"\A3\Data_F_Tacops\Data\APC_Wheeled_03_Ext_IG_03_CO.paa","\A3\Data_F_Tacops\Data\APC_Wheeled_03_Ext2_IG_03_CO.paa","\A3\Data_F_Tacops\Data\RCWS30_IG_03_CO.paa","\A3\Data_F_Tacops\Data\APC_Wheeled_03_Ext_alpha_IG_03_CO.paa","\A3_Aegis\Armor_F_Aegis\Data\camonet_AAF_FIA_green_CO.paa","\A3\Armor_F\Data\cage_G3_CO.paa"};
            factions[] = {};
        };
        class Sand_01 {
            displayName = "Sand";
            textures[] = {"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa","\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa","\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa","\A3\Armor_F\Data\cage_sand_CO.paa"};
            factions[] = {};
        };
        class Olive_01 {
            displayName = "Olive";
            textures[] = {"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_olive_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_olive_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_olive_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa","\A3\Armor_F\Data\camonet_NATO_Green_CO.paa","\A3\Armor_F\Data\cage_olive_CO.paa"};
            factions[] = {};
        };
        class Karzeg_01 {
            displayName = "Khaybaran";
            textures[] = {"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_kzg_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_kzg_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_kzg_CO.paa","\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_kzg_CO.paa","\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa","\A3\Armor_F\Data\cage_sand_CO.paa"};
            factions[] = {};
        };
        delete Woodland_01;
        delete Desert_01;
    };
};
