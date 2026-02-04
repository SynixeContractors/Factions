#include "CfgVehicles_T_Vehicles.hpp"

class CLASS2(SIDE,Policeman): CLASS2(Base,NATION) {
    @Role(Worker);
    side = TEMPLATE_SIDE;
    editorSubcategory = QPCLASS2(NATION,Patrol);

    @Uniforms({
        "variants": {
            "U_B_GEN_Soldier_F": 0.8,
            "U_B_GEN_Commander_F": 0.2,
        },
    });
    @Secondary({
        "weapons": {
            "hgun_P07_blk_F": {
                "magazinesUniform": {
                    "16Rnd_9x21_Mag_v2": 2,
                },
            },
        },
    });
    @Primary({
        "optics": {
            "": 4,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_ICO": 1,
            "optic_Holosight_smg_blk_F": 1,
        },
    });
};
class CLASS2(SIDE,HeliPilot): CLASS2(SIDE,Policeman) {
    @Role(HeliPilot);
    @Headgear({
        "H_PilotHelmetHeli_B_visor_up": 1,
        "H_Cap_marshal_blue_RF": 1,
        "Aegis_H_MilCap_tachs_blue_F": 1,
    });
};
class CLASS2(SIDE,PolicemanPistol): CLASS2(SIDE,Policeman) {
    @Role(Pistol);
    @Headgear({
        "" : 1,
        "H_Cap_police": 1,
        "H_Cap_police_headset": 1,
        "H_Beret_blk_POLICE": 1,
        "Aegis_H_Milcap_nohs_blue_F": 1,
        "Aegis_H_MilCap_tachs_blue_F": 1,
        "H_MilCap_blue": 1,
    });
    @Vests({
        "variants" : {
            "V_TacVest_blk_POLICE" : 1,
        },
        "packs" : [
            "t2_standard",
        ],
    });
};
class CLASS2(SIDE,PolicemanSMG): CLASS2(SIDE,PolicemanPistol) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,PolicemanRifle):CLASS2(SIDE,PolicemanPistol) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS2(SIDE,PolicemanBreacher): CLASS2(SIDE,PolicemanPistol) {
    @Role(Breacher);
    #include "weapons/shotgun.hpp"
};
