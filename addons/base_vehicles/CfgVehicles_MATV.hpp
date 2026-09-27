ADD_CAMO_EVENT_HANDLER(B_MRAP_01_F,MRAP_01_base_F);
class GCLASS(MATV): B_MRAP_01_F {
    displayName = "M-ATV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 178;
    #include "eventhandler_camo.hpp"
    #include "textures/MATV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_MRAP_01_hmg_F,MRAP_01_hmg_base_F);
class GCLASS(MATV_HMG): B_MRAP_01_hmg_F {
    displayName = "M-ATV (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 178;
    #include "eventhandler_camo.hpp"
    #include "textures/MATV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_MRAP_01_gmg_F,MRAP_01_gmg_base_F);
class GCLASS(MATV_GMG): B_MRAP_01_gmg_F {
    displayName = "M-ATV (GMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 178;
    #include "eventhandler_camo.hpp"
    #include "textures/MATV.hpp"
};
