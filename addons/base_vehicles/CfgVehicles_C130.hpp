class Plane_Transport_01_base_F;
class GCLASS(C130): Plane_Transport_01_base_F {
    displayName = "C-130L";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 5800;
    #include "textures/C130.hpp"
};
