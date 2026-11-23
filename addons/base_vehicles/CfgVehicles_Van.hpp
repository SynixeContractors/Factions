class Van_02_transport_base_F;
class C_Van_02_transport_F: Van_02_transport_base_F {
    class AnimationSources;
};
class GCLASS(Van_Transport): C_Van_02_transport_F {
    class AnimationSources: AnimationSources {
        class beacon_front_hide;
        class beacon_rear_hide;
        class roof_rack_hide;
        class front_protective_frame_hide;
        class side_protective_frame_hide;
        class LED_lights_hide;
        class reflective_tape_hide;
    };
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

class Van_02_vehicle_base_F;
class C_Van_02_vehicle_F: Van_02_vehicle_base_F {
    class AnimationSources;
};
class GCLASS(Van_Cargo): C_Van_02_vehicle_F {
    class AnimationSources: AnimationSources {
        class beacon_front_hide;
        class beacon_rear_hide;
        class roof_rack_hide;
        class front_protective_frame_hide;
        class side_protective_frame_hide;
        class LED_lights_hide;
        class reflective_tape_hide;
    };
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
