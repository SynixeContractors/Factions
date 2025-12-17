class B_Truck_01_mover_F;
class GCLASS(HEMTT): B_Truck_01_mover_F {
    displayName = "HEMTT";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    class TextureSources
    {
      delete ADF;
      class Blufor {
        displayName = "Sand";
        textures[] = {
          "\a3\soft_f_Beta\truck_01\data\truck_01_ext_01_co.paa",
          "\a3\soft_f_Beta\truck_01\data\truck_01_ext_02_co.paa",
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
    };
};
class B_Truck_01_cargo_F;
class GCLASS(HEMTT_flatbed): B_Truck_01_cargo_F {
    displayName = "HEMTT (Cargo)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTContainer.hpp"
};

class B_Truck_01_repair_F;
class GCLASS(HEMTT_repair): B_Truck_01_repair_F {
    displayName = "HEMTT (Repair)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTContainer.hpp"
};
class B_Truck_01_box_F;
class GCLASS(HEMTT_container): B_Truck_01_box_F {
    displayName = "HEMTT (Container)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTContainer.hpp"
};

class B_Truck_01_transport_F;
class GCLASS(HEMTT_bench): B_Truck_01_transport_F {
    displayName = "HEMTT (Transport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTTransport.hpp"
};
class B_Truck_01_covered_F;
class GCLASS(HEMTT_covered): B_Truck_01_covered_F {
    displayName = "HEMTT (Transport, Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTTransport.hpp"
};
class B_Truck_01_medical_F;
class GCLASS(HEMTT_medical): B_Truck_01_medical_F {
    displayName = "HEMTT (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #include "textures/HEMTTTransport.hpp"
};
