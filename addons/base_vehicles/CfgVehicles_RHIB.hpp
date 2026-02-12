ADD_CAMO_EVENT_HANDLER(C_Boat_Transport_02_F,Boat_Transport_02_base_F);
class GCLASS(RHIB): C_Boat_Transport_02_F {
    displayName = "RHIB";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 227;
    textureList[] = {"Civilian",1,"Black",1};
    #include "racks\singlerack.hpp"
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
            factions[] = {};
        };
        class Civilian {
            displayName = "White & Blue";
            textures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};
            factions[] = {};
        };
    };
};
