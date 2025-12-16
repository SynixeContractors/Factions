class B_LSV_01_unarmed_F;
class GCLASS(Polaris): B_LSV_01_unarmed_F {
    displayName = "Polaris DAGOR";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Polaris.hpp"
};
class B_LSV_01_light_F;
class GCLASS(Polaris_NoDoor): B_LSV_01_light_F {
    displayName = "Polaris DAGOR (SOF)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Polaris.hpp"
};
class B_LSV_01_AT_F;
class GCLASS(Polaris_Titan): B_LSV_01_AT_F {
    displayName = "Polaris DAGOR (Titan)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Polaris.hpp"
};
class B_LSV_01_armed_F;
class GCLASS(Polaris_HMG): B_LSV_01_armed_F {
    displayName = "Polaris DAGOR (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Polaris.hpp"
};
