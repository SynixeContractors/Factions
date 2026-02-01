class B_Truck_01_mover_F;
class GCLASS(HEMTT): B_Truck_01_mover_F {
    displayName = "HEMTT (Tractor)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_02_co.paa",
                "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
            };
            factions[] = {};
        };
        class Red {
            displayName = "Red";
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_ext_01_fire_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_ext_02_fire_CO.paa",
                "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
            };
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_01_white_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_02_white_co.paa",
                "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
            };
            factions[] = {};
        };
        class UNA {
            displayName = "UNA";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_01_co.paa",
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_02_co.paa",
                "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\A3\Soft_F_Exp\Truck_01\Data\truck_01_mprimer_olive_CO.paa"
            };
            factions[] = {};
        };
        class France {
            displayName = "Savanna";
            textures[] = {
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_fr_CO.paa"
            };
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_brown_CO.paa"
            };
            factions[] = {};
        };
        class KZG {
            displayName = "Khaybaran";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_kzg_CO.paa"
            };
            factions[] = {};
        };
        class Theseus {
            displayName = "Theseus";
            textures[] = {
                "\x\tacs\addons\vehicles\data\truck_01_ext_01_theseus_co.paa",
                "\x\tacs\addons\vehicles\data\truck_01_ext_02_theseus_co.paa",
                "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
            };
            factions[] = {};
        };
        class Luba {
            displayName = "Blotches (Sand)";
            textures[] = {
                "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_01_LUB_CO.paa",
                "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_02_LUB_CO.paa",
                "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"
            };
            factions[] = {};
        };
    };
};

class B_Truck_01_cargo_F;
class GCLASS(HEMTT_Cargo): B_Truck_01_cargo_F {
    displayName = "HEMTT (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTCargo.hpp"
};

class B_Truck_01_flatbed_F;
class GCLASS(HEMTT_Flatbed): B_Truck_01_flatbed_F {
    displayName = "HEMTT (Flatbed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTFlatbed.hpp"
};

class B_Truck_01_repair_F;
class GCLASS(HEMTT_Repair): B_Truck_01_repair_F {
    displayName = "HEMTT (Repair)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTContainer.hpp"
};
class B_Truck_01_box_F;
class GCLASS(HEMTT_Container): B_Truck_01_box_F {
    displayName = "HEMTT (Container)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTContainer.hpp"
};

class B_Truck_01_transport_F;
class GCLASS(HEMTT_Bench): B_Truck_01_transport_F {
    displayName = "HEMTT (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTTransport.hpp"
};

class B_Truck_01_covered_F;
class GCLASS(HEMTT_Covered): B_Truck_01_covered_F {
    displayName = "HEMTT (Transport, Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTTransport.hpp"
};

class B_Truck_01_medical_F;
class GCLASS(HEMTT_Medical): B_Truck_01_medical_F {
    displayName = "HEMTT (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTTransport.hpp"
};

class B_Truck_01_fuel_F;
class GCLASS(HEMTT_Fuel): B_Truck_01_fuel_F {
    displayName = "HEMTT (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_02_co.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"
            };
            factions[] = {};
        };
        class Red {
            //There doesnt seem to be red tank texture, added it anyways
            displayName = "Red";
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_ext_01_fire_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_ext_02_fire_CO.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"
            };
            factions[] = {};
        };
        class White {
            displayName = "White";
            //There doesnt seem to be white tank texture, added it anyways
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_01_white_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_02_white_co.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"
            };
            factions[] = {};
        };
        class UNA {
            displayName = "UNA";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_01_co.paa",
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_02_co.paa",
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_Fuel_CO.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa"
            };
            factions[] = {};
        };
        class France {
            displayName = "Savanna";
            textures[] = {
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_fr_CO.paa"
            };
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_brown_CO.paa"
            };
            factions[] = {};
        };
        class KZG {
            displayName = "Khaybaran";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_kzg_CO.paa"
            };
            factions[] = {};
        };
        class Theseus {
            displayName = "Theseus";
            textures[] = {
                "\x\tacs\addons\vehicles\data\truck_01_ext_01_theseus_co.paa",
                "\x\tacs\addons\vehicles\data\truck_01_ext_02_theseus_co.paa",
                "\x\tacs\addons\vehicles\data\truck_01_fuel_theseus_co.paa"
            };
            factions[] = {};
        };
        class Luba {
            displayName = "Blotches (Desert)";
            textures[] = {
                 "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_01_LUB_CO.paa",\
                 "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_02_LUB_CO.paa",\
                "\a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"
            };
            factions[] = {};
        };
    };
};

