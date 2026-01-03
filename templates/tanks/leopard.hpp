class GCLASS(Leopard2);
class CLASS(Leopard2): GCLASS(Leopard2) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
