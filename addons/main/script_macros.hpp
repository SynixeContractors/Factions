#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// ----------------------------------------------------------------------------
// Class names
//
//   GCLASS(Ram)          synixe_factions_Ram                       shared (base_vehicles, main)
//   PCLASS(Base)         synixe_factions_<component>_Base          this addon
//   CLASS(Rifleman)      synixe_factions_<component>[_<sub>]_Rifleman
//                        this addon, and SUBCOMPONENT when one is defined
//
// The 2 / 3 variants join more parts with underscores, and Q* quotes the result.
// ----------------------------------------------------------------------------
#define GCLASS(var1) DOUBLES(PREFIX,var1)
#define GCLASS2(var1,var2) TRIPLES(PREFIX,var1,var2)
#define QGCLASS(var1) QUOTE(GCLASS(var1))
#define QGCLASS2(var1,var2) QUOTE(GCLASS2(var1,var2))

#define PCLASS(var1) TRIPLES(PREFIX,COMPONENT,var1)
#define PCLASS2(var1,var2) DOUBLES(PCLASS(var1),var2)
#define QPCLASS(var1) QUOTE(PCLASS(var1))
#define QPCLASS2(var1,var2) QUOTE(PCLASS2(var1,var2))

#ifdef SUBCOMPONENT
    #define CLASS(var1) DOUBLES(PCLASS(SUBCOMPONENT),var1)
    #define CLASS2(var1,var2) TRIPLES(PCLASS(SUBCOMPONENT),var1,var2)
    #define CLASS3(var1,var2,var3) DOUBLES(TRIPLES(PCLASS(SUBCOMPONENT),var1,var2),var3)
#else
    #define CLASS(var1) PCLASS(var1)
    #define CLASS2(var1,var2) DOUBLES(PCLASS(var1),var2)
    #define CLASS3(var1,var2,var3) TRIPLES(PCLASS(var1),var2,var3)
#endif
#define QCLASS(var1) QUOTE(CLASS(var1))
#define QCLASS2(var1,var2) QUOTE(CLASS2(var1,var2))
#define QCLASS3(var1,var2,var3) QUOTE(CLASS3(var1,var2,var3))

// ----------------------------------------------------------------------------
// Common properties
// ----------------------------------------------------------------------------
#define SCOPE_DLC \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    scopeCurator = 2

#define UNIT_SENSITIVITY sensitivity = 6

// Vehicles and containers that start with nothing in their inventory
#define EMPTY_INVENTORY \
    class TransportWeapons {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportBackpacks {}

#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch"
#define DEFAULT_ITEMS_RADIO DEFAULT_ITEMS, "ItemRadio"

// Units that get their loadout randomized (see XEH_preInit.sqf)
#define BASE_CLASSES [QGCLASS(Base_BLUFOR), QGCLASS(Base_OPFOR), QGCLASS(Base_INDEP), QGCLASS(Base_CIV)]

// ----------------------------------------------------------------------------
// Groups: used by the @Groups generator macro. Units are placed in a wedge, with
// ranks set for a squad leader, team leaders and their seconds.
// ----------------------------------------------------------------------------
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

// ----------------------------------------------------------------------------
// Flags: a map marker and a placeable flag pole using the same image
// ----------------------------------------------------------------------------
#define MAKE_FLAG(NAME,IMG_PATH) \
class CfgMarkers { \
    class Flag; \
    class CLASS(flag): Flag { \
        name = QUOTE(NAME); \
        icon = QPATHTOF(IMG_PATH); \
        texture = QPATHTOF(IMG_PATH); \
        color[] = {1,1,1,1}; \
        shadow = 0; \
        SCOPE_DLC; \
        markerClass = "Flags"; \
        size = 32; \
    }; \
}

#define MAKE_FLAGPOLE(NAME,IMG_PATH) \
class FlagCarrier; \
class CLASS(flagpole): FlagCarrier { \
    SCOPE_DLC; \
    displayName = QUOTE(Flag (NAME)); \
    class EventHandlers { \
        init = QUOTE((_this select 0) setFlagTexture 'PATHTOF(IMG_PATH)'); \
    }; \
}
