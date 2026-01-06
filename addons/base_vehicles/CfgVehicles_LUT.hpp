class Truck_02_transport_base_F;
class GCLASS(LUT_Transport): Truck_02_transport_base_F {
    displayName = "LUT (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTTransport.hpp"
};

class Truck_02_base_F;
class GCLASS(LUT_TransportCovered): Truck_02_base_F {
    displayName = "LUT (Transport Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTTransport.hpp"
};

class Truck_02_box_base_F;
class GCLASS(LUT_Repair): Truck_02_box_base_F {
    displayName = "LUT (Repair)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTRepair.hpp"
};

class Truck_02_medical_base_F;
class GCLASS(LUT_Medical): Truck_02_medical_base_F {
    displayName = "LUT (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTMedical.hpp"
};

class Truck_02_fuel_base_F;
class GCLASS(LUT_Fuel): Truck_02_fuel_base_F {
    displayName = "LUT (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTFuel.hpp"
};

class Truck_02_cargo_base_lxWS;
class GCLASS(LUT_Cargo): Truck_02_cargo_base_lxWS {
    displayName = "LUT (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTBed.hpp"
};

class Truck_02_flatbed_base_lxWS;
class GCLASS(LUT_Flatbed): Truck_02_flatbed_base_lxWS {
    displayName = "LUT (Flatbed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTBed.hpp"
};

class Truck_02_Ammo_base_F;
class GCLASS(LUT_Ammo): Truck_02_Ammo_base_F {
    displayName = "LUT (Ammo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTAmmo.hpp"
};

ADD_CAMO_EVENT_HANDLER_NOBASE(Truck_02_MRL_base_F,Truck_02_base_F);
class GCLASS(LUT_MRL): Truck_02_MRL_base_F {
    displayName = "LUT (MRL)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "eventhandler_camo.hpp"
    #include "textures\LUTMRL.hpp"
};

class Truck_02_aa_base_lxWS;
class GCLASS(LUT_AA): Truck_02_aa_base_lxWS {
    displayName = "LUT (AA)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures\LUTAA.hpp"
};
