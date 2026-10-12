class CfgVehicles {
    #include "CfgVehicles_Vehicles.hpp"
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Livonia Base";
        editorSubcategory = QGCLASS(forest_ranger);
        @Uniforms({
            "variants": {
                "eou_gorka_17": 0.5,
                "U_I_E_Uniform_01_sweater_F": 0.4,
                "U_I_E_Uniform_01_tanktop_F": 0.1
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Headgear({
            "Aegis_H_Milcap_nohs_eaf_F": 0.6,
            "H_Booniehat_ldf_hs": 0.2,
            "H_Watchcap_ldf_hsless": 0.1,
        });
        @Vests({
            "variants": {
                "V_TacChestrig_grn_F": 1,
            },
            "packs": [
                "t4_standard",
            ],
        });
    };

    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/Rifleman.hpp"
    };
    class CLASS(RiflemanSMG): CLASS(Base) {
        @Role(SMG);
        #include "../weapons/smg.hpp"
    };
    class CLASS(RiflemanPistol): CLASS(Base) {
        @Role(Pistol);
        #include "../weapons/Pistol.hpp"
    };
    class CLASS(Breacher): CLASS(Base) {
        @Role(Breacher);
        @Primary({
            "weapons": {
                "sgun_M4_F": {
                    "probability": 1,
                    "magazinesVest": {
                        "8Rnd_12Gauge_Pellets": 4,
                        "8Rnd_12Gauge_Slug": 4,
                    },
                },
            },
            "pointers": {
                "acc_flashlight_pistol": 1,
            },
        });
    };

    class CLASS(TeamLeader): CLASS(Rifleman) {
        @Role(TeamLeader);
        #include "../weapons/Pistol.hpp"
    };

    class CLASS(Medic): CLASS(RiflemanSMG) {
        @Role(Medic);

        @Backpacks({
            "variants": {
                "tacs_Backpack_Kitbag_Medic_Sage": 1,
            },
            "packs": [
                "t2_t3_medic",
            ],
        });
    };

    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);
        #include "../../civilians/wear/hivis.hpp"
        #include "../weapons/Pistol.hpp"
    };

    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);
        #include "../../civilians/wear/hivis.hpp"
        #include "../weapons/smg.hpp"
    };
};