class B_Truck_01_ammo_F;
class GCLASS(HEMTT_Ammo): B_Truck_01_ammo_F {
    displayName = "HEMTT (Ammo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            textures[] = {
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_02_co.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            };
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_01_white_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_02_white_co.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            };
            factions[] = {};
        };
        class UNA {
            displayName = "UNA";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_01_co.paa",
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_02_co.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa"
            };
            factions[] = {};
        };
        class France {
            displayName = "Savanna";
            textures[] = {
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_fr_CO.paa"
            };
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa"
            };
            factions[] = {};
        };
        class KZG {
            displayName = "Khaybaran";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_kzg_CO.paa",
            };
            factions[] = {};
        };
        class Theseus {
            displayName = "Theseus";
            textures[] = {
                "\x\tacs\addons\vehicles\data\truck_01_ext_01_theseus_co.paa",
                "\x\tacs\addons\vehicles\data\truck_01_ext_02_theseus_co.paa",
                "\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            };
            factions[] = {};
        };
        class Luba {
            displayName = "Blotches (Desert)";
            textures[] = {
                "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_01_LUB_CO.paa",\
                "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_02_LUB_CO.paa",\
                "\a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            };
            factions[] = {};
        };

    };
};

class B_Truck_01_FFT_rf;
class GCLASS(HEMTT_FireTruck): B_Truck_01_FFT_rf {
    displayName = "HEMTT (Firetruck)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources {
        class Red {
            displayName = "Firefighters";
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_ext_01_fire_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_ext_02_fire_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_fire_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_fire_co.paa"
            };
            factions[] = {};
        };
        class Blufor {
            displayName = "Sand";
            textures[] = {
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_Beta\truck_01\data\truck_01_ext_02_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_water_nato_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_nato_co.paa"
            };
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_01_white_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_ext_02_white_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_water_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_white_co.paa"
            };
            factions[] = {};
        };
        class UNA {
            displayName = "UNA";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_01_co.paa",
                "lxws\vehicles_f_lxws\data\Truck_01\truck_un_ext_02_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_water_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_white_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_water_nato_olive_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_nato_olive_co.paa"
            };
            factions[] = {};
        };
        class France {
            displayName = "Savanna";
            textures[] = {
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
                "\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_water_nato_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_nato_co.paa"
            };
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_water_nato_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_nato_co.paa"
            };
            factions[] = {};
        };
        class KZG {
            displayName = "Khaybaran";
            textures[] = {
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
                "\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_water_nato_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_nato_co.paa"
            };
            factions[] = {};
        };
        class Theseus {
            displayName = "Theseus";
            textures[] = {
                "\x\tacs\addons\vehicles\data\truck_01_ext_01_theseus_co.paa",
                "\x\tacs\addons\vehicles\data\truck_01_ext_02_theseus_co.paa",
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_fire_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_fire_co.paa"
            };
            factions[] = {};
        };
        class Luba {
            displayName = "Blotches (Desert)";
            textures[] = {
                "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_01_LUB_CO.paa",\
                "\s\synixe_factions\addons\vehicle_textures\data\hemtt\hemtt_02_LUB_CO.paa",\
                "\lxRF\vehicles_rf\Truck_01\data\Truck_01_water_nato_CO.paa",
                "\lxRF\vehicles_rf\Truck_01\data\truck_01_adds_nato_co.paa"
            };
            factions[] = {};
        };
    };
};
