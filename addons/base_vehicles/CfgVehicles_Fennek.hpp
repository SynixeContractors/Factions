class I_MRAP_03_F;
class GCLASS(Fennek): I_MRAP_03_F {
    displayName = "Fennek";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Fennek.hpp"

};

class I_MRAP_03_hmg_F;
class GCLASS(Fennek_HMG): I_MRAP_03_hmg_F {
    displayName = "Fennek (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Fennek.hpp"
};

class I_MRAP_03_gmg_F;
class GCLASS(Fennek_GMG): I_MRAP_03_gmg_F {
    displayName = "Fennek (GMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/Fennek.hpp"
};
