class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Livonia Base National Reserves";
        editorSubcategory = QGCLASS(reserves);
        
        @Uniforms({
            "variants": {
                "Atlas_U_UniformBDU_03_reservist_F": 1,
                "Atlas_U_UniformBDU_04_reservist_F": 1,
            },
            "packs": [
                "t2_rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Atlas_V_OCarrierRig_CQB_oli_F": 1,
                "Atlas_V_OCarrierRig_Lite_oli_F": 1,
                "Atlas_V_ORigLBV_oli_F": 0.5,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Atlas_H_PASGT_Cover_I_EAF_R_F": 1,
            "Atlas_H_FieldCap_pantera": 0.2,
            "Atlas_H_FieldCap_hs_pantera": 0.2,
        });

        @Facewear({
            "G_Headset_lxWS": 1,
            "synixe_mgp_f_tactical": 1,
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Combat_lxWS": 1,
            "tacs_Goggles_Black": 1,
            "tacs_Goggles_Green": 1,
            "tacs_Goggles_Tan": 1,
            "synixe_mgp_f_ess": 1,
        });

        @Primary({
            "weapons": {
                "arifle_MSBS65_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 7,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                    }
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
                "Aegis_acc_pointer_DM": 0.2,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Launchers({
            "weapons": {
                "": 0.9,
                "JCA_launch_M72_olive_F": {
                    "probability": 0.1,
                    "loadedPrimary": "JCA_M72_HEAT_F",
                },
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "arifle_MSBS65_GL_camo_F": {
                    "magazinesVest": {
                        "synixe_armoury_30Rnd_65x39_EPR_MSBS": 5,
                        "synixe_armoury_30Rnd_65x39_Ball_Tracer_MSBS": 2,
                        "1Rnd_HE_Grenade_shell": 6,
                        "1Rnd_Smoke_Grenade_shell": 2,
                    },
                    "loadedPrimary": "synixe_armoury_30Rnd_65x39_EPR_MSBS",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "optic_ico_01_camo_f": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "LMG_Mk200_black_F": {
                    "magazinesVest": {
                        "synixe_armoury_200Rnd_65x39_EPR_Belt": 4,
                    },
                    "magazinesBackpack": {
                        "synixe_armoury_200Rnd_65x39_EPR_Belt": 4,
                    },
                },
            },
            "optics": {
                "JCA_optic_MROS_black": 1,
            },
            "pointers": {
                "saber_light_lxWS": 0.6,
                "Aegis_acc_pointer_DM": 0.4,
            },
        });
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_eaf_F": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_medic",
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
                "toolkit",
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

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };
};
