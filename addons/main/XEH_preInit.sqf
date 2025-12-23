#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"

GVAR(randomLoadoutUnits) = createHashMap;

{
    [_x, "Init", { 
        if (CBA_missionTime > 1) exitWith {};
        (_this#0) setVariable [QGVAR(randomLoadoutApplied), true];
    }] call CBA_fnc_addClassEventHandler;
} forEach BASE_CLASSES;

{
    [_x, "InitPost", { 
        if !(local (_this#0)) exitWith {};
        if !((_this#0) getVariable [QGVAR(randomLoadoutApplied), false]) then {
            _this call FUNC(randomizeLoadout);
        };
        _this call FUNC(addMagazines);
    }] call CBA_fnc_addClassEventHandler;
} forEach BASE_CLASSES;

// {
//     [_x, "Init", {
//         if !(local (_this#0)) exitWith {};
//         _this call FUNC(texture);
//     }] call CBA_fnc_addClassEventHandler;
// } forEach [
//     QGCLASS(Mohawk),
//     QGCLASS(Mohawk_Executive),
//     QGCLASS(Orca),
//     QGCLASS(Orca),
//     QGCLASS(OrcaArmed),
//     QGCLASS(OrcaR),
//     QGCLASS(OrcaAR)
// ];

ADDON = true;
