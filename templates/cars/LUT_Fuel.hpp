class GCLASS(LUT_Fuel);
class CLASS(LUT_Fuel): GCLASS(LUT_Fuel) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalFuel[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
