class B_Plane_Fighter_01_F;
class GCLASS(FA181): B_Plane_Fighter_01_F {
    displayName = "F/A-181 (External Stores)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2000;
    #include "textures/FA181.hpp"
    class Components {
      class TransportPylonsComponent {
        #include "pylons/FA181.hpp"
      };
    };
};
class B_Plane_Fighter_01_Stealth_F;
class GCLASS(FA181_Stealth): B_Plane_Fighter_01_Stealth_F {
    displayName = "F/A-181";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2000;
    #include "textures/FA181.hpp"
    class Components {
      class TransportPylonsComponent {
        #include "pylons/FA181.hpp"
      };
    };
};
