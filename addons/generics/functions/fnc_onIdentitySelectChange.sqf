#include "..\script_component.hpp"

(_this#0) params ["_ctrl", "_index"];

if (_index == 0) then {
    GVAR(selectedIdentity) = "All";
} else {
    private _identities = "true" configClasses (configFile >> "SynixeIdentities");
    private _selected = _identities select (_index - 1);

    GVAR(selectedIdentity) = configName _selected;
};

private _searchCtrl = ctrlParent _ctrl displayCtrl 82;

private _searchBefore = ctrlText _searchCtrl;
_searchCtrl ctrlSetText "Reloading...";
[_searchCtrl, _searchBefore] spawn {
    sleep 1;
    [_this#0] call FUNC(onSearchCreateKeyDown);
    (_this#0) ctrlSetText (_this#1);
};
