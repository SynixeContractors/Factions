class GCLASS(AssaultBoat_M134);
class CLASS(AssaultBoat_M134): GCLASS(AssaultBoat_M134) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    #ifdef TEMPLATE_CAMO_LIST
    textureList[] = TEMPLATE_CAMO_LIST;
    #else
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    #endif
};