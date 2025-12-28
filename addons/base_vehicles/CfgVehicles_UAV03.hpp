class B_UAV_03_dynamicLoadout_F;
class GCLASS(UAV03): B_UAV_03_dynamicLoadout_F {
    displayName = "MQ-12";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 450;
    #include "textures/UAV03.hpp"
    class Components {
      class TransportPylonsComponent {
        #include "pylons/UAV03.hpp"
      };
    };
};
