class pylons {
    class pylons1 {
        hardpoints[] = {
          SRAAM_INT_PYLON
        };
        attachment = "PylonMissile_Missile_AA_R73_x1";
        priority = 13;
        maxweight = 300;
        UIposition[] = {0.6, 0.45};
    };
    class pylons2: pylons1 {
        UIposition[] = {0.05,0.45};
        mirroredMissilePos = 1;
    };
    class pylons3 {
        hardpoints[] = {
          AAM_PYLON,
          "B_AGM65_DUAL_RAIL",
          "B_AGM65_RAIL",
          "B_GBU12",
          "B_HARM_RAIL",
          "B_MISSILE_PYLON",
          "B_SDB_QUAD_RAIL",
          "O_KAB250_BOMB",
          "O_KH25",
          "O_MISSILE_PYLON",
        };
        attachment = "PylonMissile_Missile_AA_R77_x1";
        priority = 11;
        maxweight = 1050;
        UIposition[] = {0.55,0.35};
    };
    class pylons4: pylons3 {
        UIposition[] = {0.1,0.35};
        mirroredMissilePos = 3;
    };
    class pylons5 {
        //this is the main pylon with big missiles so it gets the generic pylon type for all ordinance
        hardpoints[] = {
          "B_AGM65_DUAL_RAIL",
          "B_AGM65_RAIL",
          "B_AMRAAM_D_DUAL_RAIL",
          "B_AMRAAM_D_RAIL",
          "B_BIM9X_DUAL_RAIL",
          "B_BIM9X_RAIL",
          "B_BOMB_PYLON",
          "B_GBU12",
          "B_HARM_RAIL",
          "B_MISSILE_PYLON",
          "B_SDB_QUAD_RAIL",
          "O_KAB250_BOMB",
          "O_KH25",
          "O_KH58",
          "O_MISSILE_PYLON",
          "O_R73",
          "O_R77",
          "UNI_SCALPEL",
        };
        attachment = "PylonMissile_Bomb_KAB250_x1";
        priority = 9;
        maxweight = 1200;
        UIposition[] = {0.5,0.25};
    };
    class pylons6: pylons5 {
        UIposition[] = {0.15,0.25};
        mirroredMissilePos = 5;
    };
    class pylonBayRight1 {
        hardpoints[] = {
          SRAAM_PYLON
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
          MRAAM_PYLON
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
          "B_AMRAAM_D_INT",
          "B_GBU12",
          "B_HARM_RAIL",
          "B_SDB_QUAD_RAIL",
          "O_KAB250_BOMB",
          "O_KH25_INT",
          "O_KH58_INT",
          "O_R77_INT",
        };
        priority = 1;
        attachment = "PylonMissile_Bomb_KAB250_x1";
        maxweight = 1200;
        UIposition[] = {0.33,0.55};
        bay = 5;
    };
};
