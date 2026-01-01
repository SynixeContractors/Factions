class B_UGV_01_F;
class GCLASS(UGV): B_UGV_01_F {
    displayName = "UGV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 200;
    #include "textures/UGV.hpp"
};

class B_UGV_01_rcws_F;
class GCLASS(UGV_RCWS): B_UGV_01_rcws_F {
    displayName = "UGV (RCWS)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 200;
    #include "textures/UGV.hpp"
};
