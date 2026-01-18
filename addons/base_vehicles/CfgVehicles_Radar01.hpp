ADD_CAMO_EVENT_HANDLER(B_Radar_System_01_F,Radar_System_01_base_F);
class GCLASS(Radar01): B_Radar_System_01_F {
    displayName = "AN/MPQ-65A TADS";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    #include "eventhandler_camo.hpp"
    #include "textures/Radar01.hpp"
};
ADD_CAMO_EVENT_HANDLER(B_SAM_System_03_F,SAM_System_03_base_F);
class GCLASS(SAM01): B_SAM_System_03_F {
    displayName = "M903 TEL (MIM-104F Patriot)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    #include "eventhandler_camo.hpp"
    #include "textures/SAM01.hpp"
};
