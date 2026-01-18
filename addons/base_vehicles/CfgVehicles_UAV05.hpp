ADD_CAMO_EVENT_HANDLER(B_UAV_05_F,UAV_05_Base_F);
class GCLASS(MQ47): B_UAV_05_F {
    displayName = "MQ-47C Sentinel";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    ace_refuel_fuelCapacity = 450;
    #include "eventhandler_camo.hpp"
    #include "textures/UAV05.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/UAV05.hpp"
    //   };
    // };
};
