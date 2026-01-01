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

class I_Heli_EC_01A_military_RF;
class GCLASS(PumaM): I_Heli_EC_01A_military_RF {
    displayName ="H215M Super Puma";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1480;
    #include "textures\Puma.hpp"
};

class B_ION_Heli_EC_01_RF;
class GCLASS(PumaT): B_ION_Heli_EC_01_RF {
    displayName ="H225M Super Puma";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class B_Heli_EC_04_military_RF;
class GCLASS(Cougar): B_Heli_EC_04_military_RF {
    displayName ="H225M Super Cougar";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class B_Heli_EC_03_RF;
class GCLASS(Cougar_Armed): B_Heli_EC_03_RF {
    displayName ="H225M Super Cougar (Armed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class I_E_EC_02_RF;
class GCLASS(Cougar_Pylon): I_E_EC_02_RF {
    displayName ="H225M Super Cougar SOCAT";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};

class C_Heli_EC_04_rescue_RF;
class GCLASS(Cougar_Rescue): C_Heli_EC_04_rescue_RF {
    displayName ="H225 Super Cougar SAR";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1680;
    #include "textures\Puma.hpp"
};
