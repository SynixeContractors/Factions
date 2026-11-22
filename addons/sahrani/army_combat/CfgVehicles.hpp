class CfgVehicles {
    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Green",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Mk6Mortar",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Grey",
        "vehicles": [
            "Wildcat",
            "Wildcat_Pylons",
            "Mohawk",
            "AssaultBoat_HMG",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "DarkGrey_BAF",
        "vehicles": [
            "F35",
            "F35_Stealth",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "BAF",
        "vehicles": [
            "Apache",
            "Shahpar",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Blufor",
        "vehicles": [
            "Merkava",
            "Merkava_TUSK",
            "Merkava_SPG",
            "Merkava_MLRS",
            "Namer",
            "Namer_AA",
            "Namer_RCWS",
            "Namer_CEV",
            "MATV",
            "MATV_HMG",
            "MATV_GMG",
            "HEMTT",
            "HEMTT_Cargo",
            "HEMTT_Flatbed",
            "HEMTT_Repair",
            "HEMTT_Container",
            "HEMTT_Bench",
            "HEMTT_Covered",
            "HEMTT_Medical",
            "HEMTT_Fuel",
            "HEMTT_Ammo",
            "HEMTT_FireTruck",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "dark_grey",
        "vehicles": [
            "C130",
            "C130_Cargo",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Sand",
        "vehicles": [
            "Radar01",
            "SAM01",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Sahrani Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_U_CombatUniform_UNO": 1,
                "Atlas_U_I_U_CombatUniform_shortsleeve_UNO": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_CarrierRigKBT_01_CQB_RACS_F": 1,
                "Atlas_V_CarrierRigKBT_01_light_RACS_F": 1,
            },
            "magazines": {
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_O_Helmet_canvas_RACS": 1,
        });

        @Facewear({
            "JCA_G_Glasses_Tactical_tinted_black_F": 1,
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_glasses_black_F": 1,
            "JCA_G_balaclava_01_sand_F": 1,
            "JCA_G_balaclava_01_glasses_sand_F": 1,
            "synixe_mgp_f_face_shield_blk_ess": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        #include "..\weapons\Rifleman.hpp"
        #include "..\weapons\Secondary.hpp"
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\weapons\TeamLeader.hpp"

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);
        #include "..\weapons\Autorifleman.hpp"
        #include "..\weapons\Secondary.hpp"
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        #include "..\weapons\Machinegunner.hpp"
        #include "..\weapons\Secondary.hpp"

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
            "magazines": {
                "synixe_armoury_130Rnd_338NM_EPR": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        #include "..\weapons\Marksman.hpp"
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Tan": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "Atlas_Launch_Pzf3_F": {
                    "magazinesBackpack": {
                        "Atlas_DM12_HEAT_F": 2,
                        "Atlas_DM32_HEAT_MP_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_B_Titan_coyote_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_coyote_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPackSpec_cbr": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Vests({
            "variants": {
                "Atlas_V_CarrierRigKBT_01_CQB_RACS_F": 1,
                "Atlas_V_CarrierRigKBT_01_heavy_RACS_F": 1,
            },
            "magazines": {
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };

    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        #include "..\weapons\Crewman.hpp"

        @Vests({
            "variants": {
                "V_TacVest_khk": 1,
            },
            "magazines": {
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I_I": 1,
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_O": 1,
            "H_CrewHelmetHeli_O": 1,
            "H_PilotHelmetHeli_O_visor_up": 1,
        });

        @Facewear({
            "": 1,
        });
    };

    class CLASS(FighterPilot): CLASS(Crewman) {
        @Role(FighterPilot);

        @Headgear({
            "H_PilotHelmetFighter_I_E": 1,
        });

        @Uniforms({
            "variants": {
                "U_I_pilotCoveralls": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "": 1,
            },
        });

        @Facewear({
            "": 1,
        });
    };
};
