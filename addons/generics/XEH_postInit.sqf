#include "script_component.hpp"

GVAR(identities) = [];
private _identities = configFile >> "SynixeIdentities";
{
    private _id = configName _x;
    private _name = getText (_x >> "displayName");
    GVAR(identities) pushBack [_id, _name];
} forEach ("true" configClasses _identities);

["Synixe Factions", "Filter Factions", {
    private _controls = [];
    {
        _controls pushBack ["CHECKBOX", _x#1];
    } forEach GVAR(identities);
    [
        "Filter Factions",
        _controls,
        {
            params ["_values"];
            private _toHide = [];
            {
                if (!_x) then {
                    _toHide pushBack ((GVAR(identities) select _forEachIndex) select 0);
                };
            } forEach _values;
            GVAR(selectedIdentity) = _toHide;
            [] call zen_common_fnc_reloadDisplay;
        }
    ] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;

["zen_editor_treesLoaded", {
    params ["_display"];
    private _classes = configFile >> QUOTE(ADDON);
    private _base = [];
    {
        private _ctrlTree = _display displayCtrl _x;
        for "_i" from ((_ctrlTree tvCount _base) - 1) to 0 step -1 do {
            private _path = _base + [_i];
            for "_j" from ((_ctrlTree tvCount _path) - 1) to 0 step -1 do {
                private _innerpath = _path + [_j];
                private _name = _ctrlTree tvText _innerpath;
                private _identity = uiNamespace getVariable [QGVAR(editorsubcategories_identities), createHashMap] getOrDefault [_name, ""];
                if (_identity == "") then {
                    continue;
                };
                if (_identity in GVAR(selectedIdentity)) then {
                    _ctrlTree tvDelete _innerpath;
                };
            };
        };
    } forEach [270,271,272,273];
    private _base = [0];
    {
        private _ctrlTree = _display displayCtrl _x;
        for "_i" from ((_ctrlTree tvCount _base) - 1) to 0 step -1 do {
            private _path = _base + [_i];
            private _name = _ctrlTree tvText _path;
            for "_j" from ((_ctrlTree tvCount _path) - 1) to 0 step -1 do {
                private _innerpath = _path + [_j];
                private _name = _ctrlTree tvText _innerpath;
                private _identity = uiNamespace getVariable [QGVAR(groups_identities), createHashMap] getOrDefault [_name, ""];
                if (_identity == "") then {
                    continue;
                };
                if (_identity in GVAR(selectedIdentity)) then {
                    _ctrlTree tvDelete _innerpath;
                };
            };
        };
    } forEach [275,276,277,278];
}] call CBA_fnc_addEventHandler;
