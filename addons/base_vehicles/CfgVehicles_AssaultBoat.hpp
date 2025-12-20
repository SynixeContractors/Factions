class I_Boat_Armed_01_hmg;
class GCLASS(AssaultBoat_HMG): I_Boat_Armed_01_hmg {
    displayName = "Assault Boat (.50 HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 400;
    #include "textures/AssaultBoat.hpp"
};

class I_Boat_Armed_01_minigun_F;
class GCLASS(AssaultBoat_M134): I_Boat_Armed_01_minigun_F {
    displayName = "Assault Boat (M134)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 400;
    #include "textures/AssaultBoat.hpp"
};
