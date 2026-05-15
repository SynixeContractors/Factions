class CLASS2(SIDE,Base): PCLASS(DOUBLES(Base,NATION)) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QGCLASS(DOUBLES(generics,NATION));
    faction = FACTION;
    @Role(Hidden);
    #include "../../civilians/wear/winter.hpp"
    #include "../../civilians/wear/headwear_winter.hpp"
    #include "../wear/armor.hpp"
    @Primary({
        "optics": {
            "": 8,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_ICO": 1,
            "optic_Holosight_blk_F": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_MROS_black": 1,
        },
    });
};
class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
    #include "../weapons/rifle.hpp"
};
class CLASS2(SIDE,RiflemanSMG): CLASS2(SIDE,Base) {
    @Role(SMG);
    #include "../weapons/smg.hpp"
};
class CLASS2(SIDE,RiflemanPistol): CLASS2(SIDE,Base) {
    @Role(Pistol);
    #include "../weapons/pistol.hpp"
};
class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
    #include "../weapons/rifle.hpp"
};

class CLASS2(SIDE,RiflemanBackpack): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Hidden);
    #include "../wear/backpack.hpp"
};

class CLASS2(SIDE,SquadLeader): CLASS2(SIDE,RiflemanCarabine) {
    @Role(SquadLeader);
    //#include "../weapons/gl.hpp"
    #include "../weapons/pistol.hpp"
};

class CLASS2(SIDE,TeamLeader): CLASS2(SIDE,RiflemanCarabine) {
    @Role(TeamLeader);
    #include "../weapons/pistol.hpp"
};

class CLASS2(SIDE,Autorifleman): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Autorifleman);
    //#include "../weapons/lmg.hpp"
    #include "../weapons/pistol.hpp"
};

class CLASS2(SIDE,AsstMachinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(AsstMachinegunner);
};

class CLASS2(SIDE,Machinegunner): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Machinegunner);
    //#include "../weapons/mg.hpp"
    #include "../weapons/pistol.hpp"
};

class CLASS2(SIDE,Marksman): CLASS2(SIDE,RiflemanCarabine) {
    @Role(Marksman);
    #include "../weapons/marksman.hpp"
    #include "../weapons/pistol.hpp"
};

class CLASS2(SIDE,Medic): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Medic);
    #include "../weapons/pistol.hpp"
};

class CLASS2(SIDE,RiflemanMAT): CLASS2(SIDE,RiflemanBackpack) {
    @Role(RiflemanMAT);
    //#include "../weapons/mat.hpp"
};

class CLASS2(SIDE,RiflemanHAT): CLASS2(SIDE,RiflemanBackpack) {
    @Role(RiflemanHAT);
    //#include "../weapons/hat.hpp"
};

class CLASS2(SIDE,RiflemanAA): CLASS2(SIDE,RiflemanBackpack) {
    //@Role(RiflemanAA);
    //#include "../weapons/aa.hpp"
};

class CLASS2(SIDE,Engineer): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Engineer);
    //#include "../wear/engineer.hpp"
};

class CLASS2(SIDE,Demolitions): CLASS2(SIDE,RiflemanBackpack) {
    @Role(Demolitions);
    //#include "../wear/demo.hpp"
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
    #include "../weapons/smg.hpp"
};
