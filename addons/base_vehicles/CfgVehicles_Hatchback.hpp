#define HATCHBACK_TEXTURE_LIST textureList[] = {\
    "Beige", HATCHBACK_TEXTURE_CIVILIAN,\
    "Beigecustom", HATCHBACK_TEXTURE_CIVILIAN,\
    "Black", HATCHBACK_TEXTURE_CIVILIAN,\
    "Blue", HATCHBACK_TEXTURE_CIVILIAN,\
    "Bluecustom", HATCHBACK_TEXTURE_CIVILIAN,\
    "Dark", HATCHBACK_TEXTURE_CIVILIAN,\
    "Green", HATCHBACK_TEXTURE_CIVILIAN,\
    "Grey", HATCHBACK_TEXTURE_CIVILIAN,\
    \
    "Beige_wrap", HATCHBACK_TEXTURE_SPORT,\
    "Blue_wrap", HATCHBACK_TEXTURE_SPORT,\
    "Green_wrap", HATCHBACK_TEXTURE_SPORT,\
    "Orange", HATCHBACK_TEXTURE_SPORT,\
    "Red", HATCHBACK_TEXTURE_SPORT,\
    "White", HATCHBACK_TEXTURE_SPORT,\
}


class C_Hatchback_01_F;
class GCLASS(Hatchback): C_Hatchback_01_F {
    displayName = "Hatchback";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #define HATCHBACK_TEXTURE_CIVILIAN 1
    #define HATCHBACK_TEXTURE_SPORT 0.1
    HATCHBACK_TEXTURE_LIST;
    #undef HATCHBACK_TEXTURE_CIVILIAN
    #undef HATCHBACK_TEXTURE_SPORT
    class TextureSources {
         #include "textures/Hatchback.hpp"
    };
};

class C_Hatchback_01_sport_F;
class GCLASS(Hatchback_Sport): C_Hatchback_01_sport_F {
    displayName = "Hatchback (Sport)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #define HATCHBACK_TEXTURE_CIVILIAN 1
    #define HATCHBACK_TEXTURE_SPORT 1
    HATCHBACK_TEXTURE_LIST;
    #undef HATCHBACK_TEXTURE_CIVILIAN
    #undef HATCHBACK_TEXTURE_SPORT
    class TextureSources {
        #include "textures/Hatchback.hpp"
    };
};
