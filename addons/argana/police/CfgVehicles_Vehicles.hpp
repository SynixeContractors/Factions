#define TEMPLATE_SIDE 0
#define TEMPLATE_CAMO Argana_Royal
class GCLASS(Ram);
class CLASS(Ram): GCLASS(Ram) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    editorSubcategory = QGCLASS(police_cars);
};
class GCLASS(Ram_Covered);
class CLASS(Ram_Covered): GCLASS(Ram_Covered) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    editorSubcategory = QGCLASS(police_cars);
};
class GCLASS(Ram_Comms);
class CLASS(Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    editorSubcategory = QGCLASS(police_cars);
};
class GCLASS(Ram_Fuel);
class CLASS(Ram_Fuel): GCLASS(Ram_Fuel) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    editorSubcategory = QGCLASS(police_cars);
};
#undef TEMPLATE_CAMO
#define TEMPLATE_CAMO ArganaRoyal
class GCLASS(Van_Transport);
class CLASS(Van_Transport): GCLASS(Van_Transport) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    editorSubcategory = QGCLASS(police_cars);
};
class GCLASS(Van_Cargo);
class CLASS(Van_Cargo): GCLASS(Van_Cargo) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS(Rifleman);
    typicalCargo[] = {QCLASS(Rifleman)};
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
    editorSubcategory = QGCLASS(police_cars);
};
#undef TEMPLATE_CAMO
#undef TEMPLATE_SIDE
