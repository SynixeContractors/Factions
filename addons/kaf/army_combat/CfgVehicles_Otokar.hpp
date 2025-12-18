class GCLASS(OtokarUnarmed);
class CLASS(OtokarUnarmed): GCLASS(OtokarUnarmed) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(OtokarHMG);
class CLASS(OtokarHMG): GCLASS(OtokarHMG) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};

class GCLASS(OtokarRCWS);
class CLASS(OtokarRCWS): GCLASS(OtokarRCWS) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"Green",1};
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman), QCLASS(Crewman)};
};
