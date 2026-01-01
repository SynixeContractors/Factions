class O_Plane_Fighter_02_F;
class GCLASS(SU75): O_Plane_Fighter_02_F {
    displayName = "SU-75 (External Stores)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10300;
    #include "textures/SU75.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/SU75.hpp"
    //   };
    // };
};
class O_Plane_Fighter_02_Stealth_F;
class GCLASS(SU75_Stealth): O_Plane_Fighter_02_Stealth_F {
    displayName = "SU-75";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10300;
    #include "textures/SU75.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/SU75_Stealth.hpp"
    //   };
    // };
};
