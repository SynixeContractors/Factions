class B_Heli_Transport_03_unarmed_F;
class GCLASS(Chinook): B_Heli_Transport_03_unarmed_F {
    displayName = "CH-47F Chinook";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1800;
    ace_cargo_space = 20; //default: 40
    #include "textures/Chinook.hpp"
};

class B_Heli_Transport_03_F;
class GCLASS(Chinook_M134): B_Heli_Transport_03_F {
    displayName = "CH-47F Chinook (M134)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1800;
    ace_cargo_space = 20; //default: 40
    #include "textures/Chinook.hpp"
};
