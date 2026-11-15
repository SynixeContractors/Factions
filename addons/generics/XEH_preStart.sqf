#include "script_component.hpp"
#include "XEH_PREP.hpp"

private _classes = createHashMap;
{
    private _name = getText (_x >> "displayName");
    private _identity = getText (_x >> "synixe_factions_identity");
    if (_identity != "") then {
        _classes set [_name, _identity];
    };
} forEach (configProperties [configFile >> "CfgEditorSubcategories", "isClass _x"]);
uiNamespace setVariable [QGVAR(editorsubcategories_identities), _classes];

private _classes = createHashMap;
{
    {
        {
            private _name = getText (_x >> "name");
            private _identity = getText (_x >> "synixe_factions_identity");
            if (_identity != "") then {
                _classes set [_name, _identity];
            };
        } forEach (configProperties [_x, "isClass _x"])
    } forEach (configProperties [_x, "isClass _x"]);
} forEach (configProperties [configFile >> "CfgGroups", "isClass _x"]);
uiNamespace setVariable [QGVAR(groups_identities), _classes];
