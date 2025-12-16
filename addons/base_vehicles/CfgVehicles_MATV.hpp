class B_MRAP_01_F;
class GCLASS(MATV): B_MRAP_01_F {
    displayName = "M-ATV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/MATV.hpp"
};

class B_MRAP_01_hmg_F;
class GCLASS(MATV_HMG): B_MRAP_01_hmg_F {
    displayName = "M-ATV (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/MATV.hpp"
};

class B_MRAP_01_gmg_F;
class GCLASS(MATV_GMG): B_MRAP_01_gmg_F {
    displayName = "M-ATV (GMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/MATV.hpp"
};
