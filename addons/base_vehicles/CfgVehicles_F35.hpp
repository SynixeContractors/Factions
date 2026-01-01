class B_Plane_Fighter_05_F;
class GCLASS(F35): B_Plane_Fighter_05_F {
    displayName = "F-35F (External Stores)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10000;
    #include "textures/F35.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/F35.hpp"
    //   };
    // };
};
class B_Plane_Fighter_05_Stealth_F;
class GCLASS(F35_Stealth): B_Plane_Fighter_05_Stealth_F {
    displayName = "F-35F";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10000;
    #include "textures/F35.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     //FIXME
    //     #include "pylons/F35.hpp"
    //   };
    // };
};
