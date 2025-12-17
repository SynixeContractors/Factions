class C_Heli_EC_01_civ_RF;
class GCLASS(Puma): C_Heli_EC_01_civ_RF {
    displayName ="H225 Super Puma";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class C_Heli_EC_04_rescue_RF;
class GCLASS(Puma_Rescue): C_Heli_EC_04_rescue_RF {
    displayName ="H225 Super Puma (Rescue)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class I_Heli_EC_02_RF;
class GCLASS(Puma_Pylons): I_Heli_EC_02_RF {
    displayName ="H225M Super Couagar";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class C_Heli_EC_01A_civ_RF;
class GCLASS(PumaA): C_Heli_EC_01A_civ_RF {
    displayName ="H215 Super Puma";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1480;
    #include "textures\Puma.hpp"
};
