#define TEMPLATE_CAMO Gendarmerie

class CLASS2(SIDE,Offroad): CLASS(Offroad) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Covered): CLASS(Offroad_Covered) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Comms): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Transport): CLASS(Van_Transport) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram): CLASS(Ram) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Covered): CLASS(Ram_Covered) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Bars_Covered): CLASS(Ram_Bars_Covered) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Bars): CLASS(Ram_Bars) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar): GCLASS(Otokar) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Crewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar_HMG): GCLASS(Otokar_HMG) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Crewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Otokar_RCWS): GCLASS(Otokar_RCWS) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Crewman);
    editorSubcategory = QCLASS2(NATION,Gendarmerie_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};

#undef TEMPLATE_CAMO
#define TEMPLATE_CAMO Police

class CLASS2(SIDE,Offroad_Police): CLASS(Offroad) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Covered_Police): CLASS(Offroad_Covered) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Comms_Police): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = QGCLASS(police);
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Policeman);
    editorSubcategory = QCLASS2(NATION,Patrol_vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
#undef TEMPLATE_CAMO
