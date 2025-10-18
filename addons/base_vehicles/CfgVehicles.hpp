#define RESET_FACTIONS(COLOR) class COLOR: COLOR { factions[] = {}; }

class CfgVehicles {
    #include "CfgVehicles_Jeep.hpp"
    #include "CfgVehicles_Van.hpp"
};
