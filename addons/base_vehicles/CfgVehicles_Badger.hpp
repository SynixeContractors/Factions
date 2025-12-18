class B_APC_Wheeled_01_cannon_v2_F;
class GCLASS(Badger): B_APC_Wheeled_01_cannon_v2_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (L21A1)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/BadgerIFV.hpp"
};

class B_APC_Wheeled_01_command_lxWS;
class GCLASS(Badger_Command): B_APC_Wheeled_01_command_lxWS {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (Command)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/BadgerIFV.hpp"
};

class B_APC_Wheeled_01_mortar_lxWS;
class GCLASS(Badger_Mortar): B_APC_Wheeled_01_mortar_lxWS {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (Mortar)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/BadgerIFV.hpp"
};

class B_APC_Wheeled_01_atgm_lxWS_v2;
class GCLASS(Badger_ATGM): B_APC_Wheeled_01_atgm_lxWS_v2 {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (L21A1, ATGM)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/BadgerIFV.hpp"
};
class B_APC_Wheeled_01_medical_F;
class GCLASS(Badger_Unarmed): B_APC_Wheeled_01_medical_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (Unarmed)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/BadgerIFV.hpp"
};
class GCLASS(Badger_Medical): B_APC_Wheeled_01_medical_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (Medical)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "textures/BadgerMedical.hpp"
};
