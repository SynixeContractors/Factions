class MELB_H6M;
class GCLASS(MELB): MELB_H6M {
    displayName = "OH-6 Little Bird";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 233;
    #include "textures/LittleBird.hpp"
};
class MELB_MH6M;
class GCLASS(MELB_Rig): MELB_MH6M {
    displayName = "MH-6 Little Bird";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 233;
    #include "textures/LittleBird.hpp"
};
class MELB_AH6M;
class GCLASS(MELB_Attack): MELB_AH6M {
    displayName = "AH-6 Little Bird";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 233;
    #include "textures/LittleBird.hpp"
};
