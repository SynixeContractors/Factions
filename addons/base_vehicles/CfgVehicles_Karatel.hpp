// https://en.topwar.ru/179625-superkamazy-bronja-i-730-loshadinyh-sil.html
// supposedly 2x450L on the base truck
#define KARATEL_FUEL 900

class O_MRAP_02_F;
class GCLASS(Karatel): O_MRAP_02_F {
    displayName = "Karatel";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/Karatel.hpp"
    ace_refuel_fuelCapacity = KARATEL_FUEL;
};

class O_MRAP_02_hmg_F;
class GCLASS(Karatel_HMG): O_MRAP_02_hmg_F {
    displayName = "Karatel (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = KARATEL_FUEL;
    #include "textures/Karatel.hpp"
};

class O_MRAP_02_gmg_F;
class GCLASS(Karatel_GMG): O_MRAP_02_gmg_F {
    displayName = "Karatel (GMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = KARATEL_FUEL;
    #include "textures/Karatel.hpp"
};
