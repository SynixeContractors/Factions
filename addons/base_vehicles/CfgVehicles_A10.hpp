class B_Plane_CAS_01_dynamicLoadout_F;
class GCLASS(A10): B_Plane_CAS_01_dynamicLoadout_F {
    displayName = "A-10D";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 5800;
    #include "textures/A10.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/A10.hpp"
    //   };
    // };
};
