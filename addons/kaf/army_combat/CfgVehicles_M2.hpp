class GCLASS(M2High);
class CLASS(M2High): GCLASS(M2High) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(M2Low);
class CLASS(M2Low): GCLASS(M2Low) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
