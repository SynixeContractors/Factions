class GCLASS(FA181);
class CLASS(FA181): GCLASS(FA181) {
    SCOPE_DLC;
    faction = QPCLASS(t2_blufor);
    side = 1;
    textureList[] = {"DarkGreyCamo",1};
    crew = QCLASS(FighterPilot);
    typicalCargo[] = {QCLASS(FighterPilot)};
};

class GCLASS(FA181_Stealth);
class CLASS(FA181_Stealth): GCLASS(FA181_Stealth) {
    SCOPE_DLC;
    faction = QPCLASS(t2_blufor);
    side = 1;
    textureList[] = {"DarkGreyCamo",1};
    crew = QCLASS(FighterPilot);
    typicalCargo[] = {QCLASS(FighterPilot)};
};

class GCLASS(C130);
class CLASS(C130): GCLASS(C130) {
    SCOPE_DLC;
    faction = QPCLASS(t2_blufor);
    side = 1;
    textureList[] = {"Blue",1};
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
};

class GCLASS(A10);
class CLASS(A10): GCLASS(A10) {
    SCOPE_DLC;
    faction = QPCLASS(t2_blufor);
    side = 1;
    textureList[] = {"Gray",1};
    crew = QCLASS(FighterPilot);
    typicalCargo[] = {QCLASS(FighterPilot)};
};
