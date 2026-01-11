class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO EAF_01
    #include "../../../templates/apc/Badger.hpp"
    #include "../../../templates/apc/Warrior.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO EAF_01_woodland
    #include "../../../templates/tanks/Leopard.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO EAF
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Ammo.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Fuel.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"

    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #include "../../../templates/cars/Offroad_Armed.hpp"

    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"

    #include "../../../templates/helicopters/Wildcat.hpp"
    #include "../../../templates/helicopters/Mi35.hpp"
    #include "../../../templates/helicopters/Puma_Military.hpp"

    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Wdl
    #include "../../../templates/planes/A10.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/planes/Blackfish.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/planes/F35.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Takistan
    #include "../../../templates/planes/L159.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/planes/FA181.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGreenHex
    #include "../../../templates/planes/SU75.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGreenHex
    #include "../../../templates/planes/Yak130.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Marar
    #include "../../../templates/planes/JAS39.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO GreenHex
    #include "../../../templates/planes/Xian.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Livonia Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "U_I_E_Uniform_01_F": 1,
                "U_I_E_Uniform_01_shortsleeve_F": 1,
                "U_I_E_Uniform_01_sweater_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "V_CarrierRigKBT_01_heavy_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetHBK_ear_F": 0.5,
            "H_HelmetHBK_headset_F": 0.5,
            "H_HelmetHBK_F": 0.5,
        });

        @Facewear({
            "G_Headset_Tactical": 1,
            "G_Headset_Tactical_grn": 1,
            "G_Headset_Tactical_khk": 1,
            "G_Headset_lxWS": 1,
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Combat_lxWS": 1,
            "tacs_Goggles_Black": 1,
            "tacs_Goggles_Green": 1,
            "tacs_Goggles_Tan": 1,
            "synixe_mgp_f_ess": 1,
        });

        #include "..\weapons\Rifleman.hpp"
        #include "..\weapons\Pistol.hpp"

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.90,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.1,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Headgear({
            "H_HelmetHBK_headset_F": 1,
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\weapons\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        #include "..\weapons\Autorifleman.hpp"
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
        });
    };

    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);

        #include "..\weapons\Machinegunner.hpp"

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
            "magazines": {
                "Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\weapons\Marksman.hpp"

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        #include "..\weapons\MAT.hpp"

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);

        @Launchers({
            "weapons": {
                "launch_I_Titan_eaf_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                    "loadedPrimary": "Titan_AA",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                    "loadedPrimary": "Titan_AT",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_eaf_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_eaf_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_TacticalPack_eaf_F": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_cqb_EAF_F": 1,
                "V_CarrierRigKBT_01_heavy_EAF_F": 1,
            }
        });

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };

    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_EAF_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_UMP_black_F": {
                    "magazinesVest": {
                        "JCA_25Rnd_45ACP_UMP_Mag": 5,
                    }
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_Black_RF": 1,
            "H_PilotHelmetHeli_MilGreen_RF": 1,
            "H_PilotHelmetHeli_White_RF": 1,
        });

        @Vests({
            "variants": {
                "Aegis_V_TacVest_RigB_grn_RF": 1,
                "Aegis_V_TacVest_RigB_khk_RF": 1,
                "Aegis_V_TacVest_RigB_oli_RF": 1,
                
            },
            "packs": [
                "t2_standard",
            ],
        });
    };
};
