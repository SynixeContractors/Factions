class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Hex
    #include "../../../templates/statics/Mk6.hpp"
    #include "../../../templates/apc/BTR.hpp"
    #include "../../../templates/apc/BTR_IFV.hpp"
    #include "../../../templates/apc/BTR_SPG.hpp"
    #include "../../../templates/apc/Otokar.hpp"
    #include "../../../templates/tanks/T100.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Opfor
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Ammo.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Fuel.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CSAT
    #include "../../../templates/helicopters/Puma_Military.hpp"
    
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Tiyen Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_LightCombatFatigues_ruarid_F": 1,
                "U_O_R_officer_noInsignia_arid_F": 1,
                "Opf_U_O_S_Uniform_01_arid_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_lxWS_HarnessO_oli": 1,
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "military_standard",
            ],
        });

        @Headgear({
            "H_Shemag_olive": 1,
            "H_I_Helmet_canvas_Green": 1,
            "Aegis_H_Milcap_nohs_grn_F": 1,
            "H_Booniehat_khk": 1,
        });

        @Facewear({
            "": 1,
            "G_Bandanna_blk": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_shades": 1,
            "G_Shades_Black": 1,
        });

        @Assigned(Military);
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_CTAR_tan_f": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                    },
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        @Vests({
            "variants": {
                "V_lxWS_HarnessO_oli": 1,
                "V_lxWS_TacVestIR_oli": 1,
            },
            "packs": [
                "military_standard",
                "t3_standard",
            ],
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        @Primary({
            "weapons": {
                "Aegis_arifle_CTAR_GL_tan_f": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 7,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
            "optics": {
                "": 1,
                "Aegis_optic_1p87": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        @Primary({
            "weapons": {
                "Aegis_arifle_CTARS_tan_f": {
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 3,
                    },
                    "magazinesBackpack": {
                        "100Rnd_580x42_Mag_F": 3,
                    },
                },
            },
            "optics": {
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
            },
        });

    };

    class CLASS(Machinegunner): CLASS(Autorifleman) {
        @Role(Machinegunner);

        @Primary({
            "weapons": {
                "MMG_01_tan_F": {
                    "magazinesVest": {
                        "150Rnd_93x64_Mag": 2,
                    },
                    "magazinesBackpack": {
                        "150Rnd_93x64_Mag": 3,
                    },
                },
            },
            "optics": {
                "": 1,
            },
            "pointers": {
                "saber_light_lxWS": 1,
            },
            "bipods": {
                "bipod_01_F_snd": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });

    };

    class CLASS(AsstMachinegunner): CLASS(Rifleman) {
        @Role(AsstMachinegunner);

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
            "magazines": {
                "150Rnd_93x64_Mag": 3,
            },
        });
    };

    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);

        @Primary({
            "weapons": {
                "srifle_DMR_07_blk_F": {
                    "magazinesVest": {
                        "20Rnd_650x39_Cased_Mag_F": 9,
                    },
                },
            },
            "optics": {
                "optic_Arco_blk_F": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Green": 1,
            },
            "packs": [
                "t4_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        @Launchers({
           "weapons": {
                "launch_RPG7_F": {
                    "magazinesBackpack": {
                        "RPG7_F": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
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
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(RiflemanHAT): CLASS(Rifleman) {
        @Role(RiflemanHAT);

        @Launchers({
            "weapons": {
                "launch_O_Vorona_brown_F": {
                    "magazinesBackpack": { 
                        "Vorona_HEAT": 2,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_FieldPack_green_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_arid_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_khk": 1,
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
                "B_Carryall_oli": 1,
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

        @Headgear({
            "lxWS_H_Tank_tan_F": 1,
        });

        @Primary({
            "weapons": {
                "Aegis_arifle_CTAR_tan_f": {
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 5,
                    },
                },
            },
        });
    };

    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);

        @Headgear({
            "H_PilotHelmetHeli_O_visor_up": 1,
            "H_PilotHelmetHeli_O": 1,
            "H_CrewHelmetHeli_O": 1,
        });
    };
};

