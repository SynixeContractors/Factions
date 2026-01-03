UIPicture = "\A3\Air_F_Jets\UAV_05\Data\UI\UAV_05_3DEN_CA.paa";

class pylons {
    class pylon1 {
        hardpoints[] = {
          MRAAM_PYLON,
          HEAVY_INT_PYLON
        };
        attachment = "PylonMissile_Bomb_GBU12_x1";
        priority = 1;
        maxweight = 1500;
        turret[] = {0};
        UIposition[] = {0.5,0.25};
        bay = 2;
    };
    class pylon2: pylon1 {
        UIposition[] = {0.15,0.25};
        mirroredMissilePos = 1;
        bay = 1;
    };
};
