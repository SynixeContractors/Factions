#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"

GVAR(randomLoadoutUnits) = createHashMap;

{
    [_x, "InitPost", { call FUNC(addMagazines) }] call CBA_fnc_addClassEventHandler;
} forEach BASE_CLASSES;

ADDON = true;
