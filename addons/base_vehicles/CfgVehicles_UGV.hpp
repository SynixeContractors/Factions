ADD_CAMO_EVENT_HANDLER(B_UGV_01_F,UGV_01_base_F);
class GCLASS(UGV): B_UGV_01_F {
    displayName = "UGV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    ace_refuel_fuelCapacity = 200;
    #include "eventhandler_camo.hpp"
    #include "textures/UGV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_UGV_01_rcws_F,UGV_01_rcws_base_F);
class GCLASS(UGV_RCWS): B_UGV_01_rcws_F {
    displayName = "UGV (RCWS)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    ace_refuel_fuelCapacity = 200;
    #include "eventhandler_camo.hpp"
    #include "textures/UGV.hpp"
};
