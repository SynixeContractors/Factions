ADD_CAMO_EVENT_HANDLER(O_Heli_Attack_02_dynamicLoadout_F,Heli_Attack_02_dynamicLoadout_base_F);
class GCLASS(Ka54): O_Heli_Attack_02_dynamicLoadout_F {
    displayName = "Ka-54 Caiman";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 2000;
    #include "eventhandler_camo.hpp"
    #include "textures/Ka54.hpp"
};
