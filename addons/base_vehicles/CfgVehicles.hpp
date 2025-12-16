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
    #include "CfgVehicles_Hatchback.hpp"
    #include "CfgVehicles_Jay.hpp"
    #include "CfgVehicles_Jeep.hpp"
    #include "CfgVehicles_LUT.hpp"
    #include "CfgVehicles_LSV.hpp"
    #include "CfgVehicles_Offroad.hpp"
    #include "CfgVehicles_Quad.hpp"
    #include "CfgVehicles_Ram.hpp"
    #include "CfgVehicles_SUV.hpp"
    #include "CfgVehicles_Tractor.hpp"
    #include "CfgVehicles_Typhoon.hpp"
    #include "CfgVehicles_Van.hpp"

    // APCS
    #include "CfgVehicles_Badger.hpp"
    #include "CfgVehicles_Otokar.hpp"
    #include "CfgVehicles_Pandur.hpp"
    #include "CfgVehicles_Warrior.hpp"
    #include "CfgVehicles_BM2T.hpp"
    #include "CfgVehicles_Namer.hpp"

    // Boats
    #include "CfgVehicles_AssaultBoat.hpp"
    #include "CfgVehicles_CabinSkiff.hpp"
    #include "CfgVehicles_Dingy.hpp"
    #include "CfgVehicles_JetSki.hpp"
    #include "CfgVehicles_Motorboat.hpp"
    #include "CfgVehicles_RHIB.hpp"

    // Tanks
    #include "CfgVehicles_T100.hpp"
    #include "CfgVehicles_Leopard.hpp"
    #include "CfgVehicles_Merkava.hpp"
    #include "CfgVehicles_Wiesel.hpp"

    // Helicopters
    #include "CfgVehicles_MD500.hpp"
    #include "CfgVehicles_Mohawk.hpp"
    #include "CfgVehicles_Orca.hpp"
    #include "CfgVehicles_Puma.hpp"
    #include "CfgVehicles_Wildcat.hpp"

    // Planes
    #include "CfgVehicles_CessnaTTx.hpp"

    // Submersibles
    #include "CfgVehicles_SDV.hpp"

    // Static Weapons
    #include "CfgVehicles_M2.hpp"
    #include "CfgVehicles_Mk6Mortar.hpp"
    #include "CfgVehicles_RSG60.hpp"
    #include "CfgVehicles_Titan.hpp"
    #include "CfgVehicles_XM.hpp"
};
