ADD_CAMO_EVENT_HANDLER(Aegis_O_R_Heli_Attack_04_F,Aegis_Heli_Attack_04_base_F);
class GCLASS(Mi35): Aegis_O_R_Heli_Attack_04_F {
    displayName = "Mi-35M4 Hind";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 1500;
    #include "eventhandler_camo.hpp"
    #include "textures/Mi35.hpp"
};
