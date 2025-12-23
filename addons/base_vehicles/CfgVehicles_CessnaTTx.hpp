class C_Plane_Civil_01_F;
class GCLASS(CessnaTTx): C_Plane_Civil_01_F {
    SCOPE_DLC;
    faction = QGCLASS(base_vehicles);
    displayName = "Cessna TTx";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 454;
    crate_fuel_type = "avgas";
    textureList[] = {"Racer_1",1,"Racer_2",1,"RedLine_1",1,"RedLine_2",1,"Wave_1",1,"Wave_2",1,"Tribal_1",1,"Tribal_2",1,"White_1",1,"White_2",1};
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
    textureList[] = {"Racer_1",1,"Racer_2",1,"RedLine_1",1,"RedLine_2",1,"Wave_1",1,"Wave_2",1,"Tribal_1",1,"Tribal_2",1,"White_1",1,"White_2",1};
    #include "textures/CessnaTTx.hpp"
};
