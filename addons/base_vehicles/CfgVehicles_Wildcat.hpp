ADD_CAMO_EVENT_HANDLER(I_Heli_light_03_unarmed_F,Heli_light_03_unarmed_base_F);
class GCLASS(Wildcat): I_Heli_light_03_unarmed_F {
    displayName ="AW159 Wildcat";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "eventhandler_camo.hpp"
    #include "textures/Wildcat.hpp"
};

ADD_CAMO_EVENT_HANDLER(I_Heli_light_03_dynamicLoadout_F,Heli_light_03_dynamicLoadout_base_F);
class GCLASS(Wildcat_Pylons): I_Heli_light_03_dynamicLoadout_F {
    displayName ="AW159 Wildcat (Armed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "eventhandler_camo.hpp"
    #include "textures/Wildcat.hpp"
};
