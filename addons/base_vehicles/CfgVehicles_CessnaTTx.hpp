class C_Plane_Civil_01_F;
class GCLASS(CessnaTTx): C_Plane_Civil_01_F {
    SCOPE_DLC;
    faction = QGCLASS(base_vehicles);
    displayName = "Cessna TTx";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 454;
    crate_fuel_type = "avgas";
    #include "textures/CessnaTTx.hpp"
};

class C_Plane_Civil_01_racing_F;
class GCLASS(CessnaTTx_Racing): C_Plane_Civil_01_racing_F {
    SCOPE_DLC;
    faction = QGCLASS(base_vehicles);
    displayName = "Cessna TTx Racing";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 454;
    crate_fuel_type = "avgas";
    #include "textures/CessnaTTx.hpp"
};
