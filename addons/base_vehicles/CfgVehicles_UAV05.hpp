class B_UAV_05_F;
class GCLASS(UAV05): B_UAV_05_F {
    displayName = "MQ-47C";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 450;
    #include "textures/UAV05.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/UAV05.hpp"
    //   };
    // };
};
