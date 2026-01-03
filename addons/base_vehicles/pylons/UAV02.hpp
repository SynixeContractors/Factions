UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";

class pylons {
    class pylons1 {
        hardpoints[] = {
          SRAAM_INT_PYLON,
          MEDIUM_PYLON
        };
        attachment = "PylonRack_3Rnd_LG_scalpel";
        priority = 5;
        turret[] = {0};
        maxweight = 345;
        UIposition[] = {0.33,0.4};
    };
    class pylons2: pylons1 {
        UIposition[] = {0.33,0.15};
        mirroredMissilePos = 1;
    };
};
