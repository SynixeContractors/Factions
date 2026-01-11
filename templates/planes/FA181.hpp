class GCLASS(FA181);
class CLASS(FA181): GCLASS(FA181) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
    #ifdef TEMPLATE_CAMO_LIST
    textureList[] = TEMPLATE_CAMO_LIST;
    #else
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    #endif
};
class GCLASS(FA181_Stealth);
class CLASS(FA181_Stealth): GCLASS(FA181_Stealth) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(HeliPilot);
    typicalCargo[] = {QCLASS(HeliPilot)};
    #ifdef TEMPLATE_CAMO_LIST
    textureList[] = TEMPLATE_CAMO_LIST;
    #else
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    #endif
};
