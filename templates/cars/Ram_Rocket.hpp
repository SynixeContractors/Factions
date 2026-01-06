class GCLASS(Ram_Rocket);
class CLASS(Ram_Rocket): GCLASS(Ram_Rocket) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
