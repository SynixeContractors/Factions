class CfgVehicles {
    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": "Argana_Royal",
        "vehicles": [
            {"class": "Ram", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Ram_Covered", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Ram_Comms", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Ram_Fuel", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Ram_M134", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Ram_MMG", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Ram_HMG", "editorSubcategory": "QGCLASS(police_cars)"},
        ],
    });
    //Lights Variants
    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": "Argana_Royal",
        "vehicles": [
            {"class": "Ram_Bars_Covered", "editorSubcategory": "QGCLASS(police_cars)"},
            {
                "class": "Ram_Covered_Lights",
                "name": "Ram_Bars_Covered_Lights",
                "editorSubcategory": "QGCLASS(police_cars)",
            },
        ],
    });
    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": "ArganaRoyal",
        "vehicles": [
            {"class": "Van_Transport", "editorSubcategory": "QGCLASS(police_cars)"},
            {"class": "Van_Cargo", "editorSubcategory": "QGCLASS(police_cars)"},
        ],
    });
    //lights
    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": "ArganaRoyal",
        "vehicles": [
            {"class": "Van_Transport_Lights", "editorSubcategory": "QGCLASS(police_cars)"},
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "National Police";
        editorSubcategory = QGCLASS(police);

        #include "..\wear\uniform_police.hpp"
        #include "..\wear\vest_police.hpp"
        #include "..\wear\headwear_police.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\weapons\rifle_old.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\weapons\rifle_old.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(RiflemanPistol): CLASS(Base) {
        @Role(Pistol);
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(RiflemanSMG): CLASS(Base) {
        @Role(SMG);
        #include "..\weapons\pdw.hpp"
    };
    class CLASS(Breacher): CLASS(RiflemanPistol) {
        @Role(Breacher);
        #include "..\..\police\weapons\shotgun.hpp"
    };
};
