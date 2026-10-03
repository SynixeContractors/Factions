class CfgVehicles {
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
            "synixe_factions_chernarus_police_PoliceCap": 10,
        });
        @Uniforms({
            "variants": {
                "U_I_E_ParadeUniform_01_LDF_F": 0.95,
                "U_I_E_ParadeUniform_01_LDF_decorated_F": 0.05,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Vests({
            "variants" : {
                "Aegis_V_CarrierRigKBT_01_holster_black_F": 1,
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
        @Primary({
            "weapons": {
                "Aegis_SMG_Gepard_blk_F": {
                    "magazinesUniform": {
                        "Aegis_20Rnd_9x21_Gepard_Mag_F": 3,
                    },
                },
            },
            "pointers": {
                "acc_flashlight": 5,
                "": 2,
            },
        });

    };
    class CLASS(Breacher): CLASS(RiflemanPistol) {
        @Role(Breacher);
        #include "../../police/weapons/shotgun.hpp"
    };
};
