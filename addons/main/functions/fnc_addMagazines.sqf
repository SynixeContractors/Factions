#include "..\script_component.hpp"

params [["_unit", objNull, [objNull]]];

if (isNull _unit) exitWith {
    WARNING_1("Unit [%1] is null",_unit);
    false
};

if (!local _unit) exitWith {true};

private _cache = [_unit] call FUNC(getConfig);
if (_cache isEqualTo []) exitWith {true};

(_unit call CBA_fnc_getLoadout) params ["_loadout", "_extendedInfo"];

{
    private _weaponIndex = _x;
    private _weaponSlot = _loadout select _x;
    if (_weaponSlot isEqualTo []) then { continue; };
    private _weaponClass = _weaponSlot select 0;
    private _weaponCache = (_cache select _x) select 0;
    if (_weaponCache isEqualTo []) then { continue; };
    private _weaponIndex = _weaponCache findIf { _x#0 == _weaponClass};
    if (_weaponIndex == -1) then { 
        continue;
    };
    private _weaponCache = _weaponCache select _weaponIndex;

    private _haveSetGun = false;

    {
        private _containerSlot = _loadout select _x;
        if (_containerSlot isEqualTo []) then { continue; };
        private _containerItems = _containerSlot select 1;
        private _magazines = _weaponCache select 2 select (_x - 3);
        {
            _containerItems pushBack [_x select 0, _x select 1, 1];
            if (!_haveSetGun) then {
                _haveSetGun = true;
                _weaponSlot set [4, [_x select 0, 1]]
            };
        } forEach _magazines;
    } forEach [3,4,5];

    {
        private _loaded = _weaponCache select 2 select _x;
        if (_loaded == "") then { continue; };
        _weaponSlot set [_x + 1, [_loaded, 1]];
    } forEach [3,4];
} forEach [0,1,2,8];

{
    private _slot = _loadout select _x;
    if (_slot isEqualTo []) then { continue; };
    private _cached = _cache select _x;

    private _magazines = _cached select 3;
    private _containerItems = _slot select 1;
    {
        _containerItems pushBack [_x select 0, _x select 1, 1];
    } forEach _magazines;

    private _packs = _cached select 1;
    {
        private _adding = [_x, false] call FUNC(packItems);
        {
            _containerItems pushBack [_x select 0, _x select 1, 1];
        } forEach _adding;
    } forEach _packs;
} forEach [3,4,5];

// Facewear
{
    private _cached = _cache select _x;
    if (_cached isEqualTo []) then {
        _loadout set [_x, []];
        continue;
    };
    _loadout set [_x, selectRandomWeighted _cached];
} forEach [7];

[_unit, [_loadout, _extendedInfo], true] call CBA_fnc_setLoadout;
