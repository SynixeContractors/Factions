class O_APC_Wheeled_02_unarmed_lxWS;
class GCLASS(Otokar): O_APC_Wheeled_02_unarmed_lxWS {
    displayName = "Otokar ARMA";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures/Otokar.hpp"
};

class O_APC_Wheeled_02_hmg_lxWS;
class GCLASS(Otokar_HMG): O_APC_Wheeled_02_hmg_lxWS {
    displayName = "Otokar ARMA (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures/OtokarArmed.hpp"
};

class O_APC_Wheeled_02_rcws_v2_F;
class GCLASS(Otokar_RCWS): O_APC_Wheeled_02_rcws_v2_F {
    displayName = "Otokar ARMA (RCWS)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 210;
    #include "textures/OtokarRCWS.hpp"
};
