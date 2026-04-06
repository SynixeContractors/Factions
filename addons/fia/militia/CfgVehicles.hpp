#include "CfgVehicles_Cars.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    displayName = "FIA Militia";
    editorSubcategory = QGCLASS(militia);

    #include "../wear/uniform_militia.hpp"
    #include "../../altis/wear/vest_garrison.hpp"
    #include "../wear/headwear.hpp"

    @Facewear({
        "Aegis_G_Armband_FIA_alt_F": 1,
    });

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "../weapons/rifle.hpp"
    #include "../../altis/weapons/launcher.hpp"
    #include "../weapons/attachments_militia.hpp"
};

class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
    #include "../weapons/rifle.hpp"
    #include "../weapons/attachments_militia.hpp"
};

class CLASS2(SIDE,RiflemanBackpack): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Hidden);
    #include "../wear/backpack.hpp"
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,RiflemanCarabine) {
    @Role(SquadLeader);
    #include "../../altis/weapons/gl.hpp"
    #include "../../altis/weapons/pistol.hpp"
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

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(AsstMachinegunner);
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

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,RiflemanBackpack) {
    #include "../../altis/weapons/aa.hpp"
    @Role(RiflemanAA);
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Engineer);
    #include "../../altis/wear/engineer.hpp"
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Demolitions)
    #include "../../altis/wear/demo.hpp"
};
