class O_VTOL_02_infantry_dynamicLoadout_F;
class GCLASS(Xian_Transport): O_VTOL_02_infantry_dynamicLoadout_F {
    displayName = "Y-32 Xi'an (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2050; //what
    #include "textures/Xian.hpp"
};
class O_VTOL_02_vehicle_dynamicLoadout_F;
class GCLASS(Xian_Cargo): O_VTOL_02_vehicle_dynamicLoadout_F {
    displayName = "Y-32 Xi'an (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2050; //what
    #include "textures/Xian.hpp"
};
