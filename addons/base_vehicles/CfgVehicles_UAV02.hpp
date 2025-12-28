class O_UAV_02_dynamicLoadout_F;
class GCLASS(UAV02): O_UAV_02_dynamicLoadout_F {
    displayName = "Shahpar IV";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 450;
    #include "textures/UAV02.hpp"
    class Components {
      class TransportPylonsComponent {
        #include "pylons/UAV02.hpp"
      };
    };
};
