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
    case "t2_standard": {
        [
            ["ACE_CableTie", 6],
            ["SmokeShell", 2],
            ["NVGoggles_OPFOR", 1],
            ["Chemlight_green", 1],
            ["Chemlight_blue", 1]           
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
    };
    case "toolkit": {
        [
            ["ToolKit", 1]
        ]
    };
    case "eod": {
        [
            ["ACE_DefusalKit", 1]
        ]
    };
    case "demo": {
        [
            ["SatchelCharge_Remote_Mag", 1],
            ["DemoCharge_Remote_Mag", 2],
            ["ACE_M26_Clacker", 1]
        ]
    };
    case "at_mine": {
        [
            ["ATMine_Range_Mag", 2]
        ]
    };
    case "ap_mine": {
        [
            ["APERSMine_Range_Mag", 4]
        ]
    };
};
