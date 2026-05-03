#include "CfgVehicles_APC.hpp"
#include "CfgVehicles_Dinghy.hpp"
#include "CfgVehicles_LUT.hpp"
#include "CfgVehicles_Mk6Mortar.hpp"
#include "CfgVehicles_Quad.hpp"
#include "CfgVehicles_Ram.hpp"
#include "CfgVehicles_UGV.hpp"
#include "CfgVehicles_M2.hpp"
#include "CfgVehicles_Orca.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "ION Base Army Combat";
    editorSubcategory = QGCLASS(army_combat);
    
    @Uniforms({
        "variants": {
            "U_lxWS_ION_Casual5": 1,
            "U_lxWS_ION_Casual2": 1,
            "U_lxWS_ION_Casual4": 1,
            "U_lxWS_ION_Casual3": 1,
            "Aegis_U_lxWS_ION_Casual_Hawaiian_F": 1,
            "Aegis_U_lxWS_ION_Casual_Hawaiian_2_F": 1,
            "U_C_Man_casual_7_F": 1,
            "U_C_Man_casual_8_F": 1,
            "U_B_ION_Uniform_01_tshirt_black_F": 1,
            "U_B_ION_Uniform_01_poloshirt_wdl_F": 1,
            "U_B_ION_Uniform_01_poloshirt_blue_F": 1,
            "U_BG_Guerilla2_1": 1,
            "U_BG_Guerilla2_3": 1,
            "U_BG_Guerilla2_2": 1,
            "Aegis_U_lxWS_ION_Flanneltna_F": 1,
            "Aegis_U_lxWS_ION_Casualtna_F": 1,
            "U_lxWS_ION_Casual6": 1,
        },
        "packs": [  
            "rifleman_medical",
        ],
    });

    @Vests({
        "variants": {
            "V_PlateCarrier1_rgr_noflag_F": 1,
            "V_PlateCarrier1_blk": 1,
            "V_PlateCarrier2_blk": 1,
            "Aegis_V_PlateCarrier2_alt_blk": 1,
            "Aegis_V_PlateCarrier2_alt_cbr": 1,
            "Aegis_V_PlateCarrier2_alt_oli": 1,
            "WSLV_Platecarrier_SNK_NF": 1,
            "WSLV_Platecarrier_WDL_NF": 1,
        },
        "magazines": {
        },
        "packs": [
            "military_standard",
            "t3_standard",
        ],
    });

    @Headgear({
        "H_Cap_blk_ION": 1,
        "H_Cap_blk_ION_hs": 1,
        "H_Cap_headphones_ion_lxws": 1,
        "lxWS_H_CapB_rvs_blk_ION": 1,
        "H_HelmetB_black": 1,
        "H_HelmetSpecB_blk": 1,
        "H_HelmetB_grass": 1,
        "H_HelmetSpecB_paint1": 1,
        "H_HelmetB": 1,
        "H_HelmetB_sand": 1,
        "H_HelmetSpecB_sand": 1,
        "H_HelmetB_green": 1,
        "H_HelmetSpecB_green": 1,
        "H_Headset_Tactical": 1,
        "": 1,
    });

    @Facewear({
        "JCA_G_balaclava_01_black_F": 1,
        "synixe_mgp_f_tactical": 2,
        "synixe_mgp_f_face_shield_blk": 1,
        "synixe_mgp_f_face_shield_blk_tactical": 1,
        "synixe_mgp_f_face_shield_rgr": 1,
        "synixe_mgp_f_face_shield_rgr_tactical": 1,
    });

    @Assigned(Military);

    @Primary({
        "weapons": {
            "arifle_SPAR_02_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SPAR_01_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "Aegis_arifle_M4A1_grip_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "Aegis_arifle_M4A1_short_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_XMS_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SCAR_L_short_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SCAR_L_grip_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
            "arifle_SCAR_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                },
            },
            "arifle_SCAR_short_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                },
            },
            "sgun_aa40_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "8Rnd_12Gauge_AA40_Pellets_lxWS": 7,
                },
            },
            "JCA_arifle_M16A4_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                },
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_VRCO_RF": 1,
            "optic_Aco": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
    });

    @Secondary({
        "weapons": {
            "hgun_P07_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "16Rnd_9x21_Mag": 3,
                },
            },
        },
    });
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,Rifleman) {
    @Role(SquadLeader);

    @Primary({
        "weapons": {
            "arifle_XMS_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 6,
                },
            },
            "arifle_SCAR_L_grip_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 6,
                },
            },
            "arifle_SPAR_02_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 6,
                },
            },
            "Aegis_arifle_M4A1_grip_F": {
                "probability": 1,
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 6,
                },
            },
            "sgun_aa40_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_12Gauge_AA40_Pellets_lxWS": 7,
                },
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_VRCO_RF": 1,
            "optic_Aco": 1,
            "optic_Hamr": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "muzzles": {
        },
    });
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,Base) {
    @Role(TeamLeader);

    @Primary({
        "weapons": {
            "arifle_XMS_GL_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_556x45_Stanag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_SCAR_L_GL_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_556x45_Stanag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "30Rnd_556x45_Stanag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
            "arifle_SCAR_GL_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 7,
                    "1Rnd_HE_Grenade_shell": 5,
                },
                "loadedPrimary": "20Rnd_762x51_Mag",
                "loadedSecondary": "1Rnd_HE_Grenade_shell",
            },
        },
        "optics": {
            "optic_Holosight_blk_F": 1,
            "optic_VRCO_RF": 1,
            "optic_Aco": 1,
            "optic_Hamr": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
    });
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,Base) {
    @Role(Autorifleman);

    @Primary({
        "weapons": {
            "arifle_XMS_M_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "75Rnd_556x45_Stanag_lxWS": 4,
                },
                "magazinesBackpack": {
                    "75Rnd_556x45_Stanag_lxWS": 4,
                },
            },
            "LMG_03_F": {
                "probability": 1,
                "magazinesVest": {
                    "200Rnd_556x45_Box_Tracer_F": 2,
                },
                "magazinesBackpack": {
                    "200Rnd_556x45_Box_Tracer_F": 2,
                },
            },
        },
        "optics": {
            "": 1,
            "optic_Holosight_blk_F": 1,
            "optic_Hamr": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
    });

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr": 1,
        },
    });
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,Base) {
    @Role(Machinegunner);

    @Primary({
        "weapons": {
            "MMG_02_black_F": {
                "magazinesVest": {
                    "130Rnd_338_Mag": 2,
                },
                "magazinesBackpack": {
                    "130Rnd_338_Mag": 3,
                },
            },
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
        "optics": {
            "": 1,
            "optic_Hamr": 1,
        },
    });

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr": 1,
        },
    });
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,Base) {
    @Role(AsstMachinegunner);

    @Backpacks({
        "variants": {
            "B_AssaultPack_rgr": 1,
        },
        "magazines": {
            "130Rnd_338_Mag": 3,
        },
    });   
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,Base) {
    @Role(Marksman);

    @Primary({
        "weapons": {
            "arifle_SCAR_grip_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 8,
                },
            },
            "srifle_EBR_blk_lxWS": {
                "probability": 1,
                "magazinesVest": {
                    "20Rnd_762x51_Mag": 8,
                },
            },
        },
        "optics": {
            "optic_DMS": 1,
        },
        "pointers": {
            "acc_pointer_IR": 1,
        },
        "bipods": {
            "bipod_01_F_blk": 1,
        },
        "muzzles": {
            "muzzle_snds_B": 1,
        },
    });
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,Base) {
    @Role(Medic);

    @Backpacks({
        "variants": {
            "tacs_Backpack_Kitbag_Medic_Green": 1,
        },
        "packs": [
            "t2_t3_medic",
        ],
    });
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,Base) {
    @Role(RiflemanMAT);

    @Launchers({
        "weapons": {
            "launch_MRAWS_green_rail_F": {
                "probability": 1,
                "magazinesBackpack": {
                    "MRAWS_HEAT_F": 2,
                    "MRAWS_HE_F": 2,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_Kitbag_rgr": 1,
            "B_Kitbag_blk": 1,
            "B_Kitbag_cbr": 1,
        },
    });
};

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,Base) {
    @Role(RiflemanAA);

    @Launchers({
        "weapons": {
            "launch_Titan_blk_F": {
                "magazinesBackpack": {
                    "Titan_AA": 2,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_Kitbag_rgr": 1,
        },
    });
};

class CLASS2(SIDE,RiflemanHAT): CLASS2(SIDE,Base) {
    @Role(RiflemanHAT);

    @Launchers({
        "weapons": {
            "launch_Titan_short_blk_F": {
                "magazinesBackpack": { 
                    "Titan_AT": 2,
                },
            },
        },
    });

    @Backpacks({
        "variants": {
            "B_Kitbag_rgr": 1,
        },
    });
};

class CLASS2(SIDE,RadioOperator): CLASS2(SIDE,Base) {
    @Role(RadioOperator);

    @Backpacks({
        "variants": {
            "B_RadioBag_01_green_F": 1,
        },
    });
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,Base) {
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

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,Base) {
    @Role(Demolitions);

    @Backpacks({
        "variants": {
            "B_TacticalPack_blk": 1,
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

class CLASS2(SIDE,HeliPilot): CLASS2(SIDE,Base) {
    @Role(HeliPilot);

    @Vests({
        "variants": {
            "V_TacVest_blk": 1,
        },
        "magazines": {
            "SmokeShell": 1,
        },
        "packs": [
            "t3_standard",
        ],
    });

    @Primary({
        "weapons": {
            "SMG_03C_TR_black": {
                "probability": 1,
                "magazinesVest": {
                    "50Rnd_570x28_SMG_03": 4,
                },
            },
            "JCA_smg_MP5_FL_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "JCA_30Rnd_9x21_MP5_Mag": 4,
                },
            },
        },
        "optics": {
            "": 1,
        },
    });

    @Headgear({
        "H_CrewHelmetHeli_B": 1,
    });
};

class CLASS2(SIDE,Crewman): CLASS2(SIDE,HeliPilot) {
    @Role(Crewman);

    @Headgear({
        "lxWS_H_HelmetCrew_I": 1,
    });
};
