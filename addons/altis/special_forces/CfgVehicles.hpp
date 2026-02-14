class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Special Forces";
        editorSubcategory = QGCLASS(special_forces);

        #include "../wear/uniform.hpp"
        @Vests({
            "variants": {
              "V_PlateCarrierIA1_dgtl": 0.8,
              "V_PlateCarrierIA2_dgtl": 0.1,
              "V_PlateCarrierIAGL_dgtl": 0.1,
            },
            "packs": [
                "t3_standard",
            ],
        });
        @Headgear({
            "H_HelmetSpecter_cover_AAF_F": 1,
            "H_HelmetIA_sb_digital_RF": 1,
        });
        @Facewear({
            "G_Combat_Goggles_tna_F": 1,
            "G_Bandanna_oli": 1,
            "G_Shemag_oli": 1,
            "G_Balaclava_oli": 1,
            "G_Balaclava_oli_lxWS": 1,
            "": 10,
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
        #include "../weapons/gl.hpp"
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
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
        #include "../weapons/sniper.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
        @Uniforms({
            "variants": {
                "H_HelmetIA_sb_digital_RF": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
    };
    class CLASS(Sniper): CLASS(Spotter) {
        @Role(Sniper);
    };
};
