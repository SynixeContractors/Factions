class GCLASS(Merkava);
class CLASS(Merkava): GCLASS(Merkava) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class GCLASS(Merkava_TUSK);
class CLASS(Merkava_TUSK): GCLASS(Merkava_TUSK) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
