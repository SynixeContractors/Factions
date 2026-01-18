ADD_CAMO_EVENT_HANDLER(B_UAV_03_dynamicLoadout_F,UAV_03_dynamicLoadout_base_F);
class GCLASS(MQ12): B_UAV_03_dynamicLoadout_F {
    displayName = "MQ-12 Falcon";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    ace_refuel_fuelCapacity = 233; //taken from MD500
    #include "eventhandler_camo.hpp"
    #include "textures/UAV03.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/UAV03.hpp"
    //   };
    // };
};
