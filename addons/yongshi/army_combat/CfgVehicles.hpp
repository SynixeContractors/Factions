class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #define TEMPLATE_CAMO_LIST {\
        QUOTE(Guerilla_03),1,\
        QUOTE(Guerilla_06),1,\
        QUOTE(Guerilla_07),1,\
        QUOTE(Guerilla_08),1,\
        QUOTE(Guerilla_09),1,\
        QUOTE(Guerilla_10),1,\
        QUOTE(Guerilla_11),1,\
        QUOTE(Guerilla_12),1,\
    }
    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #undef TEMPLATE_CAMO_LIST
    #define TEMPLATE_CAMO_LIST {\
        QUOTE(Desert),1,\
    }
    #include "../../../templates/cars/LSV.hpp"
    #undef TEMPLATE_CAMO_LIST

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Yong Shì Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);
        
        @Uniforms({
            "variants": {
                "Atlas_U_I_Afghanka_01_ardi_half_F": 1,
                "Atlas_U_I_Afghanka_02_ardi_half_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });

        #include "..\weapons\Secondary.hpp"
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);

        #include "..\headgear\Full.hpp"
        #include "..\vests\Rifleman.hpp"
        #include "..\weapons\Rifleman.hpp"
    };

    class CLASS(SquadLeader): CLASS(Rifleman) {
        @Role(SquadLeader);

        #include "..\headgear\Helmet.hpp"
        #include "..\vests\Leader.hpp"

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            }
        });
    };

    class CLASS(TeamLeader): CLASS(SquadLeader) {
        @Role(TeamLeader);

        #include "..\vests\Grenadier.hpp"
        #include "..\weapons\TeamLeader.hpp"

        @Binoculars({
            "weapons": {
                "Binocular": 1,
            },
        });
    };

    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);
        
        #include "..\vests\Autorifleman.hpp"
        #include "..\weapons\Autorifleman.hpp"
    };

    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);

        #include "..\headgear\Light.hpp"
        #include "..\vests\Support.hpp"
        #include "..\weapons\MachineGunner.hpp"
    };

    class CLASS(AsstMachinegunner): CLASS(Machinegunner) {
        @Role(AsstMachinegunner);

        #include "..\weapons\Rifleman.hpp"
    };

    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);

        #include "..\headgear\Light.hpp"
        #include "..\vests\Marksman.hpp"
        #include "..\weapons\Marksman.hpp"

        @Binoculars({
            "weapons": {
                "Rangefinder": 1,
            },
        });
    };

    class CLASS(Medic): CLASS(Rifleman) {
        @Role(Medic);

        #include "..\vests\Medic.hpp"

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Coyote": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(RiflemanMAT): CLASS(Rifleman) {
        @Role(RiflemanMAT);

        #include "..\headgear\Helmet.hpp"

        @Launchers({
            "weapons": {
                "launch_PSRL1_black_RF": {
                    "magazinesBackpack": {
                        "RPG7_F": 2,
                        "PSRL1_FRAG_RF": 2,
                    },
                    "loadedPrimary": "RPG7_F",
                },
            },
            "optics": {
                "JCA_optic_IHO_black": 1,
            },
        });

        @Backpacks({
            "variants": {
                "B_AssaultPack_rgr": 1,
            },
        });
    };

    class CLASS(RiflemanAA): CLASS(Rifleman) {
        @Role(RiflemanAA);

        #include "..\headgear\Light.hpp"

        @Launchers({
            "weapons": {
                "launch_B_Titan_olive_F": {
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

    class CLASS(RiflemanHAT): CLASS(RiflemanAA) {
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
    };

    class CLASS(RadioOperator): CLASS(Rifleman) {
        @Role(RadioOperator);

        #include "..\headgear\Helmet.hpp"

        @Backpacks({
            "variants": {
                "B_RadioBag_01_ardi_F": 1,
            },
        });
    };

    class CLASS(Engineer): CLASS(Rifleman) {
        @Role(Engineer);

        #include "..\headgear\Light.hpp"

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

        #include "..\headgear\Helmet.hpp"

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
};
