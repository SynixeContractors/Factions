class I_Heli_light_03_unarmed_F;
class GCLASS(Wildcat): I_Heli_light_03_unarmed_F {
    displayName ="AW159 Wildcat";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "textures/Wildcat.hpp"
};

class I_Heli_light_03_dynamicLoadout_F;
class GCLASS(WildcatPylons): I_Heli_light_03_dynamicLoadout_F {
    displayName ="AW159 Wildcat (Armed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1400;
    #include "textures/Wildcat.hpp"
};
