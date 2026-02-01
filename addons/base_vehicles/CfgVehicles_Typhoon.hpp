class O_Truck_03_transport_F;
class GCLASS(Typhoon_Bench): O_Truck_03_transport_F {
    displayName = "Typhoon (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    #include "textures\Typhoon.hpp"
};

class O_Truck_03_covered_F;
class GCLASS(Typhoon_Covered): O_Truck_03_covered_F {
    displayName = "Typhoon (Transport, Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    #include "textures\TyphoonCovered.hpp"
};

class O_Truck_03_cargo_RF;
class GCLASS(Typhoon_Cargo): O_Truck_03_cargo_RF {
    displayName = "Typhoon (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    #include "textures\Typhoon.hpp"
};

class O_Truck_03_fuel_F;
class GCLASS(Typhoon_Fuel): O_Truck_03_fuel_F {
    displayName = "Typhoon (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Ru {
            displayName = "Summer";
            textures[] = {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUCamo_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Woodland";
            textures[] = {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_Fuel_whex_CO.paa"
            };
            factions[] = {};
        };
        class Maze {
            displayName = "Maze";
            textures[] = {
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_01_JSN_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_02_JSN_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_cargo_JSN_CO.paa",
            };
            factions[] = {};
        };
    };
};

class O_Truck_03_ammo_F;
class GCLASS(Typhoon_Ammo): O_Truck_03_ammo_F {
    displayName = "Typhoon (Ammo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Ru {
            displayName = "Summer";
            textures[] = {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Woodland";
            textures[] = {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cargo_whex_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
            };
            factions[] = {};
        };
        class Maze {
            displayName = "Maze";
            textures[] = {
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_01_JSN_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_02_JSN_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_cargo_JSN_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUkhk_CO.paa"
            };
            factions[] = {};
        };
    };
};

class O_Truck_03_medical_F;
class GCLASS(Typhoon_Medical): O_Truck_03_medical_F {
    displayName = "Typhoon (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    #include "textures\TyphoonCovered.hpp"
};

class O_Truck_03_device_F;
class GCLASS(Typhoon_Device): O_Truck_03_device_F {
    displayName = "Typhoon (Eastwind Device)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    #include "textures\Typhoon.hpp"
};

class O_Truck_03_repair_F;
class GCLASS(Typhoon_Repair): O_Truck_03_repair_F {
    displayName = "Typhoon (Repair)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 260;
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        class Ru {
            displayName = "Summer";
            textures[] = {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUCamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUCamo_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Woodland";
            textures[] = {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex Ochre";
            textures[] = {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ammo_whex_CO.paa"
            };
            factions[] = {};
        };
        class Maze {
            displayName = "Maze";
            textures[] = {
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_01_JSN_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_02_JSN_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\typhoon\typhoon_ammo_JSN_CO.paa",
            };
            factions[] = {};
        };

    };
};
