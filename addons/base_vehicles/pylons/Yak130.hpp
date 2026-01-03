uiPicture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_3DEN_CA.paa";
class Pylons {
    class Pylons1 {
        hardpoints[] = {
          SRAAM_INT_PYLON
        };
        attachment = "PylonRack_1Rnd_Missile_AA_03_F";
        priority = 5;
        maxweight = 150;
        UIposition[] = {0.35,0};
    };
    class Pylons2: Pylons1 {
        priority = 4;
        attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
        maxweight = 500;
        UIposition[] = {0.345,0.05};
    };
    class Pylons3: Pylons1 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON
        };
        priority = 3;
        attachment = "PylonRack_20Rnd_Rocket_03_HE_F";
        maxweight = 1050;
        UIposition[] = {0.34,0.1};
    };
    class Pylons4: Pylons1 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON
        };
        priority = 2;
        attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
        maxweight = 1200;
        UIposition[] = {0.33,0.2};
    };
    class Pylons5: Pylons1 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON
        };
        priority = 1;
        attachment = "PylonMissile_1Rnd_Bomb_03_F";
        maxweight = 1200;
        UIposition[] = {0.33,0.25};
    };
    class Pylons6: Pylons5 {
        UIposition[] = {0.33,0.3};
        mirroredMissilePos = 5;
    };
    class Pylons7: Pylons4 {
        UIposition[] = {0.33,0.35};
        mirroredMissilePos = 4;
    };
    class Pylons8: Pylons3 {
        UIposition[] = {0.34,0.45};
        mirroredMissilePos = 3;
        attachment = "PylonRack_20Rnd_Rocket_03_AP_F";
    };
    class Pylons9: Pylons2 {
        UIposition[] = {0.345,0.5};
        mirroredMissilePos = 2;
    };
    class Pylons10: Pylons1 {
        UIposition[] = {0.35,0.55};
        mirroredMissilePos = 1;
    };
};
