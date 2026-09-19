ADD_CAMO_EVENT_HANDLER(Plane_Transport_01_infantry_base_F,Plane_Transport_01_base_F);
class GCLASS(C130): Plane_Transport_01_infantry_base_F {
    displayName = "C-130L Hercules";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 5800;
    #include "eventhandler_camo.hpp"
    #include "textures/C130.hpp"
};
ADD_CAMO_EVENT_HANDLER_NOBASE(Plane_Transport_01_vehicle_base_F,Plane_Transport_01_base_F);
class GCLASS(C130_Cargo): Plane_Transport_01_vehicle_base_F {
    displayName = "C-130L Hercules (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 5800;
    #include "eventhandler_camo.hpp"
    #include "textures/C130.hpp"
};
