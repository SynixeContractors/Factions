class CLASS2(SIDE,Arcadian): GCLASS(Arcadian) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Black",1};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};

class CLASS2(SIDE,Arcadian_M134): GCLASS(Arcadian_M134) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    textureList[] = {"Black",1};
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
};
