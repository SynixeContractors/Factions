class GCLASS(BM2_IFV2);
class CLASS(BM2_IFV2): GCLASS(BM2_IFV2) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
