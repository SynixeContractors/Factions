uiPicture = "\A3\Air_F_Exp\UAV_03\Data\UI\Map_UAV_03_3DEN_CA.paa";

class Pylons {
    class Pylons1 {
        hardpoints[] = {
          ROCKET_PYLON,
          SRAAM_INT_PYLON
        };
        attachment = "PylonRack_12Rnd_missiles";
        priority = 5;
        turret[] = {0};
        maxweight = 300;
        UIposition[] = {0.05,0.3};
    };
    class Pylons2: Pylons1 {
        priority = 4;
        attachment = "PylonRack_3Rnd_LG_scalpel";
        maxweight = 300;
        UIposition[] = {0.1,0.38};
    };
    class Pylons3: Pylons2 {
        UIposition[] = {0.53,0.38};
        mirroredMissilePos = 2;
    };
    class Pylons4: Pylons1 {
        UIposition[] = {0.58,0.3};
        mirroredMissilePos = 1;
    };
};
