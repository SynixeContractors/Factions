#define LSV_TEXTURES class TextureSources {\
        class Arid {\
            displayName = "Hex Ochre";\
            textures[] = {"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_arid_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"};\
            factions[] = {};\
        };\
        class OpFor {\
        /*FIXME: what is this named*/ \
            displayName = "Hex Ochre (Weathered)";\
            textures[] = {"\a3\soft_f_exp\lsv_02\data\csat_lsv_01_arid_co.paa","\a3\soft_f_exp\lsv_02\data\csat_lsv_02_arid_co.paa","\a3\soft_f_exp\lsv_02\data\csat_lsv_03_arid_co.paa"};\
            factions[] = {};\
        };\
        class Black {\
            displayName = "Black";\
            textures[] = {"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};\
            factions[] = {};\
        };\
        class Desert {\
            displayName = "Sand";\
            textures[] = {"\lxws\vehicles_1_f_lxws\LSV_02\data\LSV_02_ext_01_desert_CO.paa","\lxws\vehicles_1_f_lxws\LSV_02\data\LSV_02_ext_02_desert_CO.paa","\lxws\vehicles_1_f_lxws\LSV_02\data\LSV_02_ext_03_desert_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"};\
            factions[] = {};\
        };\
        class Green {\
            displayName = "Green";\
            textures[] = {"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_RUkhk_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_RUkhk_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};\
            factions[] = {};\
        };\
        class GreenHex {\
            displayName = "Hex Woodland";\
            textures[] = {"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};\
            factions[] = {};\
        };\
        class Takistan {\
            displayName = "Hex Mixed";\
            textures[] = {"\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_01_tk_CO.paa","\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_02_tk_CO.paa","\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_03_tk_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"};\
            factions[] = {};\
        };\
        class WoodlandHex {\
            displayName = "Hex Green";\
            textures[] = {"\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_01_WHEX_CO.paa","\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_02_WHEX_CO.paa","\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_03_WHEX_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};\
            factions[] = {};\
        };\
#ifdef TACU_USAGE\
        class Seven_Rings_East {\
            displayName = "Sand (Weathered)";\
            textures[] = {"\x\tacu\addons\assets\data\lsvmkii\lsv_01_sre_co.paa","\x\tacu\addons\assets\data\lsvmkii\lsv_02_sre_co.paa","\x\tacu\addons\assets\data\lsvmkii\lsv_03_sre_co.paa","\a3\weapons_f_tank\launchers\vorona\data\vorona_f_co.paa","\a3\weapons_f_tank\launchers\vorona\data\vorona_f_co.paa"};\
            factions[] = {};\
        };\
#endif\
    };\


class O_LSV_02_unarmed_F;
class GCLASS(LSV) : O_LSV_02_unarmed_F {
    displayName = "LSV (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    LSV_TEXTURES
};

class O_LSV_02_armed_F;
class GCLASS(LSV_minigun) : O_LSV_02_armed_F {
    displayName = "LSV (Minigun)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    LSV_TEXTURES
};

class O_LSV_02_AT_F;
class GCLASS(LSV_metis) : O_LSV_02_AT_F {
    displayName = "LSV (Metis-M)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    LSV_TEXTURES
};
