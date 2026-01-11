ADD_CAMO_EVENT_HANDLER(B_Plane_Fighter_01_F,Plane_Fighter_01_Base_F);
class GCLASS(FA181): B_Plane_Fighter_01_F {
    displayName = "F/A-181 Black Wasp II";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2000;
    #include "eventhandler_camo.hpp"
    #include "textures/FA181.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/FA181.hpp"
    //   };
    // };
};

ADD_CAMO_EVENT_HANDLER_NOBASE(B_Plane_Fighter_01_Stealth_F,Plane_Fighter_01_Base_F);
class GCLASS(FA181_Stealth): B_Plane_Fighter_01_Stealth_F {
    displayName = "F/A-181 Black Wasp II (Stealth)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2000;
    #include "eventhandler_camo.hpp"
    #include "textures/FA181.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     //FIXME
    //     #include "pylons/FA181.hpp"
    //   };
    // };
};
