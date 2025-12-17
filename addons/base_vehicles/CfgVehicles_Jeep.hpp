class Offroad_02_base_F: Car_F {
    class TextureSources {
        class Black;
        class Blue;
        class Brown;
        class Green;
        class IDAP ;
        class Jungle;
        class Olive;
        class Orange;
        class Red;
        class White;
    };
};
class GCLASS(Jeep): Offroad_02_base_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 80;
    class TextureSources: TextureSources {
        RESET_FACTIONS(Black);
        RESET_FACTIONS(Blue);
        RESET_FACTIONS(Brown);
        RESET_FACTIONS(Green);
        RESET_FACTIONS(IDAP);
        RESET_FACTIONS(Jungle);
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Orange);
        RESET_FACTIONS(Red);
        RESET_FACTIONS(White);
    };
};
class Offroad_02_LMG_base_F: Offroad_02_base_F {
    class TextureSources {
        class Black;
        class Blue;
        class Brown;
        class Green;
        class IDAP;
        class Jungle;
        class Olive;
        class Orange;
        class Red;
        class White;
    };
};
class GCLASS(Jeep_LMG): Offroad_02_LMG_base_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 80;
    class TextureSources: TextureSources {
        RESET_FACTIONS(Black);
        RESET_FACTIONS(Blue);
        RESET_FACTIONS(Brown);
        RESET_FACTIONS(Green);
        RESET_FACTIONS(IDAP);
        RESET_FACTIONS(Jungle);
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Orange);
        RESET_FACTIONS(Red);
        RESET_FACTIONS(White);
    };
};
