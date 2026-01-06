ADD_CAMO_EVENT_HANDLER(B_APC_Wheeled_01_cannon_v2_F,APC_Wheeled_01_base_v2_F);
class GCLASS(Badger): B_APC_Wheeled_01_cannon_v2_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (L21A1)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "eventhandler_camo.hpp"
    #include "textures/BadgerIFV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_APC_Wheeled_01_command_lxWS,APC_Wheeled_01_command_base_lxWS);
class GCLASS(Badger_Command): B_APC_Wheeled_01_command_lxWS {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (Command)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "eventhandler_camo.hpp"
    #include "textures/BadgerIFV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_APC_Wheeled_01_mortar_lxWS,APC_Wheeled_01_mortar_base_lxWS);
class GCLASS(Badger_Mortar): B_APC_Wheeled_01_mortar_lxWS {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (Mortar)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "eventhandler_camo.hpp"
    #include "textures/BadgerIFV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_APC_Wheeled_01_atgm_lxWS_v2,APC_Wheeled_01_atgm_base_v2);
class GCLASS(Badger_ATGM): B_APC_Wheeled_01_atgm_lxWS_v2 {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger (L21A1, ATGM)";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "eventhandler_camo.hpp"
    #include "textures/BadgerIFV.hpp"
};

ADD_CAMO_EVENT_HANDLER(B_APC_Wheeled_01_medical_F,B_APC_Wheeled_01_base_F);
class GCLASS(Badger_Unarmed): B_APC_Wheeled_01_medical_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "Badger";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    #include "eventhandler_camo.hpp"
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
    #include "eventhandler_camo.hpp"
    #include "textures/BadgerMedical.hpp"
};
