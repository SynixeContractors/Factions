ADD_CAMO_EVENT_HANDLER(O_VTOL_02_infantry_dynamicLoadout_F,VTOL_02_infantry_dynamicLoadout_base_F);
class GCLASS(Xian_Transport): O_VTOL_02_infantry_dynamicLoadout_F {
    displayName = "Y-32 Xi'an (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2050; //what
    #include "eventhandler_camo.hpp"
    #include "textures/Xian.hpp"
};
ADD_CAMO_EVENT_HANDLER(O_VTOL_02_vehicle_dynamicLoadout_F,VTOL_02_vehicle_dynamicLoadout_base_F);
class GCLASS(Xian_Cargo): O_VTOL_02_vehicle_dynamicLoadout_F {
    displayName = "Y-32 Xi'an (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2050; //what
    #include "eventhandler_camo.hpp"
    #include "textures/Xian.hpp"
};
