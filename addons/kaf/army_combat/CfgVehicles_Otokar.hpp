class GCLASS(Otokar);
class CLASS(Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Otokar_HMG);
class CLASS(Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(Otokar_RCWS);
class CLASS(Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
