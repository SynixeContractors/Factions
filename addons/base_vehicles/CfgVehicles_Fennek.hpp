class I_MRAP_03_F;
class GCLASS(Fennek): I_MRAP_03_F {
    displayName = "Fennek";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa","\a3\data_f\vehicles\turret_co.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "DAP (Woodland)";
            textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
            factions[] = {};
        };
        delete ADF;
        delete Woodland;
        delete Desert;
        delete Jagged;
    };
};

class I_MRAP_03_hmg_F;
class GCLASS(FennekHMG): I_MRAP_03_hmg_F {
    displayName = "Fennek (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa","\a3\data_f\vehicles\turret_co.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "DAP (Woodland)";
            textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
            factions[] = {};
        };
        delete ADF;
        delete Woodland;
        delete Desert;
        delete Jagged;
    };
};

class I_MRAP_03_gmg_F;
class GCLASS(FennekGMG): I_MRAP_03_gmg_F {
    displayName = "Fennek (GMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa","\a3\data_f\vehicles\turret_co.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "DAP (Woodland)";
            textures[] = {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"};
            factions[] = {};
        };
        delete ADF;
        delete Woodland;
        delete Desert;
        delete Jagged;
    };
};
