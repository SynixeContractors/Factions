#include "CfgVehicles_Cars.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    displayName = "FIA Army Reserve";
    editorSubcategory = QGCLASS(reserves);

    #include "../wear/uniform.hpp"
    #include "../../altis/wear/vest_garrison.hpp"
    #include "../../altis/wear/headwear.hpp"

    @Facewear({
        "Aegis_G_Armband_FIA_alt_F": 1,
    });

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "../../altis/weapons/rifle.hpp"
    #include "../../altis/weapons/launcher.hpp"
};
class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
    #include "../../altis/weapons/rifle.hpp"
};
class CLASS2(SIDE,RiflemanBackpack): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Hidden);
    #include "../../altis/wear/backpack.hpp"
};
class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,RiflemanCarabine) {
    @Role(SquadLeader);
    #include "../../altis/weapons/gl.hpp"
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,RiflemanCarabine) {
    #include "../../altis/weapons/pistol.hpp"
    @Role(TeamLeader);
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Autorifleman);
    #include "../../altis/weapons/lmg.hpp"
    #include "../../altis/weapons/pistol.hpp"
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Machinegunner);
    #include "../../altis/weapons/mg.hpp"
    #include "../../altis/weapons/pistol.hpp"
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Marksman);
    #include "../../altis/weapons/marksman.hpp"
    #include "../../altis/weapons/pistol.hpp"
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Medic);
    #include "../../altis/weapons/pistol.hpp"
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "../../altis/weapons/mat.hpp"
    @Role(RiflemanMAT);
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Engineer);
    #include "../../altis/wear/engineer.hpp"
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Demolitions)
    #include "../../altis/wear/demo.hpp"
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
    #include "../../altis/weapons/pdw.hpp"
};
