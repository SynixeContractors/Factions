UIPicture = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_3DEN_CA.paa";
class pylons {
    class pylons1 {
        hardpoints[] = {
          SRAAM_INT_PYLON
        };
        attachment = "PylonRack_Missile_BIM9X_x1";
        priority = 10;
        maxweight = 300;
        UIposition[] = {0.6,0.45};
    };
    class pylons2: pylons1 {
        UIposition[] = {0.05,0.45};
        mirroredMissilePos = 1;
    };
    class pylons3: pylons1 {
        hardpoints[] = {
          AAM_PYLON,
          LIGHT_PYLON
        };
        attachment = "PylonMissile_Bomb_GBU12_x1";
        priority = 9;
        maxweight = 2500;
        UIposition[] = {0.55,0.35};
    };
    class pylons4: pylons3 {
        UIposition[] = {0.1,0.35};
        mirroredMissilePos = 3;
    };
    class pylons5: pylons1 {
        hardpoints[] = {
          AAM_PYLON,
          HEAVY_PYLON
        };
        attachment = "PylonRack_Missile_AMRAAM_D_x2";
        priority = 7;
        maxweight = 5000;
        UIposition[] = {0.5,0.25};
    };
    class pylons6: pylons5{
        UIposition[] = {0.15,0.25};
        mirroredMissilePos = 5;
    };
    class pylonBayRight1: pylons1 {
        hardpoints[] = {
          MRAAM_INT_PYLON,
          "B_GBU12"
        };
        priority = 4;
        maxweight = 2500;
        attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
        UIposition[] = {0.33,0.35};
        bay = 2;
    };
    class pylonBayLeft1: pylonBayRight1 {
        UIposition[] = {0.33,0.15};
        mirroredMissilePos = 7;
        bay = 1;
    };
    class pylonBayRight2: pylonBayRight1 {
        hardpoints[] = {
          MRAAM_INT_PYLON,
          HEAVY_INT_PYLON
        };
        priority = 2;
        attachment = "PylonRack_Bomb_SDB_x4";
        UIposition[] = {0.33,0.3};
    };
    class pylonBayLeft2: pylonBayLeft1 {
        hardpoints[] = {
          MRAAM_INT_PYLON,
          HEAVY_INT_PYLON
        };
        attachment = "PylonRack_Bomb_SDB_x4";
        UIposition[] = {0.33,0.2};
        mirroredMissilePos = 9;
    };
    class pylonCenter1 {
        hardpoints[] = {
          "B_F38_CENTER_PYLON"
        };
        attachment = "PylonWeapon_220Rnd_25mm_shells";
        priority = 11;
        maxweight = 1000;
        UIposition[] = {0.33,0.25};
    };
};
