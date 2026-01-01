class Atlas_B_L_UAV_07_F;
class GCLASS(UAV07): Atlas_B_L_UAV_07_F {
    displayName = "MQ-9X";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 450;
    #include "textures/UAV07.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/UAV07.hpp"
    //   };
    // };
};
