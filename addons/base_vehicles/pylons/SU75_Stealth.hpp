UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
class pylons {
    class pylonDummy1 {
        attachment = "";
        UIposition[] = {10,10};
    };
    class pylonDummy2: pylonDummy1 {};
    class pylonDummy3: pylonDummy1 {};
    class pylonDummy4: pylonDummy1 {};
    class pylonDummy5: pylonDummy1 {};
    class pylonDummy6: pylonDummy1 {};
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
