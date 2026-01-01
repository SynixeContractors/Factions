class B_Heli_Transport_01_unarmed;
class GCLASS(Ghosthawk): B_Heli_Transport_01_unarmed {
    displayName = "UH-80 Ghosthawk";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1100;
    #include "textures/Ghosthawk.hpp"
};

class GCLASS(Ghosthawk_MEV): B_Heli_Transport_01_unarmed {
    displayName = "UH-80 Ghosthawk (MEV)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1100;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_medevac_CO.paa","\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"};
    class TextureSources {};
};

class B_Heli_Transport_01_F;
class GCLASS(Ghosthawk_M134): B_Heli_Transport_01_F {
    displayName = "UH-80 Ghosthawk (M134)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1100;
    #include "textures/Ghosthawk.hpp"
};

class B_Heli_Transport_01_pylons_F;
class GCLASS(Ghosthawk_Pylons): B_Heli_Transport_01_pylons_F {
    displayName = "UH-80 Ghosthawk (Pylons)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2200;
    #include "textures/Ghosthawk.hpp"
};
