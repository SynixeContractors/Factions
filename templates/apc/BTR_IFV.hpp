class GCLASS(BTR_IFV);
class CLASS(BTR_IFV): GCLASS(BTR_IFV) {
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
