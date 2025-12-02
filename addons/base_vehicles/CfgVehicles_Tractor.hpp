class C_Tractor_01_F;
class GCLASS(Tractor): C_Tractor_01_F {
    displayName = "Tractor";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    textureList[] = {"Green",1,"Blue",1,"Red",1};
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {"\a3\Soft_F_Enoch\Tractor_01\data\Tractor_01_2_green_co.paa"};
            factions[] = {};
        };
        class Red {
            displayName = "Red";
            textures[] = {"\a3\Soft_F_Enoch\Tractor_01\data\Tractor_01_2_red_co.paa"};
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            textures[] = {"\a3\Soft_F_Enoch\Tractor_01\data\Tractor_01_2_blue_co.paa"};
            factions[] = {};
        };
    };
};
