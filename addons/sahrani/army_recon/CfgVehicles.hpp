class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_indep)
    #define TEMPLATE_SIDE 2
    #define TEMPLATE_CAMO NATO
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Black
    #include "../../../templates/boats/Dinghy.hpp"
    #include "../../../templates/boats/RHIB.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Sahrani Base Army Recon";
        editorSubcategory = QGCLASS(army_recon);
        
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
                "Atlas_V_CarrierRigKBT_01_light_RACS_F": 1,
                "Aegis_V_TacVest_RigB_khk_RF": 2,
            },
            "magazines": {
            },
            "packs": [
                "t3_standard",
                "military_standard",
            ],
        });

        @Headgear({
            "H_Watchcap_cbr": 1,
            "H_Watchcap_camo": 1,
            "H_Booniehat_khk": 1,
        });

        @Facewear({
            "Aegis_G_Condor_EyePro_F": 1,
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_sand_F": 1,
        });

        #include "..\weapons\Rifleman.hpp"

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

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_coyote_F": 1,
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

        @Secondary({
            "weapons": {
                "ACE_VMH3": {},
            },
        });
    };

    class CLASS(Spotter): CLASS(Base) {
        @Role(Spotter);

        #include "..\weapons\Rifleman.hpp"

        @Uniforms({
            "variants": {
                "U_B_FullGhillie_sard": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_TacChestrig_cbr_F": 1,
            },
            "magazines": {
            },
            "packs": [
                "t3_standard",
                "military_standard",
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

        #include "..\weapons\Sniper.hpp"
        #include "..\weapons\Secondary.hpp"

        @Secondary({
            "muzzles": {
                "muzzle_snds_L": 1,
            },
        });
    };
};
