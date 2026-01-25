ADD_CAMO_EVENT_HANDLER(O_UAV_02_dynamicLoadout_F,UAV_02_dynamicLoadout_base_F);
class GCLASS(Shahpar): O_UAV_02_dynamicLoadout_F {
    displayName = "Shahpar IV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    ace_refuel_fuelCapacity = 480; //like mq1 predator
    #include "eventhandler_camo.hpp"
    #include "textures/UAV02.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/UAV02.hpp"
    //   };
    // };
};
