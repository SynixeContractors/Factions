class MBT_02_base_F: Tank_F {
    class TextureSources;
};

class MBT_02_base_v2_F: MBT_02_base_F {
    class TextureSources: TextureSources {
        //FIXME: actuall add correct camos
        class Ardistan;
        class Green;
        class GreenHex;
        class Sep_01;
        class SFIA;
        class Takistan;
        class WoodlandHex;
    };
};
class GCLASS(T100): MBT_02_base_v2_F {
    faction = QGCLASS(base_vehicles);
    side = 3;
    scope = 2;
    scopeCurator = 2;
    displayName = "T-100";
    class TextureSources: TextureSources {
        RESET_FACTIONS(Ardistan);
        RESET_FACTIONS(Green);
        RESET_FACTIONS(GreenHex);
        RESET_FACTIONS(Sep_01);
        RESET_FACTIONS(SFIA);
        RESET_FACTIONS(Takistan);
        RESET_FACTIONS(WoodlandHex);
    };
};
