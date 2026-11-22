@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": "Sand",
    "crew": "Rifleman",
    "prefix": "SIDE",
    "vehicles": [
        "BTR",
        "BTR_SPG",
    ],
});

// Rams with civilian variants
@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": [
        "Black",
        "Blue",
        "Brown",
        "Cruiser",
        "Gray",
        "Green",
        "NATO",
        "NATO_P",
        "Olive",
        "Orange",
        "Red",
        "Tan",
        "White",
        "Yellow",
    ],
    "prefix": "SIDE",
    "vehicles": [
        "Ram",
        "Ram_Covered",
        "Ram_HMG",
        "Ram_Fuel",
        "Ram_Rocket",
    ],
});

//military styled rams
@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": [
        "Black",
        "Blue",
        "Brown",
        "Cruiser",
        "Gray",
        "Green",
        "NATO",
        "NATO_P",
        "Olive",
        "Orange",
        "Red",
        "Tan",
        "White",
        "Yellow",
    ],
    "prefix": "SIDE",
    "vehicles": [
        "Ram_MMG",
        "Ram_RCWS",
        "Ram_M134",
        "Ram_Comms",
        "Ram_MRL",
        "Ram_AA",
        "Ram_AT",
    ],
});

@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": ["Black", "Blue", "Brown", "Green", "Lime", "Orange", "Sand", "Yellow"],
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
        "LUT_Ammo",
        "LUT_MRL",
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
    editorSubcategory = QGCLASS(militia);

    #include "..\wear\uniform_militia.hpp"
    #include "..\wear\vest_militia.hpp"
    #include "..\wear\headwear.hpp"

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "..\weapons\rifle.hpp"
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
    #include "..\weapons\attachments_sof.hpp"
    #include "..\..\argana\weapons\gl.hpp"
    #include "..\..\argana\weapons\pistol.hpp"
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,RiflemanCarabine) {
    #include "..\weapons\attachments_sof.hpp"
    #include "..\..\argana\weapons\pistol.hpp"
    @Role(TeamLeader);
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Autorifleman);
    #include "..\weapons\lmg.hpp"
    #include "..\..\argana\weapons\pistol.hpp"
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(AsstMachinegunner);
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Machinegunner);
    #include "..\..\argana\weapons\mg.hpp"
    #include "..\..\argana\weapons\pistol.hpp"
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Marksman);
    #include "..\weapons\marksman.hpp"
    #include "..\..\argana\weapons\pistol.hpp"
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Medic);
    #include "..\..\argana\weapons\pistol.hpp"
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "..\weapons\mat.hpp"
    @Role(RiflemanMAT);
};

class CLASS2(SIDE,RiflemanHAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "..\..\argana\weapons\hat.hpp"
    @Role(RiflemanHAT);
};

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,RiflemanBackpack) {
    #include "..\..\argana\weapons\aa.hpp"
    @Role(RiflemanAA);
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Engineer);
    #include "..\..\argana\wear\engineer.hpp"
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Demolitions);
    #include "..\..\argana\wear\demo.hpp"
};
