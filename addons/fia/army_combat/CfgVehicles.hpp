@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": "Loyalist",
    "crew": "Rifleman",
    "prefix": "SIDE",
    "vehicles": [
        "BTR",
        "BTR_SPG",
    ],
});

//military styled rams
@Vehicles({
    "faction": "QPCLASS(SIDE_FACTION)",
    "side": "SIDE_NUMBER",
    "camo": "AAF",
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
    "camo": "Indep",
    "prefix": "SIDE",
    "vehicles": [
        "LUT_Ammo",
        "LUT_MRL",
    ],
});

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    displayName = "FIA Army Combat";
    editorSubcategory = QGCLASS(army_combat);

    #include "..\wear\uniform.hpp"
    #include "..\..\altis\wear\vest_garrison.hpp"
    #include "..\..\altis\wear\headwear.hpp"

    @Facewear({
        "Aegis_G_Armband_FIA_alt_F": 1,
    });

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "..\..\altis\weapons\rifle.hpp"
    #include "..\..\altis\weapons\launcher.hpp"
    #include "..\..\altis\weapons\attachments_army.hpp"
};

class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
    #include "..\..\altis\weapons\rifle.hpp"
    #include "..\..\altis\weapons\attachments_army.hpp"
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
    @Role(TeamLeader);
    #include "..\..\altis\weapons\pistol.hpp"
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

class CLASS2(SIDE,RiflemanHAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "..\..\altis\weapons\hat.hpp"
    @Role(RiflemanHAT);
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

class CLASS2(SIDE,Crewman): CLASS2(SIDE,Base) {
    @Role(Crewman);
    @Headgear({
        "H_HelmetCrew_I": 1,
    });
    @Uniforms({
        "variants": {
            "U_Tank_green_F": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });
    #include "..\..\altis\weapons\pdw.hpp"
};
