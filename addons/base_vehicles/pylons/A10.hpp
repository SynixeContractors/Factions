uiPicture = "\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
class Pylons {
    class Pylons1 {
        hardpoints[] = {
          SRAAM_PYLON,
          LIGHT_PYLON
        };
        attachment = "PylonRack_1Rnd_Missile_AA_04_F";
        priority = 5;
        maxweight = 300;
        UIposition[] = {0.35,0};
    };
    class Pylons2: Pylons1 {
        hardpoints[] = {
          SRAAM_PYLON,
          HEAVY_PYLON
        };
        priority = 4;
        attachment = "PylonRack_7Rnd_Rocket_04_HE_F";
        maxweight = 500;
        UIposition[] = {0.345,0.05};
    };
    class Pylons3: Pylons2 {
        priority = 3;
        attachment = "PylonRack_3Rnd_Missile_AGM_02_F";
        maxweight = 1050;
        UIposition[] = {0.34,0.1};
    };
    class Pylons4: Pylons2 {
        priority = 2;
        attachment = "PylonMissile_1Rnd_Bomb_04_F";
        maxweight = 1200;
        UIposition[] = {0.33,0.2};
    };
    class Pylons5: Pylons2 {
        priority = 1;
        attachment = "PylonMissile_1Rnd_Bomb_04_F";
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
    };
    class Pylons9: Pylons2 {
        attachment = "PylonRack_7Rnd_Rocket_04_AP_F";
        UIposition[] = {0.345,0.5};
        mirroredMissilePos = 2;
    };
    class Pylons10: Pylons1 {
        UIposition[] = {0.35,0.55};
        mirroredMissilePos = 1;
    };
};
