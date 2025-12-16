class B_SDV_01_F;
class GCLASS(SDV): B_SDV_01_F {
    displayName = "SDV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 90;
    class TextureSources {
        class Blu {
            displayName = "Black";
            textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_CO.paa"};
            factions[] = {};
        };
        class Opfor {
            displayName = "Hex Naval";
            textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_OPFOR_CO.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "Digital";
            textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_INDP_CO.paa"};
            factions[] = {};
        };
        class Rus {
            displayName = "Grey";
            textures[] = {"\A3_Aegis\Boat_F_Aegis\SDV_01\Data\SDV_ext_RUgrey_CO.paa"};
            factions[] = {};
        };
    };
};
