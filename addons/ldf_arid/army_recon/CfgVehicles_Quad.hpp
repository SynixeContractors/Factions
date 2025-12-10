class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    SCOPE_DLC;
    faction = QPCLASS(t2_opfor);
    side = 0;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {"Blufor", 1};
};
