class O_Truck_03_transport_F;
class GCLASS(TyphoonBench): O_Truck_03_transport_F {
    displayName = "Typhoon (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 260;
    #include "textures\Typhoon.hpp"
};

class O_Truck_03_covered_F;
class GCLASS(TyphoonCovered): O_Truck_03_covered_F {
    displayName = "Typhoon (Transport, Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 260;
    #include "textures\TyphoonCovered.hpp"
};

class O_Truck_03_cargo_RF;
class GCLASS(TyphoonFlatbed): O_Truck_03_cargo_RF {
    displayName = "Typhoon (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 260;
    #include "textures\Typhoon.hpp"
};

class O_Truck_03_fuel_F;
class GCLASS(TyphoonFuel): O_Truck_03_fuel_F {
    displayName = "Typhoon (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
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
    };
};

class O_Truck_03_ammo_F;
class GCLASS(TyphoonAmmo): O_Truck_03_ammo_F {
    displayName = "Typhoon (Ammo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
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
    };
};

class O_Truck_03_medical_F;
class GCLASS(TyphoonMedical): O_Truck_03_medical_F {
    displayName = "Typhoon (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 260;
    #include "textures\TyphoonCovered.hpp"
};

class O_Truck_03_device_F;
class GCLASS(TyphoonDevice): O_Truck_03_device_F {
    displayName = "Typhoon (Eastwind Device)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 260;
    #include "textures\Typhoon.hpp"
};

class O_Truck_03_repair_F;
class GCLASS(TyphoonRepair): O_Truck_03_repair_F {
    displayName = "Typhoon (Repair)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
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
    };
};
