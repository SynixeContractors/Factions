class B_static_AT_F;
class GCLASS(Titan_AT): B_static_AT_F {
    displayName = "Titan AT";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Sand {
            displayName = "Sand";
            textures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa","\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"};
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Tropic";
            textures[] = {"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_01_CO.paa","\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_short_ghex_F_02_CO.paa"};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_INDP_co.paa","\a3\weapons_f_beta\launchers\titan\data\tubem_INDP_co.paa"};
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            textures[] = {"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_OPFOR_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_OPFOR_CO.paa"};
            factions[] = {};
        };
    };
};

class B_static_AA_F;
class GCLASS(Titan_AA): B_static_AA_F {
    displayName = "Titan AA";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Sand {
            displayName = "Sand";
            textures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa","\a3\weapons_f_beta\launchers\titan\data\tubel_co.paa"};
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Tropic";
            textures[] = {"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_01_CO.paa","\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_02_CO.paa"};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_01_co.paa","\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_02_co.paa"};
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            textures[] = {"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_OPFOR_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_OPFOR_CO.paa"};
            factions[] = {};
        };
    };
};
