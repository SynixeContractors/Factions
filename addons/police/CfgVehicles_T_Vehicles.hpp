#define TEMPLATE_CAMO Police

class CLASS2(SIDE,Offroad_Police): GCLASS(Offroad_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Covered_Police): GCLASS(Offroad_Covered_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Comms_Police): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Transport_Police): GCLASS(Van_Transport_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Cargo_Police): GCLASS(Van_Cargo_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};

#undef TEMPLATE_CAMO
