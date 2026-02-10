#define JEEP_TEXTURE_LIST textureList[] = {\
  "Black",1,\
  "Blue",1,\
  "Brown",1,\
  "Green",1,\
  "Olive",1,\
  "Orange",1,\
  "Red",1,\
  "White",1,\
}

class Offroad_02_base_F;
class GCLASS(Jeep): Offroad_02_base_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 80;
    JEEP_TEXTURE_LIST;
    #include "textures\Jeep.hpp"
};

class Offroad_02_LMG_base_F;
class GCLASS(Jeep_LMG): Offroad_02_LMG_base_F {
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 80;
    JEEP_TEXTURE_LIST;
    #include "textures\Jeep.hpp"
};
