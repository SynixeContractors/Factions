class C_Boat_Civil_01_F;
class GCLASS(Motorboat): C_Boat_Civil_01_F {
    displayName = "Motorboat";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Civilian {
            displayName = "White & Yellow";
            textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
            factions[] = {};
        };
        class Rescue {
            displayName = "Rescue";
            textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};
            factions[] = {};
        };
        class Police {
            displayName = "Police";
            textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
            factions[] = {};
        };
    };
};
