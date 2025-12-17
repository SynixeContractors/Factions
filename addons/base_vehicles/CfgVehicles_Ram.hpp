#define RAM_TEXTURES class TextureSources: TextureSources { \
        class AAF; \
        class Argana_Royal; \
        class Astra; \
        class Black; \
        class Blue; \
        class Brown; \
        class Bundeswehr; \
        class Bundeswehr_Arid; \
        class Bundeswehr_MP; \
        class CisService; \
        class Cruiser; \
        class CSAT; \
        class CSAT_Pacific; \
        class Daltgreen; \
        class Dazzle; \
        class Dazzle_Arid; \
        class Digital_desert; \
        class EAF; \
        class EAF_Arid; \
        class FireDept; \
        class GENDARMERIE; \
        class Gray; \
        class Green; \
        class Guerilla_01; \
        class Guerilla_02; \
        class Guerilla_03; \
        class Guerilla_04; \
        class Guerilla_05; \
        class Guerilla_06; \
        class Guerilla_07; \
        class Guerilla_08; \
        class Guerilla_09; \
        class Guerilla_10; \
        class IDAP; \
        class ION; \
        class Jungle; \
        class KZG_01; \
        class MTP_Desert; \
        class NATO; \
        class NATO_P; \
        class Olive; \
        class Orange; \
        class ParkRanger; \
        class Red; \
        class RescueTeam; \
        class Tan; \
        class Tundra; \
        class UNA; \
        class UNO; \
        class Urban; \
        class White; \
        class Yellow; \
        delete IDF_01; \
    }

#define RESET_RAM_TEXTURES class TextureSources: TextureSources { \
        RESET_FACTIONS(Argana_Royal); \
        RESET_FACTIONS(Astra); \
        RESET_FACTIONS(Black); \
        RESET_FACTIONS(Blue); \
        RESET_FACTIONS(Brown); \
        RESET_FACTIONS(Bundeswehr); \
        RESET_FACTIONS(Bundeswehr_Arid); \
        RESET_FACTIONS(Bundeswehr_MP); \
        RESET_FACTIONS(CisService); \
        RESET_FACTIONS(Cruiser); \
        RESET_FACTIONS(Daltgreen); \
        RESET_FACTIONS(Digital_desert); \
        RESET_FACTIONS(FireDept); \
        RESET_FACTIONS(GENDARMERIE); \
        RESET_FACTIONS(Gray); \
        RESET_FACTIONS(Green); \
        RESET_FACTIONS(Guerilla_01); \
        RESET_FACTIONS(Guerilla_02); \
        RESET_FACTIONS(Guerilla_03); \
        RESET_FACTIONS(Guerilla_04); \
        RESET_FACTIONS(Guerilla_05); \
        RESET_FACTIONS(Guerilla_06); \
        RESET_FACTIONS(Guerilla_07); \
        RESET_FACTIONS(Guerilla_08); \
        RESET_FACTIONS(Guerilla_09); \
        RESET_FACTIONS(Guerilla_10); \
        RESET_FACTIONS(ION); \
        RESET_FACTIONS(Jungle); \
        RESET_FACTIONS(MTP_Desert); \
        RESET_FACTIONS(Olive); \
        RESET_FACTIONS(Orange); \
        RESET_FACTIONS(ParkRanger); \
        RESET_FACTIONS(Red); \
        RESET_FACTIONS(RescueTeam); \
        RESET_FACTIONS(Tan); \
        RESET_FACTIONS(Tundra); \
        RESET_FACTIONS(UNA); \
        RESET_FACTIONS(UNO); \
        RESET_FACTIONS(White); \
        RESET_FACTIONS(Yellow); \
        class AAF: AAF { \
            displayName = "DAP Green"; \
            factions[] = {}; \
        }; \
        class Dazzle: Dazzle { \
            displayName = "Dazzle Dark"; \
            factions[] = {}; \
        }; \
        class Dazzle_Arid: Dazzle_Arid { \
            displayName = "Dazzle Light"; \
            factions[] = {}; \
        }; \
        class EAF: EAF { \
            displayName = "LDF (Geo Woodland)"; \
            factions[] = {}; \
        }; \
        class EAF_Arid: EAF_Arid { \
            displayName = "Livonia"; \
            factions[] = {}; \
        }; \
        class KZG_01: KZG_01 { \
            displayName = "Khaybaran"; \
            factions[] = {}; \
        }; \
        class NATO: NATO { \
            displayName = "Sand"; \
            factions[] = {}; \
        }; \
        class NATO_P: NATO_P { \
            displayName = "Green"; \
            factions[] = {}; \
        }; \
        class Urban: Urban { \
            displayName = "DAP Urban"; \
            factions[] = {}; \
        }; \
        class CSAT: CSAT { \
            displayName = "Hex Ochre"; \
            factions[] = {}; \
        }; \
        class CSAT_Pacific: CSAT_Pacific { \
            displayName = "Hex Tropic"; \
            factions[] = {}; \
        }; \
        class IDAP: IDAP { \
            displayName = "IDAP"; \
            factions[] = {}; \
            textures[] = {"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_idap_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_water_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa","\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa","\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_idap_co.paa"}; \
            materials[] = {"lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_aat.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_launcher.rvmat","lxrf\vehicles_rf\pickup_01\Data\pickup_01_service.rvmat"}; \
        }; \
        delete Insurgent_01; \
        delete Insurgent_02; \
        delete Insurgent_03; \
        delete Insurgent_04; \
        delete Insurgent_05; \
        delete Insurgent_06; \
        delete Sep_01; \
    }

