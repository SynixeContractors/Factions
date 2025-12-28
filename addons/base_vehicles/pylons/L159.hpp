uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
class Pylons {
    class Pylons1 {
        hardpoints[] = {
          SRAAM_INT_PYLON,
          LIGHT_PYLON,
          ROCKET_PYLON
        };
        attachment = "PylonRack_1Rnd_LG_scalpel";
        priority = 5;
        maxweight = 200;
        UIposition[] = {0.35,0.08};
    };
    class Pylons2: Pylons1 {
        priority = 4;
        attachment = "PylonRack_1Rnd_AAA_missiles";
        maxweight = 320;
        UIposition[] = {0.345,0.13};
    };
    class Pylons3: Pylons1 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON
        };
        priority = 3;
        attachment = "PylonMissile_1Rnd_Bomb_04_F";
        maxweight = 400;
        UIposition[] = {0.34,0.18};
    };
    class Pylons4: Pylons1 {
        priority = 2;
        attachment = "PylonWeapon_300Rnd_20mm_shells";
        maxweight = 500;
        UIposition[] = {0.27,0.28};
        hardpoints[] = {
          "B_A143_BUZZARD_CENTER_PYLON",
          HEAVY_PYLON
        };
    };
    class Pylons5: Pylons3 {
        UIposition[] = {0.33,0.38};
        mirroredMissilePos = 3;
    };
    class Pylons6: Pylons2 {
        UIposition[] = {0.33,0.43};
        mirroredMissilePos = 2;
    };
    class Pylons7: Pylons1 {
        UIposition[] = {0.34,0.48};
        mirroredMissilePos = 1;
    };
};
