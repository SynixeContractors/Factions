class GCLASS(M2_High);
class CLASS(M2_High): GCLASS(M2_High) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};

class GCLASS(M2_Low);
class CLASS(M2_Low): GCLASS(M2_Low) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};
