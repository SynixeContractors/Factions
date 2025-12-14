#define RESET_FACTIONS(COLOR) class COLOR: COLOR { factions[] = {}; }

#define EMPTY_INVENTORY class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportWeapons {}; \
    class TransportBackpacks {}

#define SCOPE_DLC_VEHICLE side = 3; \
    scope = 2; \
    scopeCurator = 2; \
    forceInGarage = 1

class CfgVehicles {
    class Car_F;
    class Tank_F;
    class Wheeled_APC_F;
    class Offroad_01_base_F;

    // Cars
    #include "CfgVehicles_Fennek.hpp"
    #include "CfgVehicles_FuelTruck.hpp"
    #include "CfgVehicles_Hatchback.hpp"
    #include "CfgVehicles_Jeep.hpp"
    #include "CfgVehicles_LUT.hpp"
    #include "CfgVehicles_Offroad.hpp"
    #include "CfgVehicles_Quad.hpp"
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_SUV.hpp"
    #include "CfgVehicles_Tractor.hpp"
    #include "CfgVehicles_Van.hpp"
    #include "CfgVehicles_Typhoon.hpp"
    #include "CfgVehicles_LSV.hpp"

    // APCS
    #include "CfgVehicles_Badger.hpp"
    #include "CfgVehicles_Otokar.hpp"
    #include "CfgVehicles_Pandur.hpp"
    #include "CfgVehicles_Warrior.hpp"

    // Boats
    #include "CfgVehicles_CabinSkiff.hpp"
    #include "CfgVehicles_Dingy.hpp"
    #include "CfgVehicles_JetSki.hpp"
    #include "CfgVehicles_Motorboat.hpp"
    #include "CfgVehicles_RHIB.hpp"

    // Tanks
    #include "CfgVehicles_T100.hpp"
    #include "CfgVehicles_Leopard.hpp"
    #include "CfgVehicles_Wiesel.hpp"
};
