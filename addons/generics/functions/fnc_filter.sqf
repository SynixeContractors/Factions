#include "..\script_component.hpp"

params ["_display"];

private _classes = configFile >> QUOTE(ADDON);

if (GVAR(selectedIdentity) == "All") exitWith {};

{
    private _ctrlTree = _display displayCtrl _x;
    for "_i" from ((_ctrlTree tvCount []) - 1) to 0 step -1 do {
        private _data = _ctrlTree tvData [_i];
        if ((_data select [0,16]) != "synixe_factions_") then {
            continue;
        };
        if !(isClass (_classes >> _data)) then {
            continue;
        };
        for "_j" from ((_ctrlTree tvCount [_i]) - 1) to 0 step -1 do {
            private _entryData = _ctrlTree tvData [_i, _j];
            private _identity = getText (configFile >> "CfgEditorSubcategories" >> _entryData >> "synixe_factions_identity");
            if (_identity == "") then {
                continue;
            };
            if (_identity != GVAR(selectedIdentity)) then {
                _ctrlTree tvDelete [_i, _j];
            };
        };
    };
} forEach IDCS_FACTIONS;
