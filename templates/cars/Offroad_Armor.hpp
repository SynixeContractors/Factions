class GCLASS(Offroad_Armored_HMG);
class CLASS(Offroad_Armored_HMG): GCLASS(Offroad_Armored_HMG) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class GCLASS(Offroad_Armored_AT);
class CLASS(Offroad_Armored_AT): GCLASS(Offroad_Armored_AT) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
