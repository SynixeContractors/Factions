class CLASS2(SIDE,M2_Low): GCLASS(M2_Low) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,M2_High): GCLASS(M2_High) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};
