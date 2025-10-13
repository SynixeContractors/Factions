#include "..\script_component.hpp"

params ["_unit"];

GVAR(randomLoadoutUnits) getOrDefaultCall [typeOf _unit, {
    private _unitConfig = configOf _unit;
    private _items = [];

    // Weapons
    private _fnc_addWeapon = {
        private _items = [getArray (_unitConfig >> format ["Synixe_%1", _this])];
        {
            private _name = format ["Synixe_%1%2", _this, _x];
            private _list = getArray (_unitConfig >> _name);
            _items pushBack _list;
        } forEach ["muzzles", "pointers", "optics", "bipods"];
        if (_items findIf { _x isNotEqualTo [] } == -1) then {
            _items = [];
        };
        _items
    };
    {
        _items pushBack (_x call _fnc_addWeapon);
    } forEach ["primary", "launcher", "secondary"];

    // Containers
    {
        private _container = _x;
        private _containerItems = [getArray (_unitConfig >> format ["Synixe_%1", _container])];
        {
            private _name = format ["Synixe_%1%2", _container, _x];
            private _list = getArray (_unitConfig >> _name);
            _containerItems pushBack _list;
        } forEach ["packs", "items", "magazines"];
        if (_containerItems findIf { _x isNotEqualTo [] } == -1) then {
            _containerItems = [];
        };
        _items pushBack _containerItems;
    } forEach ["uniform", "vest", "backpack"];

    {
        private _name = format ["Synixe_%1", _x];
        private _list = getArray (_unitConfig >> _name);
        _items pushBack _list;
    } forEach ["headgear", "facewear"];

    _items pushBack ("binocular" call _fnc_addWeapon);

    // Assigned items
    _items pushBack (getArray (_unitConfig >> "Synixe_assignedItems"));

    _items
}, true]
