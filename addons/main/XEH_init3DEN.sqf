#include "script_component.hpp"

add3DENEventHandler ["OnEditableEntityAdded", {
    params ["_entity"];
    if (typeName _entity != "OBJECT") exitWith {};
    if (BASE_CLASSES findIf { _entity isKindOf _x } != -1) then {
        [_entity] call FUNC(randomizeLoadout);
    };
}];

add3DENEventHandler ["OnPaste", {
    private _entities = get3DENSelected "object";
    {
        if (BASE_CLASSES findIf { _x isKindOf _x } != -1) then {
            [_x] call FUNC(randomizeLoadout);
        };
    } forEach _entities;
}];
