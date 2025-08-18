#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Macro
#define MACRO_SENSITIVITY sensitivity = 6

// Main

#define SCOPE_DLC \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    scopeCurator = 2

#define WEAPON_DEFAULTS \
    dlc = QUOTE(PREFIX); \
    scope = 1; \
    scopeCurator = 1

#define EQUIP_OPTIC(OPTIC) class LinkedItemsOptic { \
    slot = "CowsSlot"; \
    item = #OPTIC; \
}

#define EQUIP_POINTER(POINTER) class LinkedItemsAcc { \
    slot = "PointerSlot"; \
    item = #POINTER; \
}

#define EQUIP_MUZZLE(MUZZLE) class LinkedItemsMuzzle { \
    slot = "MuzzleSlot"; \
    item = #MUZZLE; \
}

#define EQUIP_BIPOD(BIPOD) class LinkedItemsUnder { \
    slot = "UnderBarrelSlot"; \
    item = #BIPOD; \
}

#define BACKPACK_DEFAULTS \
    dlc = QUOTE(PREFIX); \
    scope = 1; \
    scopeCurator = 1

#define BACKPACK_ITEMS_MEDICAL \
    class TransportItems { \
        ADDITEM(ACE_elasticBandage,40); \
        ADDITEM(ACE_packingBandage,40); \
        ADDITEM(ACE_epinephrine,1); \
        ADDITEM(ACE_morphine,2); \
        ADDITEM(ACE_painkillers,4); \
        ADDITEM(ACE_salineIV,4); \
        ADDITEM(ACE_salineIV_500,4); \
        ADDITEM(ACE_salineIV_250,2); \
        ADDITEM(ACE_splint,4); \
        ADDITEM(ACE_tourniquet,4); \
        ADDITEM(ACE_surgicalKit,1); \
        ADDITEM(ACE_suture,50); \
    }

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Preivew
#define PREVIEW(var1) editorPreview = QPATHTOF(previews\DOUBLES(PREFIX,var1).jpg)

// Inventory
#define ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define ADDMAG(ITEM,COUNT) class _xx_##ITEM { \
    magazine = #ITEM; \
    count = COUNT; \
}

#define R2(ITEM) ITEM,ITEM
#define R3(ITEM) ITEM,ITEM,ITEM
#define R4(ITEM) ITEM,ITEM,ITEM,ITEM
#define R5(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM
#define R6(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R7(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R8(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R9(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R10(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R11(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R12(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R13(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define R14(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM

#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch"
#define DEFAULT_ITEMS_RADIO DEFAULT_ITEMS, "ItemRadio"

#define EMPTY_VEHICLE_INVENTORY \
    class TransportWeapons {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportBackpacks {}

#define MACRO_MEDICAL_BACKPACK_ITEMS \
    ADDITEM(ACE_fieldDressing,20); \
    ADDITEM(ACE_epinephrine,5); \
    ADDITEM(ACE_morphine,5); \
    ADDITEM(ACE_bloodIV,4); \
    ADDITEM(ACE_bloodIV_500,4); \
    ADDITEM(ACE_splint,4); \
    ADDITEM(ACE_tourniquet,4); \
    ADDITEM(ACE_bloodIV_250,2)

#define GROUP_UNIT(UNIT,SIDE) __GROUP_UNIT(__COUNTER__,UNIT,SIDE)

#define __GROUP_UNIT(COUNTER, UNIT, SIDE) \
    class unit##COUNTER { \
        vehicle = #UNIT; \
        side = SIDE; \
        #if COUNTER == 0 \
        rank = "SERGEANT"; \
        #else \
        #if COUNTER == 2 \
        rank = "SERGEANT"; \
        #else \
        #if COUNTER == 3 \
        rank = "CORPORAL"; \
        #else \
        #if COUNTER == 5 \
        rank = "SERGEANT"; \
        #else \
        #if COUNTER == 6 \
        rank = "CORPORAL"; \
        #else \
        rank = "PRIVATE"; \
        #endif \
        #endif \
        #endif \
        #endif \
        #endif \
        position[] = { \
            QUOTE(5 * floor ((COUNTER + 1) / 2) * (-1 ^ (COUNTER + 1))), \
            QUOTE(-5 * floor ((COUNTER + 1) / 2)), \
            0 \
        }; \
    }
