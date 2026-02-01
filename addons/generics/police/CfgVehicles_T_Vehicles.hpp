#define TEMPLATE_CAMO Gendarmerie
#define TEMPLATE_FACTION QGCLASS(gendarmerie)

class CLASS2(SIDE,Offroad): CLASS(Offroad) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Covered): CLASS(Offroad_Covered) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Offroad_Comms): GCLASS(Offroad_Comms) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Van_Transport): CLASS(Van_Transport) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram): CLASS(Ram) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Covered): CLASS(Ram_Covered) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};
class CLASS2(SIDE,Ram_Comms): GCLASS(Ram_Comms) {
    SCOPE_DLC;
    faction = TEMPLATE_FACTION;
    side = TEMPLATE_SIDE;
    crew = QCLASS2(SIDE,Gendarme);
    editorSubcategory = QPCLASS2(NATION,vehicles);
    textureList[] = {QUOTE(TEMPLATE_CAMO),1};
};

#undef TEMPLATE_CAMO
#undef TEMPLATE_FACTION
