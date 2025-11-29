class Pickup_service_base_old_rf;
class Pickup_covered_base_rf: Pickup_service_base_old_rf {
    class TextureSources {
        class AAF;
        class Argana_Royal;
        class Astra;
        class Black;
        class Blue;
        class Brown;
        class Bundeswehr;
        class Bundeswehr_Arid;
        class Bundeswehr_MP;
        class CisService;
        class Cruiser;
        class CSAT;
        class CSAT_Pacific;
        class Daltgreen;
        class Dazzle;
        class Dazzle_Arid;
        class Digital_desert;
        class EAF;
        class EAF_Arid;
        class FireDept;
        class GENDARMERIE;
        class Gray;
        class Green;
        class Guerilla_01;
        class Guerilla_02;
        class Guerilla_03;
        class Guerilla_04;
        class Guerilla_05;
        class Guerilla_06;
        class Guerilla_07;
        class Guerilla_08;
        class Guerilla_09;
        class Guerilla_10;
        class IDAP;
        class ION;
        class Jungle;
        class KZG_01;
        class MTP_Desert;
        class NATO;
        class NATO_P;
        class Olive;
        class Orange;
        class ParkRanger;
        class Red;
        class RescueTeam;
        class Tan;
        class Tundra;
        class UNA;
        class UNO;
        class Urban;
        class White;
        class Yellow;

        delete IDF_01;
    };
};
class GCLASS(Ram): Pickup_covered_base_rf {
    displayName = "Ram 1500";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    class TextureSources: TextureSources {
        RESET_FACTIONS(Argana_Royal);
        RESET_FACTIONS(Astra);
        RESET_FACTIONS(Black);
        RESET_FACTIONS(Blue);
        RESET_FACTIONS(Brown);
        RESET_FACTIONS(Bundeswehr);
        RESET_FACTIONS(Bundeswehr_Arid);
        RESET_FACTIONS(Bundeswehr_MP);
        RESET_FACTIONS(CisService);
        RESET_FACTIONS(Cruiser);
        RESET_FACTIONS(Daltgreen);
        RESET_FACTIONS(Digital_desert);
        RESET_FACTIONS(EAF_Arid);
        RESET_FACTIONS(FireDept);
        RESET_FACTIONS(GENDARMERIE);
        RESET_FACTIONS(Gray);
        RESET_FACTIONS(Green);
        RESET_FACTIONS(Guerilla_01);
        RESET_FACTIONS(Guerilla_02);
        RESET_FACTIONS(Guerilla_03);
        RESET_FACTIONS(Guerilla_04);
        RESET_FACTIONS(Guerilla_05);
        RESET_FACTIONS(Guerilla_06);
        RESET_FACTIONS(Guerilla_07);
        RESET_FACTIONS(Guerilla_08);
        RESET_FACTIONS(Guerilla_09);
        RESET_FACTIONS(Guerilla_10);
        RESET_FACTIONS(IDAP);
        RESET_FACTIONS(ION);
        RESET_FACTIONS(Jungle);
        RESET_FACTIONS(MTP_Desert);
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Orange);
        RESET_FACTIONS(ParkRanger);
        RESET_FACTIONS(Red);
        RESET_FACTIONS(RescueTeam);
        RESET_FACTIONS(Tan);
        RESET_FACTIONS(Tundra);
        RESET_FACTIONS(UNA);
        RESET_FACTIONS(UNO);
        RESET_FACTIONS(White);
        RESET_FACTIONS(Yellow);

        class AAF: AAF {
            displayName = "DAP Green";
            factions[] = {};
        };
        class Dazzle: Dazzle {
            displayName = "Dazzle Dark";
            factions[] = {};
        };
        class Dazzle_Arid: Dazzle_Arid {
            displayName = "Dazzle Light";
            factions[] = {};
        };
        class EAF: EAF {
            displayName = "Geo Woodland";
            factions[] = {};
        };
        class KZG_01: KZG_01 {
            displayName = "Khaybaran";
            factions[] = {};
        };
        class NATO: NATO {
            displayName = "Sand";
            factions[] = {};
        };
        class NATO_P: NATO_P {
            displayName = "Green";
            factions[] = {};
        };
        class Urban: Urban {
            displayName = "DAP Urban";
            factions[] = {};
        };
        class CSAT: CSAT {
            displayName = "Hex Ochre";
            factions[] = {};
        };
        class CSAT_Pacific: CSAT_Pacific {
            displayName = "Hex Tropic";
            factions[] = {};
        };
    };
};
class C_Pickup_repair_rf;
class GCLASS(RamServices): C_Pickup_repair_rf {
    displayName = "Ram 1500 (Services)";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
};
class C_IDAP_Pickup_water_rf;
class GCLASS(RamWater): C_IDAP_Pickup_water_rf {
    displayName = "Ram 1500 (Water)";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
};
class C_IDAP_Pickup_fuel_rf;
class GCLASS(RamFuel): C_IDAP_Pickup_fuel_rf {
    displayName = "Ram 1500 (Fuel)";
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
};
