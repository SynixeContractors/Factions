UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
class pylons {
    class pylon1 {
        hardpoints[] = {
          AAM_PYLON,
          LIGHT_PYLON
        };
        attachment = "PylonRack_Missile_AMRAAM_D_x1";
        priority = 12;
        maxweight = 300;
        UIposition[] = {0.6,0.45};
    };
    class pylon2: pylon1 {
        UIposition[] = {0.05,0.45};
        mirroredMissilePos = 1;
    };
    class pylon3 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON
        };
        priority = 11;
        attachment = "PylonRack_Missile_AGM_02_x2";
        maxweight = 1050;
        UIposition[] = {0.55,0.35};
    };
    class pylon4: pylon3 {
        UIposition[] = {0.1,0.35};
        mirroredMissilePos = 3;
    };
    class pylonBayRight1 {
        hardpoints[] = {
          SRAAM_INT_PYLON
        };
        priority = 10;
        attachment = "PylonMissile_Missile_BIM9X_x1";
        maxweight = 1200;
        UIposition[] = {0.5,0.25};
        bay = 2;
    };
    class pylonBayLeft1: pylonBayRight1 {
        UIposition[] = {0.16,0.25};
        mirroredMissilePos = 5;
        bay = 1;
    };
    class pylonBayCenter1 {
        hardpoints[] = {
          MRAAM_INT_PYLON
        };
        priority = 9;
        attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
        maxweight = 1200;
        UIposition[] = {0.33,0.3};
        bay = 3;
    };
    class pylonBayCenter2: pylonBayCenter1 {
        UIposition[] = {0.33,0.35};
        mirroredMissilePos = 7;
    };
    class pylonBayCenter3 {
        hardpoints[] = {
          MRAAM_INT_PYLON,
          "B_SDB_QUAD_RAIL"
        };
        priority = 7;
        attachment = "";
        maxweight = 1200;
        UIposition[] = {0.33,0.4};
        bay = 3;
    };
    class pylonBayCenter4: pylonBayCenter3 {
        UIposition[] = {0.33,0.45};
        mirroredMissilePos = 9;
    };
    class pylonBayCenter5 {
        hardpoints[] = {
          MRAAM_INT_PYLON,
        };
        priority = 5;
        attachment = "PylonMissile_Bomb_GBU12_x1";
        maxweight = 1200;
        UIposition[] = {0.33,0.5};
        bay = 3;
    };
    class pylonBayCenter6: pylonBayCenter5 {
        UIposition[] = {0.33,0.55};
        mirroredMissilePos = 11;
    };
};
