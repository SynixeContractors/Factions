class GCLASS(LUT_Ammo);
class CLASS(LUT_Ammo): GCLASS(LUT_Ammo) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalAmmo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
