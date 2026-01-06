class GCLASS(C130);
class CLASS(C130): GCLASS(C130) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(HeliPilot)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
