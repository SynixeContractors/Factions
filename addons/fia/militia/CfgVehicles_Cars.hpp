// Rams with civilian variants
#define RAM_CIVILIAN_TEXTURES textureList[] = {\
  "AAF",5,\
  "Black",1,\
  "Blue",1,\
  "Brown",1,\
  "Cruiser",1,\
  "Gray",1,\
  "Green",1,\
  "NATO",1,\
  "NATO_P",1,\
  "Olive",1,\
  "Orange",1,\
  "Red",1,\
  "Tan",1,\
  "White",1, \
  "Yellow",1,\
}

class CLASS2(SIDE,Ram): GCLASS(Ram) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,Ram_Covered): GCLASS(Ram_Covered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,Ram_HMG): GCLASS(Ram_HMG) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,Ram_Fuel): GCLASS(Ram_Fuel) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,Ram_Rocket): GCLASS(Ram_Rocket) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    RAM_CIVILIAN_TEXTURES;
};
#undef RAM_CIVILIAN_TEXTURES


#define LUT_CIVILIAN_TEXTURES textureList[] = {\
  "Indep",4,\
  "Black",1,\
  "Blue",1,\
  "Brown",1,\
  "Green",1,\
  "Lime",1,\
  "Orange",1,\
  "Sand",1,\
  "Yellow",1,\
}

class CLASS2(SIDE,LUT_Transport): GCLASS(LUT_Transport) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_TransportCovered): GCLASS(LUT_TransportCovered) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_Repair): GCLASS(LUT_Repair) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_Medical): GCLASS(LUT_Medical) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_Fuel): GCLASS(LUT_Fuel) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_Cargo): GCLASS(LUT_Cargo) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_Flatbed): GCLASS(LUT_Flatbed) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
class CLASS2(SIDE,LUT_AA): GCLASS(LUT_AA) {
    SCOPE_DLC;
    faction = QPCLASS(SIDE_FACTION);
    side = SIDE_NUMBER;
    crew = QCLASS2(SIDE,Rifleman);
    typicalCargo[] = {QCLASS2(SIDE,Rifleman)};
    LUT_CIVILIAN_TEXTURES;
};
#undef LUT_CIVILIAN_TEXTURES
