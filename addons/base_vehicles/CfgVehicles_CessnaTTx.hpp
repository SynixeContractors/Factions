class C_Plane_Civil_01_F;
class GCLASS(CessnaTTx): C_Plane_Civil_01_F {
    SCOPE_DLC;
    faction = QGCLASS(base_vehicles);
    displayName = "Cessna TTx";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/CessnaTTx.hpp"
};

class C_Plane_Civil_01_racing_F;
class GCLASS(CessnaTTxRacing): C_Plane_Civil_01_racing_F {
    SCOPE_DLC;
    faction = QGCLASS(base_vehicles);
    displayName = "Cessna TTx Racing";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/CessnaTTx.hpp"
};