class Offroad_01_unarmed_base_F: Offroad_01_base_F {
    class TextureSources;
};
class Pickup_01_base_rf: Offroad_01_unarmed_base_F {
    RAM_TEXTURES;
};
class GCLASS(Ram): Pickup_01_base_rf {
    displayName = "Ram 1500";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_service_base_old_rf: Pickup_01_base_rf {
    class TextureSources: TextureSources {};
};
class Pickup_covered_base_rf: Pickup_service_base_old_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_Covered): Pickup_covered_base_rf {
    displayName = "Ram 1500 (Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_hmg_base_rf: Pickup_01_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_HMG): Pickup_01_hmg_base_rf {
    displayName = "Ram 1500 (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_aat_base_rf: Pickup_01_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_AA): Pickup_01_aat_base_rf {
    displayName = "Ram 1500 (AA)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_Rocket_base_rf: Pickup_01_aat_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_Rocket): Pickup_01_Rocket_base_rf {
    displayName = "Ram 1500 (Rocket)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_rcws_base_rf: Pickup_01_aat_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_RCWS): Pickup_01_rcws_base_rf {
    displayName = "Ram 1500 (RCWS)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_minigun_base_rf: Pickup_01_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_Minigun): Pickup_01_minigun_base_rf {
    displayName = "Ram 1500 (Minigun)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_service_base_rf: Pickup_service_base_old_rf {
    class TextureSources: TextureSources {};
};
class Pickup_comms_base_rf: Pickup_service_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_Comms): Pickup_comms_base_rf {
    displayName = "Ram 1500 (Comms)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_mrl_base_rf: Pickup_01_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_MRL): Pickup_01_mrl_base_rf {
    displayName = "Ram 1500 (MRL)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};
class Pickup_fuel_base_rf: Pickup_01_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_Fuel): Pickup_fuel_base_rf {
    displayName = "Ram 1500 (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Pickup_01_mmg_base_rf: Pickup_01_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_MMG): Pickup_01_mmg_base_rf {
    displayName = "Ram 1500 (MMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

class Aegis_Pickup_01_AT_base_RF: Pickup_01_aat_base_rf {
    RAM_TEXTURES;
};
class GCLASS(Ram_AT): Aegis_Pickup_01_AT_base_RF {
    displayName = "Ram 1500 (AT)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    RESET_RAM_TEXTURES;
    ace_refuel_fuelCapacity = 98;
};

