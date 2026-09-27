class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Special Forces";
        editorSubcategory = QGCLASS(special_forces);

        #include "../wear/uniform.hpp"
        @Vests({
            "variants": {
              "V_PlateCarrierIA1_khk": 1,
            },
            "packs": [
                "t2_standard",
                "military_standard"
            ],
        });
        @Headgear({
            "H_Bandanna_cbr": 1,
            "H_Bandanna_cbr_headset": 1,
            "H_Watchcap_cbr": 1,
            "H_Watchcap_cbr_hs": 1,
            "tacs_Helmet_Modular_Coyote": 3,
            "tacs_Helmet_Modular_Ear_Coyote": 3,
            "tacs_Helmet_Modular_Headset_Coyote": 3,
        });
        @Facewear({
            "G_Balaclava_Scarecrow_01": 1,
            "G_Balaclava_snd_lxWS": 1,
            "G_Bandanna_khk": 1,
            "G_Bandanna_tan": 1,
            "JCA_G_shemagh_01_sand_F": 1,
            "synixe_mgp_f_shemagh_cb_ess": 1,
            "JCA_G_shemagh_01_glasses_sand_F": 1,
            "synixe_mgp_f_shemagh_cb_shades": 1,
            "synixe_mgp_f_face_shield_cb": 1,
            "JCA_G_balaclava_01_sand_F": 1,
            "": 10,
        });
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/carabine.hpp"
        #include "../weapons/launcher.hpp"
        #include "../weapons/attachments_sof.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/carabine.hpp"
        #include "../weapons/attachments_sof.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "../weapons/gl.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../weapons/rifle.hpp"
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
        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Spotter): CLASS(Marksman) {
        @Role(Spotter);
        @Uniforms({
            "variants": {
              "U_B_FullGhillie_ard": 1,
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
