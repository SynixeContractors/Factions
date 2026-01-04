class GCLASS(Badger);
class CLASS(Badger): GCLASS(Badger) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class GCLASS(Badger_Command);
class CLASS(Badger_Command): GCLASS(Badger_Command) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class GCLASS(Badger_Mortar);
class CLASS(Badger_Mortar): GCLASS(Badger_Mortar) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class GCLASS(Badger_ATGM);
class CLASS(Badger_ATGM): GCLASS(Badger_ATGM) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class GCLASS(Badger_Unarmed);
class CLASS(Badger_Unarmed): GCLASS(Badger_Unarmed) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Crewman);
    typicalCargo[] = {QCLASS(Crewman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
//medical not included because it doesn't have all the camo variants
