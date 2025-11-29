#define RESET_FACTIONS(COLOR) class COLOR: COLOR { factions[] = {}; }

class CfgVehicles {
    class Car_F;
    class Tank_F;
    class Wheeled_APC_F: Car_F {
        class TextureSources;
    };
    class Offroad_01_base_F;

    #include "CfgVehicles_Badger.hpp"
    #include "CfgVehicles_Jeep.hpp"
    #include "CfgVehicles_Offroad.hpp"
    #include "CfgVehicles_Otokar.hpp"
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_Van.hpp"
    #include "CfgVehicles_Warrior.hpp"
};
