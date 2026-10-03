class CfgVehicles {
    #include "CfgVehicles_Uniform.hpp"
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "National Police";
        editorSubcategory = QGCLASS(police);
        @Primary({
            "pointers": {
                "acc_flashlight": 1,
            },
        });
        @Secondary({
            "pointers": {
                "acc_flashlight_pistol": 1,
            },
        });
        @Headgear({
            "H_Cap_police": 1,
        });
        @Uniforms({
            "variants": {
                "synixe_factions_asarta_police_uniform": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Vests({
            "variants" : {
                "synixe_mgp_vest_battle_belt_assaulter_blk": 1,
            },
            "packs": [
                "t4_standard",
                "police_standard"
            ],
        });
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(RiflemanPistol): CLASS(Base) {
        @Role(Pistol);
        #include "../weapons/pistol.hpp"
    };
    class CLASS(RiflemanSMG): CLASS(Base) {
        @Role(SMG);
        #include "../weapons/smg.hpp"
    };
    class CLASS(Breacher): CLASS(RiflemanPistol) {
        @Role(Breacher);
        #include "../../police/weapons/shotgun.hpp"
    };

    //SWAT
    class CLASS(SWAT): CLASS(Base) {
        @Role(Hidden);
        editorSubcategory = QGCLASS(SWAT);
        @Headgear({
            "H_HelmetB_black": 1,
        });
        @Vests({
            "variants" : {
                "JCA_V_CarrierRigKBT_01_compact_black_F" : 1,
            },
            "packs" : [
                "t3_standard",
            ],
        });
        @Uniforms({
            "variants": {
                "synixe_factions_asarta_police_uniform": 1,
            },
            "packs": [
                "rifleman_medical",
                "police_standard"
            ],
        });
    };
    class CLASS(SWATBreacher): CLASS(SWAT) {
        @Role(Breacher);
        #include "../../police/weapons/shotgun.hpp"
    };
    class CLASS(SWATSMG): CLASS(SWAT) {
        @Role(SMG);
        #include "../weapons/smg.hpp"
    };
    class CLASS(SWATRifle): CLASS(SWAT) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
    };
    class CLASS(SWATDemo): CLASS(SWAT) {
        @Role(Demolitions);
        #include "../weapons/smg.hpp"
        @Headgear({
            "H_HelmetHeavy_Black_RF": 1,
        });
        @Vests({
            "variants" : {
                "V_EOD_blue_F" : 1,
            },
            "packs" : [
                "t3_standard",
            ],
        });
    };
    class CLASS(SWATSniper): CLASS(SWAT) {
        @Role(Sniper);
        #include "../weapons/marksman.hpp"
    };
};
