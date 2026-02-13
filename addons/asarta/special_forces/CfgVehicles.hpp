class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Special Forces";
        editorSubcategory = QGCLASS(special_forces);

        #include "../wear/uniform.hpp"
        @Vests({
            "variants": {
              "Atlas_V_OCarrierRig_Lite_semiarid_F": 0.8,
              "Atlas_V_OCarrierRig_CQB_semiarid_F": 0.1,
              "Atlas_V_OCarrierRig_GL_semiarid_F": 0.1,
            },
            "packs": [
                "t3_standard",
            ],
        });
        @Headgear({
            "H_HelmetSpecter_cover_semiarid_CO": 1,
        });
        @Facewear({
            "": 1,
        });
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle_sof.hpp"
        #include "../weapons/launcher.hpp"
        #include "../weapons/attachments_sof.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle_sof.hpp"
        #include "../weapons/attachments_sof.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "../weapons/pistol.hpp"
        @Primary({
            "weapons": {
                "synixe_armoury_arifle_AK03_GL_sand": {
                    "probability": 1,
                    "magazinesVest": {
                        "30Rnd_580x42_Mag_F": 8,
                        "1Rnd_HE_Grenade_shell": 4,
                    },
                    "loadedPrimary": "30Rnd_580x42_Mag_F",
                    "loadedSecondary": "1Rnd_HE_Grenade_shell",
                },
            },
        });
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../weapons/mg.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "../wear/backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "../weapons/mat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "../wear/engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "../wear/backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "../wear/demo.hpp"
    };
    class CLASS(HeliPilot): CLASS(RiflemanCarabine) {
        @Role(HeliPilot);
        #include "../wear/pilot.hpp"
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        @Primary({
            "weapons": {
                "synixe_armoury_arifle_RPK03_sand": {
                    "probability": 1,
                    "magazinesVest": {
                        "100Rnd_580x42_Mag_F": 4,
                    },
                },
            },
        });
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
        @Uniforms({
            "variants": {
              "U_O_FullGhillie_sard": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
    };
    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);
        #include "../weapons/sniper.hpp"
    };
};
