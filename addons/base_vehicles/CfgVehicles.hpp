#define RESET_FACTIONS(COLOR) class COLOR: COLOR { factions[] = {}; }

class CfgVehicles {
    class Car_F;

    #include "CfgVehicles_Jeep.hpp"
    #include "CfgVehicles_Offroad.hpp"
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_Van.hpp"
};
