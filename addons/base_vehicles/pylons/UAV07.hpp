UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";

class Pylons {
    class PylonRight1 {
        attachment = "PylonRack_3Rnd_LG_scalpel";
        priority = 5;
        hardpoints[] = {
          SRAAM_PYLON,
          HEAVY_PYLON
        };
        turret[] = {0};
        UIposition[] = {0.12,0.36};
    };
    class PylonRight2: PylonRight1 {
        attachment = "PylonRack_3Rnd_LG_scalpel";
        priority = 0;
        UIposition[] = {0.15,0.31};
    };
    class PylonLeft2: PylonRight2 {
        UIposition[] = {0.52,0.31};
        mirroredMissilePos = 2;
    };
    class PylonLeft1: PylonRight1 {
        UIposition[] = {0.55,0.36};
        mirroredMissilePos = 1;
    };
};
