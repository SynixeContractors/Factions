#include "script_component.hpp"

add3DENEventHandler ["OnEditableEntityAdded", {
    params ["_entity"];
    if (typeName _entity != "OBJECT") exitWith {};
    private _units = [_entity];
    _units append crew _entity;
    {
        private _entity = _x;
        if (BASE_CLASSES findIf { _entity isKindOf _x } != -1) then {
            [_entity] call FUNC(randomizeLoadout);
        };
    } forEach _units;
}];

add3DENEventHandler ["OnPaste", {
    private _entities = get3DENSelected "object";
    private _units = [];
    {
        _units append crew _x;
        _units pushBack _x;
    } forEach _entities;
    {
        private _entity = _x;
        if (BASE_CLASSES findIf { _entity isKindOf _x } != -1) then {
            [_entity] call FUNC(randomizeLoadout);
        };
    } forEach _units;
}];
