class PCLASS2(SIDE,Base);
class CLASS2(SIDE,Base): PCLASS2(SIDE,Base) {
    #define TEMPLATE_FACTION QPCLASS(SIDE_FACTION)
    #define TEMPLATE_SIDE SIDE_NUMBER
    #undef TEMPLATE_FACTION
    #undef TEMPLATE_SIDE

    editorSubcategory = QGCLASS(special_forces);

    #include "../wear/uniform_sof.hpp"
    #include "../wear/vest_sof.hpp"
    #include "../wear/headwear_sof.hpp"
    #include "../wear/facewear_sof.hpp"

    @Assigned(Military);
};

class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "../weapons/rifle_sof.hpp"
    #include "../weapons/attachments_sof.hpp"
};

class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
    #include "../weapons/rifle.hpp"
    #include "../weapons/attachments_sof.hpp"
};

class CLASS2(SIDE,RiflemanBackpack): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Hidden);
    #include "../wear/backpack_sof.hpp"
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
    #include "../weapons/lmg_sof.hpp"
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
    #include "../weapons/marksman_sof.hpp"
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Medic);
    #include "../../argana/weapons/pistol.hpp"
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,RiflemanBackpack) {
    #include "../../argana/weapons/mat.hpp"
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
