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
      class Blufor
      {
        displayName = "Sand";
        textures[] = {"\a3\soft_f_Beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_Beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"};
        factions[] = {};
      };
      class Olive
      {
        displayName = "Olive";
        textures[] = {"\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_mprimer_olive_CO.paa"};
        factions[] = {};
      };
      class France
      {
        displayName = "Savanna";
        textures[] = {"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa","\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa","\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_fr_CO.paa"};
        factions[] = {};
      };
      class Brown
      {
        displayName = "Brown";
        textures[] = {"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa","\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa","\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_brown_CO.paa"};
        factions[] = {};
      };
      class KZG
      {
        displayName = "Khaybaran";
        textures[] = {"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa","\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa","\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_kzg_CO.paa"};
        factions[] = {};
      };
    };
};
