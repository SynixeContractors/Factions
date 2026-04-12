class CLASS2(SIDE,BTR): GCLASS(BTR) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Loyalist",1,
    };
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};
class CLASS2(SIDE,BTR_SPG): GCLASS(BTR_SPG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {
        "Loyalist",1,
    };
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

#define RAM_MILITARY_TEXTURES textureList[] = {\
  "AAF",1,\
}

//military styled rams
class CLASS2(SIDE,Ram_MMG): GCLASS(Ram_MMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};
class CLASS2(SIDE,Ram_RCWS): GCLASS(Ram_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};
class CLASS2(SIDE,Ram_M134): GCLASS(Ram_M134) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};
class CLASS2(SIDE,Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};
class CLASS2(SIDE,Ram_MRL): GCLASS(Ram_MRL) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};
class CLASS2(SIDE,Ram_AA): GCLASS(Ram_AA) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};
class CLASS2(SIDE,Ram_AT): GCLASS(Ram_AT) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_MILITARY_TEXTURES;
};

#undef RAM_MILITARY_TEXTURES
#define LUT_MILITARY_TEXTURES textureList[] = {\
  "Indep",1,\
}

class CLASS2(SIDE,LUT_Ammo): GCLASS(LUT_Ammo) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_MILITARY_TEXTURES;
};
class CLASS2(SIDE,LUT_MRL): GCLASS(LUT_MRL) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_MILITARY_TEXTURES;
};

#undef LUT_MILITARY_TEXTURES
