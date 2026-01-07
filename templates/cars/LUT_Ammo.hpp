class GCLASS(LUT_Ammo);
class CLASS(LUT_Ammo): GCLASS(LUT_Ammo) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalAmmo[] = {QCLASS(Rifleman)};
    #ifdef TEMPLATE_CAMO_LIST
    textureList[] = TEMPLATE_CAMO_LIST;
    #else
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    #endif
};
