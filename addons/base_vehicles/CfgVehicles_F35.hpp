ADD_CAMO_EVENT_HANDLER(B_Plane_Fighter_05_F,Plane_Fighter_05_Base_F);
class GCLASS(F35): B_Plane_Fighter_05_F {
    displayName = "F-35F Lightning II";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10000;
    #include "eventhandler_camo.hpp"
    #include "textures/F35.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/F35.hpp"
    //   };
    // };
};

ADD_CAMO_EVENT_HANDLER_NOBASE(B_Plane_Fighter_05_Stealth_F,Plane_Fighter_05_Base_F);
class GCLASS(F35_Stealth): B_Plane_Fighter_05_Stealth_F {
    displayName = "F-35F Lightning II (Stealth)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10000;
    #include "eventhandler_camo.hpp"
    #include "textures/F35.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     //FIXME
    //     #include "pylons/F35.hpp"
    //   };
    // };
};
