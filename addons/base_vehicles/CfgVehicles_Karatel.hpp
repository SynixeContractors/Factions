class O_MRAP_02_F;
class GCLASS(Karatel): O_MRAP_02_F {
    displayName = "Karatel";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/Karatel.hpp"
};

class O_MRAP_02_hmg_F;
class GCLASS(Karatel_HMG): O_MRAP_02_hmg_F {
    displayName = "Karatel (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
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
    #include "textures/Karatel.hpp"
};
