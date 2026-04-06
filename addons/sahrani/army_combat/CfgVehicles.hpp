class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Green
    #include "../../../templates/statics/Mk6.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Grey
    #include "../../../templates/helicopters/Wildcat.hpp"
    #include "../../../templates/helicopters/Mohawk_Military.hpp"
    #include "../../../templates/boats/ABoat_HMG.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO DarkGrey_BAF
    #include "../../../templates/planes/F35.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO BAF
    #include "../../../templates/helicopters/Apache.hpp"
    #include "../../../templates/drones/Shahpar.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Blufor
    #include "../../../templates/tanks/Merkava.hpp"
    #include "../../../templates/tanks/Merkava_SPG.hpp"
    #include "../../../templates/cars/MATV.hpp"
    #include "../../../templates/cars/HEMTT.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO dark_grey
    #include "../../../templates/planes/C130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/statics/SAM01.hpp"

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
