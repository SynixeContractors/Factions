class I_Plane_Fighter_03_dynamicLoadout_F;
class GCLASS(L159): I_Plane_Fighter_03_dynamicLoadout_F {
    displayName = "L-159M";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2000;
    #include "textures/L159.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/L159.hpp"
    //   };
    // };
};
