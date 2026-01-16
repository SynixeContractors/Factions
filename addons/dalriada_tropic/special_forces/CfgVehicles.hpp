class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_opfor)
    #define TEMPLATE_SIDE 0
    #define TEMPLATE_CAMO GreenHex
    #include "../../../templates/cars/LSV.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CSAT_Pacific
    #include "../../../templates/cars/Ram_Advanced.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Dal Riada Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        
        @Uniforms({
            "variants": {
                "Aegis_U_O_CombatFatigues_ghex_F": 1,
                "Aegis_U_O_CombatFatigues_02_ghex_F": 1,
                "Aegis_U_O_CombatUniform_tshirt_ghex_F": 1,
            },
            "magazines": {
                "SmokeShell": 1,
                "HandGrenade": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_CarrierRigKBT_01_light_Olive_F": 1,
                "Aegis_V_CarrierRigKBT_01_recon_olive_F": 1,
                "Aegis_V_CarrierRigKBT_01_cqb_olive_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({
            "Aegis_H_Helmet_FASTMT_Cover_rgr_F": 1,
            "Aegis_H_Helmet_FASTMT_Headset_rgr_F": 1,
        });

        @Facewear({
            "synixe_mgp_f_face_shield_rgr": 1,
            "synixe_mgp_f_face_shield_rgr_tactical": 1,
            "synixe_mgp_f_face_shield_blk": 1,
            "synixe_mgp_f_face_shield_blk_tactical": 1,
        });

        #include "..\..\dalriada\weapons\Rifleman.hpp"
        @Primary({
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\..\dalriada\weapons\TeamLeader.hpp"
        @Primary({
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);

        #include "..\..\dalriada\weapons\Autorifleman.hpp"
        @Primary({
            "muzzles": {
                "muzzle_snds_58_blk_F": 1,
            },
        });

        @Secondary({
            "weapons": {
                "hgun_ACPC2_black_F": {
                    "magazinesVest": {
                        "9Rnd_45ACP_Mag": 3,
                    },
                },
            },
        });
        
        @Backpacks({
            "variants": {
                "B_FieldPack_ghex_F": 1,
            },
        });
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\..\dalriada\weapons\Marksman.hpp"
        @Primary({
            "muzzles": {
                "muzzle_snds_65_TI_blk_F": 1,
            },
        });

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
                "tacs_Backpack_Kitbag_Medic_Green": 1,
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
                "launch_RPG32_ghex_F": {
                    "magazinesBackpack": {
                        "RPG32_F": 2,
                        "RPG32_HE_F": 1,
                    },
                },
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_ghex_F": 1,
            },
        });
    };

    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ghex_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);

        @Backpacks({
            "variants": {
                "B_AssaultPack_ghex_F": 1,
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
                "B_Carryall_ghex_F": 1,
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

        @Uniforms({
            "variants": {
                "U_O_T_Sniper_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants": {
                "V_HarnessO_ghex_F": 1,
            },
            "packs": [
                "t2_standard",
            ],
        });

        @Headgear({});

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);

        #include "..\..\dalriada\weapons\Sniper.hpp"
    };
};
