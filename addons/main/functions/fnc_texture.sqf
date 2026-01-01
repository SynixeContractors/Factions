#include "..\script_component.hpp"

params [["_object", objNull, [objNull]]];

if (isNull _object) exitWith {
    WARNING_1("Unit [%1] is null",_object);
    false
};

if (!local _object) exitWith {true};

private _config = configOf _object;

private _textureList = getArray (_config >> "textureList");
if (_textureList isEqualTo []) exitWith {true};

private _selectedTexture = selectRandomWeighted _textureList;
private _textureSource = _config >> "TextureSources" >> _selectedTexture;
private _textures = getArray (_textureSource >> "textures");
private _materials = getArray (_textureSource >> "materials");

{
    _object setObjectTextureGlobal [_forEachIndex, _x];
} forEach _textures;

{
    _object setObjectMaterialGlobal [_forEachIndex, _x];
} forEach _materials;

true
