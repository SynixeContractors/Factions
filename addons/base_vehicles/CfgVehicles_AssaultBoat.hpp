class I_Boat_Armed_01_hmg;
class GCLASS(AssaultBoatHMG): I_Boat_Armed_01_hmg {
    displayName = "Assault Boat (HMG)";
    faction = QGVAR(vehicles_faction);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 400;
    #include "textures/AssaultBoat.hpp"
};

class I_Boat_Armed_01_minigun_F;
class GCLASS(AssaultBoatMinigun): I_Boat_Armed_01_minigun_F {
    displayName = "Assault Boat (Minigun)";
    faction = QGVAR(vehicles_faction);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 400;
    #include "textures/AssaultBoat.hpp"
};
