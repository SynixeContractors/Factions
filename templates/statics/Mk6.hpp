class GCLASS(Mk6Mortar);
class CLASS(Mk6Mortar): GCLASS(Mk6Mortar) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
};