class GCLASS(Leopard2);
class CLASS(Leopard2): GCLASS(Leopard2) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Olive_01",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
