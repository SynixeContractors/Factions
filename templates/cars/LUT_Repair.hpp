class GCLASS(LUT_Repair);
class CLASS(LUT_Repair): GCLASS(LUT_Repair) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalRepair[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
