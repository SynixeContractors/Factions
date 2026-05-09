#include "CfgVehicles_Cars.hpp"

class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    editorSubcategory = QGCLASS(militia);

    #include "../wear/uniform_militia.hpp"
    #include "../wear/vest_militia.hpp"
    #include "../wear/headwear.hpp"

    @Facewear({
        "Aegis_G_Armband_FIA_alt_F": 1,
    });

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "../weapons/rifle.hpp"
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
    #include "../../argana/weapons/gl.hpp"
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,RiflemanCarabine) {
    #include "../../argana/weapons/pistol.hpp"
    @Role(TeamLeader);
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Autorifleman);
    #include "../weapons/lmg.hpp"
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(AsstMachinegunner);
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Machinegunner);
    #include "../../argana/weapons/mg.hpp"
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Marksman);
    #include "../weapons/marksman.hpp"
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Medic);
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "../weapons/mat.hpp"
    @Role(RiflemanMAT);
};

class CLASS2(SIDE,RiflemanHAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "../../argana/weapons/hat.hpp"
    @Role(RiflemanHAT);
};

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,RiflemanBackpack) {
    #include "../../argana/weapons/aa.hpp"
    @Role(RiflemanAA);
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Engineer);
    #include "../../argana/wear/engineer.hpp"
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Demolitions);
    #include "../../argana/wear/demo.hpp"
};
