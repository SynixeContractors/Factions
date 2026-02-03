#include "..\script_component.hpp"

params [
    ["_unit", objNull, [objNull]],
    ["_packs", true, [true]]
];

if (isNull _unit) exitWith {
    WARNING_1("Unit [%1] is null",_unit);
    false
};

if !(_unit isKindOf "CAManBase") exitWith {
    false
};

if (!local _unit) exitWith {true};

private _cache = [_unit] call FUNC(getConfig);
if (_cache isEqualTo []) exitWith {true};

(_unit call CBA_fnc_getLoadout) params ["_loadout", "_extendedInfo"];

// Containers
{
    private _slot = _loadout select _x;
    private _cached = _cache select _x;
    if (_cached isEqualTo []) then {
        _loadout set [_x, []];
        continue;
    };
    if (_slot isEqualTo []) then {
        _loadout set [_x, ["", []]];
        _slot = _loadout select _x;
    };
    _slot set [0, selectRandomWeighted (_cached select 0)];
    if (!_packs) then { continue; };
    private _packs = _cached select 1;
    private _items = +(_cached select 2);
    {
        _items append ([_x, true] call FUNC(packItems));
    } forEach _packs;
    private _itemsSlot = _slot select 1;
    {
        _itemsSlot pushBack _x;
    } forEach _items;
} forEach [3,4,5];

// Weapons
{
    private _slot = _loadout select _x;
    private _cached = _cache select _x;
    if (_cached isEqualTo []) then {
        _loadout set [_x, []];
        continue;
    };
    if (_slot isEqualTo []) then {
        _loadout set [_x, ["", "", "", "", [], [], ""]];
        _slot = _loadout select _x;
    };

    private _weaponOptions = [];
    {
        _weaponOptions pushBack (_x select 0);
        _weaponOptions pushBack (_x select 1);
    } forEach (_cached select 0);
    _slot set [0, selectRandomWeighted _weaponOptions];

    {
        private _items = _cached select (_forEachIndex + 1);
        if (_items isEqualTo []) then { continue; };
        _slot set [_x, selectRandomWeighted _items];
    } forEach [1,2,3,6];
} forEach [0,1,2,8];

// Headgear
{
    private _cached = _cache select _x;
    if (_cached isEqualTo []) then {
        _loadout set [_x, []];
        continue;
    };
    _loadout set [_x, selectRandomWeighted _cached];
} forEach [6];

// Assigned Items
private _assignedCache = _cache select 9;
if (_assignedCache isNotEqualTo []) then {
    private _assignedSlot = _loadout select 9;
    {
        _assignedSlot set [_x, _assignedCache select _x];
    } forEach [0,1,2,3,4,5];
};

[_unit, [_loadout, _extendedInfo]] call CBA_fnc_setLoadout;

if (is3DEN) then {
    _unit spawn {
        sleep 0.1;
        ignore3DENHistory {
            save3DENInventory [get3DENEntityID _this];
        };
    };
};
