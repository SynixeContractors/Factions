#include "..\script_component.hpp"

params ["_display"];

private _count = 0;
{
    private _ctrlTree = _display displayCtrl _x;
    _count = _count + (_ctrlTree tvCount []);
} forEach IDCS_FACTIONS;

_count
