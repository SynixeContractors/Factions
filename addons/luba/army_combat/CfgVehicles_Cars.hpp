class GCLASS(QuadBike);
class CLASS(QuadBike): GCLASS(QuadBike) {
    faction = QPCLASS(t3_indep);
    side = 2;
    textureList[] = {"Blufor",1};
    crew = QCLASS(Rifleman);
};
