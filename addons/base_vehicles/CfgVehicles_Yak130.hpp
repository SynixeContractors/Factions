class O_Plane_CAS_02_dynamicLoadout_F;
class GCLASS(Yak130): O_Plane_CAS_02_dynamicLoadout_F {
    displayName = "Yak-130";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2050;
    #include "textures/Yak130.hpp"
    class Components {
      class TransportPylonsComponent {
        #include "pylons/Yak130.hpp"
      };
    };
};
