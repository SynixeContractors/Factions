class C_SUV_01_F;
class GCLASS(SUV): C_SUV_01_F {
    displayName = "SUV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 57;
    textureList[] = {"Red",1,"Black",1,"Grey",1,"Orange",1};
    class TextureSources {
        class Red {
            displayName = "Red";
            textures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};
            factions[] = {};
        };
        class Grey {
            displayName = "Grey";
            textures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};
            factions[] = {};
        };
        class Orange {
            displayName = "Orange";
            textures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};
            factions[] = {};
        };
    };
};
