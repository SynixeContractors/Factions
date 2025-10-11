#include "..\script_component.hpp"

params ["_name"];

switch (_name) do {
    case "t2_rifleman_medical": {
        [
            ["ACE_elasticBandage", 6],
            ["ACE_tourniquet", 1],
            ["ACE_split", 1],
            ["ACE_painkillers", 1]
        ];
    };
    case "t2_medic": {
        [
            ["ACE_suture", 40],
            ["ACE_elasticBandage", 30],
            ["ACE_quikclot", 20],
            ["ACE_salineIV", 2],
            ["ACE_salineIV_500", 2],
            ["ACE_salineIV_250", 2],
            ["ACE_painkillers", 2],
            ["ACE_surgicalKit", 1],
            ["ACE_splint", 2],
            ["ACE_tourniquet", 4],
            ["ACE_bodyBag", 1]
        ]
    }
};
