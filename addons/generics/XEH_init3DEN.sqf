#include "script_component.hpp"

params ["_display"];

uiNamespace setVariable [QGVAR(3DENDisplay), _display];

private _ctrl = _display displayCtrl IDC_IDENTITY_SELECT;
lbClear _ctrl;
private _identities = configFile >> "SynixeIdentities";

_ctrl lbAdd "All";

{
    _ctrl lbAdd getText (_x >> "displayName");
} forEach ("true" configClasses _identities);

// TODO select best for map
_ctrl lbSetCurSel 0;
