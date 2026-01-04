class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Mbakora Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
        @Uniforms({
            "variants": {
                "Atlas_U_O_Afghanka_01_dst_F": 1,
                "Atlas_U_O_Afghanka_02_dst_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
                "Aegis_V_ChestrigEast_tan_F": 1,
                "Aegis_V_TacVest_RigB_khk_RF": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "MiniGrenade": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Headgear({
            "lxWS_H_turban_02_sand": 2,
            "lxWS_H_turban_02_green": 2,
            "H_Booniehat_oicamo": 1,
            "H_Booniehat_oicamo_hs": 1,
            "H_Cap_oicamo": 0.5,
            "H_Cap_oicamo_hs": 0.5,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "G_Balaclava_snd_lxWS": 1,
            "G_Balaclava_blk_lxWS": 1,
            "G_Bandanna_oli": 1,
            "G_Bandanna_khk": 1,
            "G_Shades_Black": 1,
        });

        #include "..\weapons\Rifleman.hpp"

        @Secondary({
            "weapons": {
                "": 0.6,
                "hgun_ACPC2_black_F": {
                    "probability": 0.4,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            }
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

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
                "B_AssaultPack_cbr": 1,
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
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);

        @Launchers({
            "weapons": {
                "launch_RPG32_tan_lxWS": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
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

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_oicamo_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
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

    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);

        @Backpacks({
            "variants": {
                "B_Kitbag_cbr": 1,
            },
            "packs": [
                "eod",
                "demo",
            ],
        });

        @Vests({
            "variants": {
                "Aegis_V_CarrierRigKBT_01_recon_cbr_F": 1,
            }
        });

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };

    class CLASS(Spotter): CLASS(Base) {
        @Role(Spotter);
        
        @Primary({
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Uniforms({
            "variants": {
                "U_O_C_D_Sniper_oicamo_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_HarnessO_brn": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "MiniGrenade": 1,
            },
            "packs": [
                "t3_standard",
            ],
        });

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });

        @Headgear({});

        @Facewear({});
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
            "muzzles": {
                "muzzle_snds_acp": 1,
            },
        });
    };
};
