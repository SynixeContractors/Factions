#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Standard counts
#define RIFLE_MAG_COUNT 7
#define RIFLE_GL_FRAG_COUNT 3
#define RIFLE_GL_SMOKE_COUNT 2

// Macro
#define MACRO_SENSITIVITY sensitivity = 6
#define BASE_CLASSES [QGCLASS(Base_BLUFOR), QGCLASS(Base_OPFOR), QGCLASS(Base_INDEP), QGCLASS(Base_CIV)]

// Main
#define SCOPE_DLC \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    scopeCurator = 2

// Class
#define GCLASS(var1) DOUBLES(PREFIX,var1)
#define QGCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

#define PCLASS(var1) TRIPLES(PREFIX,COMPONENT,var1)
#define PCLASS2(var1,var2) DOUBLES(TRIPLES(PREFIX,COMPONENT,var1),var2)
#define QPCLASS(var1) QUOTE(TRIPLES(PREFIX,COMPONENT,var1))
#define QPCLASS2(var1,var2) QUOTE(DOUBLES(TRIPLES(PREFIX,COMPONENT,var1),var2))

#ifdef SUBCOMPONENT
#define CLASS(var1) DOUBLES(PCLASS(SUBCOMPONENT),var1)
#define CLASS2(var1,var2) TRIPLES(PCLASS(SUBCOMPONENT),var1,var2)
#else
#define CLASS(var1) PCLASS(var1)
#define CLASS2(var1,var2) DOUBLES(PCLASS(var1),var2)
#endif
#define QCLASS(var1) QUOTE(CLASS(var1))
#define QCLASS2(var1,var2) QUOTE(CLASS2(var1,var2))

// Preivew
#define PREVIEW(var1) editorPreview = QPATHTOF(previews\DOUBLES(PREFIX,var1).jpg)

#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch"
#define DEFAULT_ITEMS_RADIO DEFAULT_ITEMS, "ItemRadio"

#define EMPTY_VEHICLE_INVENTORY \
    class TransportWeapons {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportBackpacks {}

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
