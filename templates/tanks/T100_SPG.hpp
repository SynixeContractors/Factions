class GCLASS(T100_SPG);
class CLASS(T100_SPG): GCLASS(T100_SPG) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    #ifdef TEMPLATE_CAMO_LIST
    textureList[] = TEMPLATE_CAMO_LIST;
    #else
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    #endif
};
