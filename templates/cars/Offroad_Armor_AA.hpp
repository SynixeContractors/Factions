class GCLASS(Offroad_Armored_AA);
class CLASS(Offroad_Armored_AA): GCLASS(Offroad_Armored_AA) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
