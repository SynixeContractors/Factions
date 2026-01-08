class C_Rubberboat;
class GCLASS(Dinghy): C_Rubberboat {
    displayName = "Dinghy";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 30;
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
            factions[] = {};
        };
        class Hex {
            displayName = "Hex";
            textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
            factions[] = {};
        };
        class Rescue {
            displayName = "Rescue";
            textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};
            factions[] = {};
        };
        class Civilian {
            displayName = "Civilian";
            textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};
            factions[] = {};
        };
        class Digital {
            displayName = "DAP Green";
            textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};
            factions[] = {};
        };
        class Rus {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Transport_01\Data\Boat_Transport_01_RUkhk_CO.paa"};
            factions[] = {};
        };
    };
};
