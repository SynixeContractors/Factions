ADD_CAMO_EVENT_HANDLER(B_VTOL_01_armed_F,VTOL_01_armed_base_F);
class GCLASS(Blackfish): B_VTOL_01_armed_F {
    displayName = "V-44A Blackfish (Armed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 3600;
    #include "eventhandler_camo.hpp"
    #include "textures/Blackfish.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_VTOL_01_infantry_F,VTOL_01_infantry_base_F);
class GCLASS(Blackfish_Transport): B_VTOL_01_infantry_F {
    displayName = "V-44P Blackfish (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 3600;
    #include "eventhandler_camo.hpp"
    #include "textures/Blackfish.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_VTOL_01_vehicle_F,VTOL_01_vehicle_base_F);
class GCLASS(Blackfish_Cargo): B_VTOL_01_vehicle_F {
    displayName = "V-44C Blackfish (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 3600;
    #include "eventhandler_camo.hpp"
    #include "textures/Blackfish.hpp"
};
