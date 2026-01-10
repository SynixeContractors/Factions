class GCLASS(JAS39);
class CLASS(JAS39): GCLASS(JAS39) {
    SCOPE_DLC;
    faction = QPCLASS(t3_blufor);
    side = 1;
    textureList[] = {"CamoGrey",1};
    crew = QCLASS(FighterPilot);
    typicalCargo[] = {QCLASS(FighterPilot)};
};
