UIPicture = "\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
class pylons {
    class pylon1 {
        hardpoints[] = {
          SRAAM_INT_PYLON,
          MRAAM_INT_PYLON
        };
        attachment = "PylonMissile_Missile_BIM9X_x1";
        priority = 5;
        maxweight = 300;
        UIposition[] = {0.55,0.4};
    };
    class pylon2: pylon1 {
        UIposition[] = {0.1,0.4};
        mirroredMissilePos = 1;
    };
    class pylon3 {
        hardpoints[] = {
          AAM_PYLON,
          MEDIUM_PYLON
        };
        priority = 4;
        attachment = "PylonRack_Missile_AGM_02_x1";
        maxweight = 750;
        UIposition[] = {0.5,0.35};
    };
    class Pylon4: pylon3 {
        UIposition[] = {0.15,0.35};
        mirroredMissilePos = 3;
    };
    class pylon5 {
        hardpoints[] = {
          AAM_PYLON,
          HEAVY_PYLON
        };
        priority = 3;
        attachment = "PylonRack_Missile_AMRAAM_C_x1";
        maxweight = 1200;
        UIposition[] = {0.45,0.3};
    };
    class Pylon6: pylon5 {
        UIposition[] = {0.2,0.3};
        mirroredMissilePos = 5;
    };
};
