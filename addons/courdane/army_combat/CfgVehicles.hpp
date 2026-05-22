class CfgVehicles {
    #include "CfgVehicles_Planes.hpp"

    #define TEMPLATE_FACTION QPCLASS(t2_blufor)
    #define TEMPLATE_SIDE 1
    #include "..\..\..\templates\statics\XM3XX.hpp"
    #define TEMPLATE_CAMO Green
    #include "..\..\..\templates\statics\Mk6.hpp"
    #include "../../../templates/drones/MQ12.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Black
    #include "../../../templates/helicopters/Comanche.hpp"
    #include "../../../templates/helicopters/Ghosthawk_Armed.hpp"
    #include "../../../templates/helicopters/Ghosthawk_Medical.hpp"
    #include "../../../templates/helicopters/Ghosthawk.hpp"
    #include "../../../templates/helicopters/Chinook.hpp"
    #include "../../../templates/helicopters/MD500_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand_green
    #include "../../../templates/tanks/Merkava.hpp"
    #include "../../../templates/tanks/Merkava_SPG.hpp"
    #include "../../../templates/apc/Namer.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/apc/Badger.hpp"
    #include "../../../templates/cars/Polaris.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Blufor
    #include "../../../templates/cars/HEMTT.hpp"
    #include "../../../templates/cars/MATV.hpp"
    #include "../../../templates/drones/Shahpar.hpp"
    #include "../../../templates/drones/UGV.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO NATO
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #undef TEMPLATE_CAMO

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Courdane Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_full_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_full_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_combat_olive_F": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_HelmetSpecB_green": 1,
            "H_HelmetB_camo_wdl": 1,
        });

        @Facewear({
            "synixe_mgp_f_tactical": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "lot_SCAR_L_grip_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 3,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
                "": 4,
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_combat_olive_F": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard",
            ],
            "magazines": {
                "SmokeShellRed": 1,
                "SmokeShellPurple": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "lot_SCAR_L_GL_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "JCA_30Rnd_556x45_PMAG",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
                "": 2,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_03_F": {
                    "magazinesVest": {
                        "200Rnd_556x45_Box_Red_F": 2,
                    },
                    "magazinesBackpack": {
                        "200Rnd_556x45_Box_Red_F": 2,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_wdl_F": 1,
            },
        });
    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "MMG_02_black_F": {
                    "magazinesVest": {
                        "130Rnd_338_Mag": 2,
                    },
                    "magazinesBackpack": {
                        "130Rnd_338_Mag": 2,
                    },
                },
            },
            "optics": {
                "JCA_optic_MRCS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });
    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
            "magazines": {
                "130Rnd_338_Mag": 4,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "lot_SCAR_grip_F": {
                    "magazinesVest": {
                        "20Rnd_762x51_Mag": 8,
                    }
                }
            },
            "optics": {
                "JCA_optic_CRBS_black": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "bipods": {
                "bipod_01_F_blk": 1,
            },
            "muzzles": {
                "suppressor_h_lxWS": 1,
                "": 2,
            },
        });

        @Secondary({
            "weapons": {
                "JCA_hgun_P226_black_F": {
                    "magazinesVest": {
                        "JCA_15Rnd_9x19_P226_FMJ_Mag": 2,
                    },
                },
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Primary({
            "weapons": {
                "lot_SCAR_L_grip_short_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
                "": 4,
            },
        });

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
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
                "JCA_launch_Mk153_PWS_olive_F": {
                    "magazinesBackpack": {
                        "JCA_MK153_HEAT_F": 2,
                        "JCA_MK153_HE_F": 2,
                    },
                "loadedPrimary": "JCA_MK153_HEAT_F",
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_Kitbag_rgr": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(RiflemanMAT) {
        @Role(RiflemanAA);

        @Primary({
            "weapons": {
                "lot_SCAR_L_grip_short_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
                "": 4,
            },
        });

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
                    "magazinesBackpack": {
                        "Titan_AA": 2,
                    },
                },
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(RiflemanMAT) {
        @Role(RiflemanHAT);

        @Primary({
            "weapons": {
                "lot_SCAR_L_grip_short_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_556x45_PMAG": 7,
                    },
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "JCA_optic_IHO_black_magnifier": 1,
            },
            "pointers": {
                "acc_pointer_IR": 1,
            },
            "muzzles": {
                "suppressor_l_lxWS": 1,
                "": 4,
            },
        });

        @Launchers({
            "weapons": {
                "launch_I_Titan_short_F": {
                    "magazinesBackpack": { 
                        "Titan_AT": 2,
                    },
                },
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
            "packs": [
                "engineer",
            ],
        });
    };

    class CLASS(Demolitions): CLASS(Rifleman) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_TacticalPack_rgr": 1,
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

        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_compact_olive_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });

        @Headgear({
            "H_HelmetCrew_I": 1,
        });

        @Primary({
            "weapons": {
                "JCA_smg_MP5_FL_black_F": {
                    "magazinesVest": {
                        "JCA_30Rnd_9x19_MP5_FMJ_Mag": 4,
                    }
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
                "": 1,
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_B": 1,
            "H_CrewHelmetHeli_B": 1,
            "H_PilotHelmetHeli_B_visor_up": 1,
        });
    };

    class CLASS(FighterPilot): CLASS(Crewman) {
        @Role(FighterPilot);

        @Headgear({
            "H_PilotHelmetFighter_B": 1,
        });

        @Uniforms({
            "variants": {
                "U_B_PilotCoveralls": 1,
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
