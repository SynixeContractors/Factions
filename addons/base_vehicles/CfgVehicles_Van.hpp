class C_Van_02_transport_F;
class GCLASS(Van_Transport): C_Van_02_transport_F  {
    displayName = "Van (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 120;
    #include "textures\VanTransport.hpp"
};

class C_Van_02_medevac_F;
class GCLASS(Van_Ambulance): C_Van_02_medevac_F  {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 120;
    #include "textures\VanAmbulance.hpp"
};

class C_Van_02_vehicle_F;
class GCLASS(Van_Cargo): C_Van_02_vehicle_F  {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 120;
    #include "textures\VanCargo.hpp"
};

class C_Van_02_service_F;
class GCLASS(Van_Service): C_Van_02_service_F  {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 120;
    #include "textures\VanService.hpp"
};
