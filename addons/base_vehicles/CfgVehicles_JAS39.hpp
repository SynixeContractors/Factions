class I_Plane_Fighter_04_F;
class GCLASS(JAS39): I_Plane_Fighter_04_F {
    displayName = "JAS-39NG Gripen";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 3000;
    #include "textures/JAS39.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/JAS39.hpp"
    //   };
    // };
};
