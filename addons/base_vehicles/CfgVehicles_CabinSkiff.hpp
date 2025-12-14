class C_Boat_Civil_02_F;
class GCLASS(CabinSkiff): C_Boat_Civil_02_F {
    displayName = "Cabin Skiff";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    textureList[] = {"Red",1,"Blue",1};
    ace_refuel_fuelCapacity = 80;
    class TextureSources {
        class Red {
            displayName = "Red";
            textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"};
            factions[] = {"CIV_F"};
        };
        class Blue {
            displayName = "Blue";
            textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_002_CO.paa"};
            factions[] = {"CIV_F"};
        };
    };
};
