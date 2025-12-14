class I_MBT_03_cannon_F;
class GCLASS(Leopard2) : I_MBT_03_cannon_F {
    displayName = "Leopard 2A4M+";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        delete ADF_01;
        delete Desert_01;
        class EAF_01 {
            displayName = "LDF (Geo Woodland)";
            factions[] = {};
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_CO.paa",
                "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
            };
        };
        class EAF_01_desert {
            displayName = "LDF (Geo Woodland, Desert Net)";
            factions[] = {};
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
        };
        class EAF_Arid {
            displayName = "LDF (Arid)";
            factions[] = {};
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_arid_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_arid_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_arid_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
        };
        class EAF_Arid_jungle {
            displayName = "LDF (Arid, Jungle Net)";
            factions[] = {};
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_arid_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_arid_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_arid_CO.paa",
                "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
            };
        };
        class Indep_01 {
            displayName = "DAP Green (DAP Green Net)";
            factions[] = {};
            textures[] = {
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
            };
        };
        class Indep_02 {
            displayName = "DAP Green (DAP Jungle Net)";
            factions[] = {};
            textures[] = {
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa"
            };
        };
        class Indep_03 {
            displayName = "DAP Green (DAP Desert Net)";
            factions[] = {};
            textures[] = {
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
                "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
            };
        };
        class KZG_01 {
            displayName = "Desert Digital (Desert Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_kzg_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_kzg_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_kzg_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
        };
        class KZG_01_jungle {
            displayName = "Desert Digital (Jungle Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_kzg_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_kzg_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_kzg_CO.paa",
                "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
            };
        };
        class KZG_01_woodland {
            displayName = "Desert Digital (Woodland Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_kzg_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_kzg_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_kzg_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
        class Olive_01 {
            displayName = "Green (Woodland Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
        class Olive_01_jungle {
            displayName = "Green (Jungle Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
                "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
            };
        };
        class Olive_01_desert {
            displayName = "Green (Desert Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
        };
        class Olive_01_desert_alt {
            displayName = "Green (Desert Alt Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
                "\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa"
            };
        };
        class Sand_01 {
            displayName = "Sand (Desert Alt Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_CO.paa",
                "\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa"
            };
        };
        class Sand_01_jungle {
            displayName = "Sand (Jungle Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_CO.paa",
                "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
            };
        };
        class Sand_01_woodland {
            displayName = "Sand (Woodland Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
        class Sand_01_desert {
            displayName = "Sand (Desert Net)";
            factions[] = {};
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
        };
        delete Woodland_01;
    };
};
