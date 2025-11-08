class APC_Wheeled_01_base_F: Wheeled_APC_F {
    class TextureSources;
};
class APC_Wheeled_01_base_v2_F: APC_Wheeled_01_base_F {
    class TextureSources: TextureSources {
        class ADF;
        class EAF_01;
        class EAF_Arid;
        class Marar;
        class Olive;
        class Sand;
        class WDL_01;
    };
};
class GCLASS(Badger): APC_Wheeled_01_base_v2_F {
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger (L21A1)";
    class TextureSources: TextureSources {
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Sand);
        RESET_FACTIONS(WDL_01);
        RESET_FACTIONS(Marar);
        class ADF: ADF {
            scope = 1;
        };
        class EAF_01: EAF_01 {
            displayName = "Geo Woodland";
            factions[] = {};
        };
        class EAF_Arid: EAF_Arid {
            displayName = "Geo Arid";
            factions[] = {};
        };
    };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportBackpacks {};
};

class APC_Wheeled_01_command_base_lxWS: APC_Wheeled_01_base_F {
    class TextureSources: TextureSources {
        class ADF;
        class BLACK;
        class EAF_01;
        class EAF_Arid;
        class ION_BLACK;
        class Marar;
        class Olive;
        class Sand;
        class Sand_Desert;
        class UN_WHITE;
        class WDL_01;
    };
};
class GCLASS(Badger_Command): APC_Wheeled_01_command_base_lxWS {
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger (Command)";
    class TextureSources: TextureSources {
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Sand);
        RESET_FACTIONS(WDL_01);
        RESET_FACTIONS(UN_WHITE);
        RESET_FACTIONS(ION_BLACK);
        RESET_FACTIONS(BLACK);
        RESET_FACTIONS(Marar);
        class ADF: ADF {
            scope = 1;
        };
        class EAF_01: EAF_01 {
            displayName = "Geo Woodland";
            factions[] = {};
        };
        class EAF_Arid: EAF_Arid {
            displayName = "Geo Arid";
            factions[] = {};
        };
        class Sand_Desert: Sand_Desert {
            displayName = "Sand (Desert Net)";
            factions[] = {};
        };
    };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportBackpacks {};
};

class APC_Wheeled_01_mortar_base_lxWS: APC_Wheeled_01_base_F {
    class TextureSources: TextureSources {
        class ADF;
        class BLACK;
        class EAF_01;
        class EAF_Arid;
        class ION_BLACK;
        class Marar;
        class Olive;
        class Sand;
        class Sand_Desert;
        class UN_WHITE;
        class WDL_01;
    };
};
class GCLASS(Badger_Mortar): APC_Wheeled_01_mortar_base_lxWS {
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger (Mortar)";
    class TextureSources: TextureSources {
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Sand);
        RESET_FACTIONS(WDL_01);
        RESET_FACTIONS(UN_WHITE);
        RESET_FACTIONS(ION_BLACK);
        RESET_FACTIONS(BLACK);
        RESET_FACTIONS(Marar);
        class ADF: ADF {
            scope = 1;
        };
        class EAF_01: EAF_01 {
            displayName = "Geo Woodland";
            factions[] = {};
        };
        class EAF_Arid: EAF_Arid {
            displayName = "Geo Arid";
            factions[] = {};
        };
        class Sand_Desert: Sand_Desert {
            displayName = "Sand (Desert Net)";
            factions[] = {};
        };
    };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportBackpacks {};
};

class APC_Wheeled_01_atgm_base_lxWS: APC_Wheeled_01_base_F {
    class TextureSources;
};
class APC_Wheeled_01_atgm_base_v2: APC_Wheeled_01_atgm_base_lxWS {
    class TextureSources: TextureSources {
        class ADF;
        class BLACK;
        class EAF_01;
        class EAF_Arid;
        class ION_BLACK;
        class Marar;
        class Olive;
        class Sand;
        class Sand_Desert;
        class UN_WHITE;
        class WDL_01;
    };
};
class GCLASS(Badger_ATGM): APC_Wheeled_01_atgm_base_v2 {
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger (L21A1, ATGM)";
    class TextureSources: TextureSources {
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Sand);
        RESET_FACTIONS(WDL_01);
        RESET_FACTIONS(UN_WHITE);
        RESET_FACTIONS(ION_BLACK);
        RESET_FACTIONS(BLACK);
        RESET_FACTIONS(Marar);
        class ADF: ADF {
            scope = 1;
        };
        class EAF_01: EAF_01 {
            displayName = "Geo Woodland";
            factions[] = {};
        };
        class EAF_Arid: EAF_Arid {
            displayName = "Geo Arid";
            factions[] = {};
        };
        class Sand_Desert: Sand_Desert {
            displayName = "Sand (Desert Net)";
            factions[] = {};
        };
    };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportBackpacks {};
};

class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {
    class TextureSources;
};
class B_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_base_F {
    class TextureSources: TextureSources {
        class ADF;
        class EAF_01;
        class EAF_Arid;
        class Marar;
        class Olive;
        class Sand;
        class WDL_01;
    };
};
class GCLASS(Badger_Medical): B_APC_Wheeled_01_medical_F {
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger (Medical)";
    class TextureSources: TextureSources {
        RESET_FACTIONS(Olive);
        RESET_FACTIONS(Sand);
        RESET_FACTIONS(WDL_01);
        RESET_FACTIONS(Marar);
        class ADF: ADF {
            scope = 1;
        };
        class EAF_01: EAF_01 {
            displayName = "Geo Woodland";
            factions[] = {};
        };
        class EAF_Arid: EAF_Arid {
            displayName = "Geo Arid";
            factions[] = {};
        };
    };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportBackpacks {};
};
