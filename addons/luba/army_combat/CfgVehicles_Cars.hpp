#define LUBA_CAR_SAND SCOPE_DLC; \
    faction = QPCLASS(t3_indep); \
    side = 2; \
    textureList[] = {"Desert",1};

class GCLASS(LSV);
class CLASS(LSV): GCLASS(LSV) {
    LUBA_CAR_SAND
    //FIXME: needs sand camo editor picture
      crew = QCLASS(Rifleman);
};
class GCLASS(LSV_M134);
class CLASS(LSV_M134): GCLASS(LSV_M134) {
    LUBA_CAR_SAND
    //FIXME: needs sand camo editor picture
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
class GCLASS(LSV_Metis);
class CLASS(LSV_Metis): GCLASS(LSV_Metis) {
    LUBA_CAR_SAND
    //FIXME: needs sand camo editor picture
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Blufor",1};
    typicalCargo[] = {QCLASS(Rifleman)};
};
