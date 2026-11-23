// Rams with civilian variants
@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": {
        "AAF": 5,
        "Black": 1,
        "Blue": 1,
        "Brown": 1,
        "Cruiser": 1,
        "Gray": 1,
        "Green": 1,
        "NATO": 1,
        "NATO_P": 1,
        "Olive": 1,
        "Orange": 1,
        "Red": 1,
        "Tan": 1,
        "White": 1,
        "Yellow": 1,
    },
    "prefix": "SIDE",
    "vehicles": [
        "Ram",
        "Ram_Covered",
        "Ram_HMG",
        "Ram_Fuel",
        "Ram_Rocket",
    ],
});

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": {"Indep": 4, "Black": 1, "Blue": 1, "Brown": 1, "Green": 1, "Lime": 1, "Orange": 1, "Sand": 1, "Yellow": 1},
    "prefix": "SIDE",
    "vehicles": [
        "LUT_Transport",
        "LUT_TransportCovered",
        "LUT_Repair",
        "LUT_Medical",
        "LUT_Fuel",
        "LUT_Cargo",
        "LUT_Flatbed",
        "LUT_AA",
    ],
});

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "Blue", "Bluecustom", "Brown", "Darkred", "Green", "Olive", "Pink", "Red", "White", "Zebra"],
    "prefix": "SIDE",
    "vehicles": [
        "Offroad",
        "Offroad_Covered",
        "Offroad_Comms",
        "Offroad_Services",
        "Offroad_HMG",
        "Offroad_AT",
        "Offroad_AA",
        "Offroad_Armored",
        "Offroad_Armored_AT",
        "Offroad_Armored_HMG",
        "Offroad_Armored_AA",
    ],
});

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "FIA Militia";
    editorSubcategory = QGCLASS(militia);

    #include "..\wear\uniform_militia.hpp"
    #include "..\..\altis\wear\vest_garrison.hpp"
    #include "..\wear\headwear.hpp"

    @Facewear({
        "Aegis_G_Armband_FIA_alt_F": 1,
    });

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "..\weapons\rifle.hpp"
    #include "..\..\altis\weapons\launcher.hpp"
    #include "..\weapons\attachments_militia.hpp"
};

class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
    #include "..\weapons\rifle.hpp"
    #include "..\weapons\attachments_militia.hpp"
};

class CLASS2(SIDE,RiflemanBackpack): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Hidden);
    #include "..\wear\backpack.hpp"
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,RiflemanCarabine) {
    @Role(SquadLeader);
    #include "..\..\altis\weapons\gl.hpp"
    #include "..\..\altis\weapons\pistol.hpp"
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,RiflemanCarabine) {
    #include "..\..\altis\weapons\pistol.hpp"
    @Role(TeamLeader);
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Autorifleman);
    #include "..\..\altis\weapons\lmg.hpp"
    #include "..\..\altis\weapons\pistol.hpp"
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(AsstMachinegunner);
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Machinegunner);
    #include "..\..\altis\weapons\mg.hpp"
    #include "..\..\altis\weapons\pistol.hpp"
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Marksman);
    #include "..\..\altis\weapons\marksman.hpp"
    #include "..\..\altis\weapons\pistol.hpp"
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Medic);
    #include "..\..\altis\weapons\pistol.hpp"
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "..\..\altis\weapons\mat.hpp"
    @Role(RiflemanMAT);
};

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,RiflemanBackpack) {
    #include "..\..\altis\weapons\aa.hpp"
    @Role(RiflemanAA);
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Engineer);
    #include "..\..\altis\wear\engineer.hpp"
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Demolitions);
    #include "..\..\altis\wear\demo.hpp"
};
