#include "..\script_component.hpp"

private _display = uiNamespace getVariable QGVAR(3DENDisplay);
private _shown = [60,65,71,66,67,68,6900000,69,70] findIf {
    ctrlShown (_display displayCtrl _x)
};
(_display displayCtrl IDC_IDENTITY_SELECT_BOX) ctrlShow (_shown == -1);
