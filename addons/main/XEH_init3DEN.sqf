#include "script_component.hpp"

add3DENEventHandler ["OnEditableEntityAdded", {
    params ["_entity"];
    if (typeName _entity != "OBJECT") exitWith {};
    if (BASE_CLASSES findIf { _entity isKindOf _x } != -1) then {
        [_entity] call FUNC(randomizeLoadout);
    };
}];
