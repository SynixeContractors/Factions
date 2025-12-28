UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
class pylons {
    class pylons1 {
        hardpoints[] = {
          SRAAM_PYLON
        };
        attachment = "PylonMissile_Missile_AA_R73_x1";
        priority = 13;
        maxweight = 300;
        UIposition[] = {0.6, 0.45};
    };
    class pylons2: pylons1 {
        UIposition[] = {0.05,0.45};
        mirroredMissilePos = 1;
    };
    class pylons3 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON,
        };
        attachment = "PylonMissile_Missile_AA_R77_x1";
        priority = 11;
        maxweight = 1050;
        UIposition[] = {0.55,0.35};
    };
    class pylons4: pylons3 {
        UIposition[] = {0.1,0.35};
        mirroredMissilePos = 3;
    };
    class pylons5 {
        //this is the main pylon with big missiles so it gets the generic pylon type for all ordinance
        hardpoints[] = {
          AAM_PYLON,
          HEAVY_PYLON,
        };
        attachment = "PylonMissile_Bomb_KAB250_x1";
        priority = 9;
        maxweight = 1200;
        UIposition[] = {0.5,0.25};
    };
    class pylons6: pylons5 {
        UIposition[] = {0.15,0.25};
        mirroredMissilePos = 5;
    };
    class pylonBayRight1 {
        hardpoints[] = {
          SRAAM_INT_PYLON
        };
        priority = 7;
        attachment = "PylonMissile_Missile_AA_R73_x1";
        maxweight = 300;
        UIposition[] = {0.45,0.15};
        bay = 2;
    };
    class pylonBayLeft1: pylonBayRight1 {
        UIposition[] = {0.2,
0.15};
        mirroredMissilePos = 7;
        bay = 1;
    };
    class pylonBayRight2 {
        hardpoints[] = {
          MRAAM_INT_PYLON
        };
        priority = 5;
        attachment = "PylonMissile_Missile_AA_R77_x1";
        maxweight = 750;
        UIposition[] = {0.33,0.3};
        bay = 4;
    };
    class pylonBayLeft2: pylonBayRight2 {
        UIposition[] = {0.33,0.35};
        mirroredMissilePos = 9;
        bay = 3;
    };
    class pylonBayCenter1 {
        hardpoints[] = {
          MRAAM_INT_PYLON
        };
        priority = 2;
        attachment = "PylonMissile_Missile_AA_R77_INT_x1";
        maxweight = 750;
        UIposition[] = {0.33,0.45};
        bay = 5;
    };
    class pylonBayCenter2: pylonBayCenter1 {
        UIposition[] = {0.33,
0.5};
        mirroredMissilePos = 11;
    };
    class pylonBayCenter3 {
        hardpoints[] = {
          MRAAM_INT_PYLON,
          HEAVY_INT_PYLON
        };
        priority = 1;
        attachment = "PylonMissile_Bomb_KAB250_x1";
        maxweight = 1200;
        UIposition[] = {0.33,0.55};
        bay = 5;
    };
};
