class Offroad_02_base_F;
class GCLASS(Jeep): Offroad_02_base_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 80;
    #include "textures\Jeep.hpp"
};

class Offroad_02_LMG_base_F;
class GCLASS(Jeep_LMG): Offroad_02_LMG_base_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 80;
    #include "textures\Jeep.hpp"
};
