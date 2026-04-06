class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_indep)
    #define TEMPLATE_SIDE 2
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/cars/Polaris.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Sahrani Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
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
                "t2_standard",
                "military_standard"
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_tan_F": 1,
        });

        @Facewear({
            "JCA_G_Glasses_Tactical_tinted_black_F": 1,
            "JCA_G_balaclava_01_black_F": 1,
            "JCA_G_balaclava_01_glasses_black_F": 1,
            "JCA_G_balaclava_01_sand_F": 1,
            "JCA_G_balaclava_01_glasses_sand_F": 1,
        });

        #include "..\weapons_sf\Rifleman.hpp"
        #include "..\weapons\Secondary.hpp"
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

        #include "..\weapons_sf\TeamLeader.hpp"
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        #include "..\weapons_sf\Autorifleman.hpp"
        
        @Backpacks({
            "variants": {
                "B_AssaultPack_cbr": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\weapons_sf\Marksman.hpp"

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

        @Vests({
            "variants": {
                "Atlas_V_CarrierRigKBT_01_heavy_RACS_F": 1,
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

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });

        @Headgear({
            "H_Booniehat_khk": 1,
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        #include "..\weapons\Sniper.hpp"

        @Secondary({
            "muzzles": {
                "muzzle_snds_L": 1,
            }
        });
    };
};
