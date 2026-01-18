class B_UAV_05_F;
class GCLASS(MQ47): B_UAV_05_F {
    displayName = "MQ-47C Sentinel";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "C_UAV_AI_F";
    ace_refuel_fuelCapacity = 450;
    #include "textures/UAV05.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/UAV05.hpp"
    //   };
    // };
};
