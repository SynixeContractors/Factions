class GCLASS(CessnaTTx);
class CLASS(CessnaTTx): GCLASS(CessnaTTx) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(HeliPilot)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
