ADD_CAMO_EVENT_HANDLER(O_Radar_System_02_F,Radar_System_02_base_F);
class GCLASS(Radar02): O_Radar_System_02_F {
    displayName = "92N7 TADS";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    #include "eventhandler_camo.hpp"
    #include "textures/Radar02.hpp"
};
ADD_CAMO_EVENT_HANDLER(O_SAM_System_04_F,SAM_System_04_base_F);
class GCLASS(SAM02): O_SAM_System_04_F {
    displayName = "5P86TE2 TEL (S-400 Triumph)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    #include "eventhandler_camo.hpp"
    #include "textures/SAM02.hpp"
};
