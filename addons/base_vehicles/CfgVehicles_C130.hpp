ADD_CAMO_EVENT_HANDLER(Plane_Transport_01_base_F,Plane_Base_F);
class GCLASS(C130): Plane_Transport_01_base_F {
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
