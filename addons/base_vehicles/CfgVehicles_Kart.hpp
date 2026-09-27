#define KART_GENERATED_TEXTURES(var1) \
QUOTE(##var1##_base),1, \
QUOTE(##var1##_fuel),1, \
QUOTE(##var1##_vrana),1, \
QUOTE(##var1##_redstone),1, \
QUOTE(##var1##_king),1 \

#define KART_TEXTURE_LIST textureList[] = { \
    "Bluking",1, \
    "Fuel",1, \
    "Redstone",1, \
    "Vrana",1, \
    KART_GENERATED_TEXTURES(black), \
    KART_GENERATED_TEXTURES(blue), \
    KART_GENERATED_TEXTURES(green), \
    KART_GENERATED_TEXTURES(orange), \
    KART_GENERATED_TEXTURES(red), \
    KART_GENERATED_TEXTURES(white), \
    KART_GENERATED_TEXTURES(yellow), \
}


ADD_CAMO_EVENT_HANDLER(Kart_01_Base_F,Car_F);
class GCLASS(Kart): Kart_01_Base_F {
    displayName = "Kart";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 5;
    KART_TEXTURE_LIST;
    #include "eventhandler_camo.hpp"
    #include "textures/Kart.hpp"
};
