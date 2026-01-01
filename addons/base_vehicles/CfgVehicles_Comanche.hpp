class B_Heli_Attack_01_dynamicLoadout_F;
class GCLASS(Comanche): B_Heli_Attack_01_dynamicLoadout_F {
    displayName = "AH-66 Comanche";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "textures/Comanche.hpp"
};

class B_Heli_Attack_01_pylons_dynamicLoadout_F;
class GCLASS(Comanche_Pylons): B_Heli_Attack_01_pylons_dynamicLoadout_F {
    displayName = "AH-66 Comanche (Pylons)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "textures/Comanche.hpp"
};
