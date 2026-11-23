// Base vehicles are placeable as-is (side = civilian), see also EMPTY_INVENTORY
#define SCOPE_DLC_VEHICLE \
    side = 3; \
    scope = 2; \
    scopeCurator = 2; \
    forceInGarage = 1

// Pylon presets
#include "pylons\pylons.hpp"

// Camo nets
#define NET_GREEN "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
#define NET_HEX "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
#define NET_GREENHEX "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
#define NET_WINTER "go_data_winter\skins\data\go_camonet_white_co.paa"
#define NET_JUNGLE "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
#define NET_DESERT "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
#define NET_BICOLOR "\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_BAF_Green_CO.paa"
#define NET_WOODLAND "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
#define NET_AAF "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
#define NET_AAFDESERT "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
#define NET_AAFJUNGLE "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa"
#define NET_STRIPEDESERT "a3\armor_f\Data\camonet_AAF_stripe_desert_CO.paa"

// Expose a vanilla vehicle's EventHandlers so ours can extend it (see eventhandler_camo.hpp)
#define ADD_CAMO_EVENT_HANDLER(CLASS_VEHICLE, CLASS_BASE) \
class CLASS_BASE; \
class CLASS_VEHICLE: CLASS_BASE { \
    class EventHandlers; \
}
#define ADD_CAMO_EVENT_HANDLER_NOBASE(CLASS_VEHICLE, CLASS_BASE) \
class CLASS_VEHICLE: CLASS_BASE { \
    class EventHandlers; \
}

// Set an animation source's initial phase in a vehicle's AnimationSources
#define ANIMATION_OFF(var1) \
class var1: var1 { \
    initPhase = 0; \
}
#define ANIMATION_ON(var1) \
class var1: var1 { \
    initPhase = 1; \
}
