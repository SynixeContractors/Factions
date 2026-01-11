ADD_CAMO_EVENT_HANDLER(O_Plane_Fighter_02_F,Plane_Fighter_02_Base_F);
class GCLASS(SU75): O_Plane_Fighter_02_F {
    displayName = "SU-75 Checkmate";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10300;
    #include "eventhandler_camo.hpp"
    #include "textures/SU75.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/SU75.hpp"
    //   };
    // };
};

ADD_CAMO_EVENT_HANDLER_NOBASE(O_Plane_Fighter_02_Stealth_F,Plane_Fighter_02_Base_F);
class GCLASS(SU75_Stealth): O_Plane_Fighter_02_Stealth_F {
    displayName = "SU-75 Checkmate (Stealth)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 10300;
    #include "eventhandler_camo.hpp"
    #include "textures/SU75.hpp"
    // class Components {
    //   class TransportPylonsComponent {
    //     #include "pylons/SU75_Stealth.hpp"
    //   };
    // };
};
