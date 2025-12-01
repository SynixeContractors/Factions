class C_Boat_Civil_01_F;
class CLASS(Motorboat): C_Boat_Civil_01_F {
    displayName = "Motorboat";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    class TextureSources {
        class Civilian {
            displayName = "White & Yellow";
            textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
            factions[] = {"CIV_F"};
        };
        class Rescue {
            displayName = "Rescue";
            textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};
            factions[] = {"CIV_F"};
        };
        class Police {
            displayName = "Police";
            textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
            factions[] = {"CIV_F"};
        };
    };
};
