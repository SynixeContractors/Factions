#include "..\script_component.hpp"

params ["_ctrl"];

if (GVAR(searchPFH) == -1) then {
    GVAR(searchCount) = [ctrlParent _ctrl] call FUNC(countTree);
    GVAR(searchPFH) = addMissionEventHandler ["Draw3D", {
        private _display = uiNamespace getVariable QGVAR(3DENDisplay);
        private _newCount = [_display] call FUNC(countTree);
        if (_newCount != GVAR(searchCount)) then {
            removeMissionEventHandler ["Draw3D", GVAR(searchPFH)];
            GVAR(searchPFH) = -1;
            [_display] call FUNC(filter);
        };
    }];
};
