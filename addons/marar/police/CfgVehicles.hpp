class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "National Police";
        editorSubcategory = QGCLASS(police);

        @Headgear({
            "H_ParadeDressCap_01_LDF_F": 5,
            "H_Cap_police": 2,
            "H_Cap_police_headset": 1,
            "": 1,
        });
        @Uniforms({
            "variants": {
                "Aegis_U_O_Luchnik_RolledUp_urban_F": 0.8,
                "Aegis_U_O_Luchnik_urban_F": 0.2,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Vests({
            "variants" : {
                "V_HarnessO_blk": 6,
                "V_TacChestrig_cbr_F": 1,
            },
            "packs": [
                "t4_standard",
                "military_standard"
            ],
        });
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle_old.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle_old.hpp"
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
        #include "../weapons/pdw.hpp"
    };
    class CLASS(Breacher): CLASS(RiflemanPistol) {
        @Role(Breacher);
        #include "../../police/weapons/shotgun.hpp"
    };
};
