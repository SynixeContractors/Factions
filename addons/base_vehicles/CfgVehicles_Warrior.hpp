class APC_Tracked_03_base_F: Tank_F {
    class TextureSources;
};
class APC_Tracked_03_base_v2_F: APC_Tracked_03_base_F {
    class TextureSources: TextureSources {
        class EAF_01;
        class EAF_Arid;
        class Indep_01;
        class Indep_02;
        class Indep_03;
        class Olive_01;
        class Sand_01;
    };
};
class GCLASS(Warrior): APC_Tracked_03_base_v2_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    displayName = "FV510 Warrior";
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 190;
    class TextureSources: TextureSources {
        RESET_FACTIONS(Olive_01);
        RESET_FACTIONS(Sand_01);
        class EAF_01: EAF_01 {
            displayName = "LDF (Geo Woodland)";
            factions[] = {};
        };
        class EAF_Arid: EAF_Arid {
            displayName = "LDF (Arid)";
            factions[] = {};
        };
        class Indep_01: Indep_01 {
            displayName = "DAP Green (Woodland Net)";
            factions[] = {};
        };
        class Indep_02: Indep_02 {
            displayName = "DAP Green (Jungle Net)";
            factions[] = {};
        };
        class Indep_03: Indep_03 {
            displayName = "DAP Green (Desert Net)";
            factions[] = {};
        };
    };
};
