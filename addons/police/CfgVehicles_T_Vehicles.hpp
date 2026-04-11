#define TEMPLATE_CAMO Gendarmerie

class CLASS2(SIDE,Offroad): GCLASS(Offroad_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Covered): GCLASS(Offroad_Covered_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Comms): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Transport): GCLASS(Van_Transport_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram): CLASS(Ram) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Covered): GCLASS(Ram_Covered_Lights) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Bars_Covered): GCLASS(Ram_Bars_Covered) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Bars): GCLASS(Ram_Bars) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Crewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Crewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Crewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};

#undef TEMPLATE_CAMO
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
#undef TEMPLATE_CAMO
