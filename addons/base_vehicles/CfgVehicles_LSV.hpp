class O_LSV_02_unarmed_F;
class GCLASS(LSV) : O_LSV_02_unarmed_F {
    displayName = "LSV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/LSV.hpp"
};

class O_LSV_02_armed_F;
class GCLASS(LSV_Minigun) : O_LSV_02_armed_F {
    displayName = "LSV (Minigun)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/LSV.hpp"
};

class O_LSV_02_AT_F;
class GCLASS(LSV_Metis) : O_LSV_02_AT_F {
    displayName = "LSV (Metis-M)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/LSV.hpp"
};
