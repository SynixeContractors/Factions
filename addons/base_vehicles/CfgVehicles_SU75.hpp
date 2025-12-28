class Components;
class TransportPylonsComponent;
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
    class Components: Components {
      class TransportPylonsComponent: TransportPylonsComponent {
        #include "pylons/SU75.hpp"
      };
    };
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
};

// hardpoints[] = {"B_BIM9X_RAIL",    "B_BIM9X_DUAL_RAIL",
//                 "B_AMRAAM_D_RAIL", "B_AMRAAM_D_DUAL_RAIL",
//                 "B_AGM65_RAIL",    "B_AGM65_DUAL_RAIL",
//                 "B_GBU12",         "B_GBU12_DUAL_RAIL",
//                 "B_HARM_RAIL",     "B_SDB_QUAD_RAIL"};

// hardpoints[] = {"B_AMRAAM_D_INT", "B_SDB_QUAD_RAIL"};

// hardpoints[] = {"B_MISSILE_PYLON","B_BOMB_PYLON"};
// hardpoints[] = {"O_MISSILE_PYLON","UNI_SCALPEL"};
