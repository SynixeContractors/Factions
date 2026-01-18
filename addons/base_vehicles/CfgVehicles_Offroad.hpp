class Offroad_01_military_base_F: Offroad_01_base_F {
    class AnimationSources;
};
class Offroad_01_military_covered_base_F: Offroad_01_military_base_F {
    class AnimationSources: AnimationSources {
        class HideAntennas;
        class HideCover;
        class HideRoofRack;
    };
};
class GCLASS(Offroad): Offroad_01_military_covered_base_F {
    displayName = "Offroad";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    textureList[] = {"Beige",1,"Black",1,"Blue",1,"Darkred",1,"Green",1,"Olive",1,"Red",1,"White",1};
    #include "textures/Offroad.hpp"
    class AnimationSources: AnimationSources {
        class HideAntennas: HideAntennas {
            initPhase = 1;
        };
        class HideCover: HideCover {
            initPhase = 1;
        };
        class HideRoofRack: HideRoofRack {
            initPhase = 1;
        };
    };
    animationList[] = {};
};

class C_Offroad_01_covered_F;
class GCLASS(Offroad_Covered): C_Offroad_01_covered_F {
    displayName = "Offroad (Covered)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/Offroad.hpp"
};

class GCLASS(Offroad_Comms): GCLASS(Offroad) {
    displayName = "Offroad (Comms)";
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "racks\carcomms.hpp"
    class AnimationSources: AnimationSources {
        class HideAntennas: HideAntennas {
            initPhase = 0;
        };
        class HideCover: HideCover {
            initPhase = 0;
        };
        class HideRoofRack: HideRoofRack {
            initPhase = 0;
        };
    };
};

class C_Offroad_01_repair_F;
class GCLASS(Offroad_Services): C_Offroad_01_repair_F {
    displayName = "Offroad (Services)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/Offroad.hpp"
};

class I_G_Offroad_01_armed_F;
class GCLASS(Offroad_HMG): I_G_Offroad_01_armed_F {
    displayName = "Offroad (HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/Offroad.hpp"
};

class I_G_Offroad_01_AT_F;
class GCLASS(Offroad_AT): I_G_Offroad_01_AT_F {
    displayName = "Offroad (AT)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/Offroad.hpp"
};

class I_G_Offroad_AA_lxWS;
class GCLASS(Offroad_AA): I_G_Offroad_AA_lxWS {
    displayName = "Offroad (AA)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/OffroadAA.hpp"
};

class I_G_Offroad_01_armor_base_lxWS;
class GCLASS(Offroad_Armored): I_G_Offroad_01_armor_base_lxWS {
    displayName = "Offroad (UP)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/OffroadArmored.hpp"
};

class I_G_Offroad_01_armor_AT_lxWS;
class GCLASS(Offroad_Armored_AT): I_G_Offroad_01_armor_AT_lxWS {
    displayName = "Offroad (UP, AT)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/OffroadArmored.hpp"
};

class I_G_Offroad_01_armor_armed_lxWS;
class GCLASS(Offroad_Armored_HMG): I_G_Offroad_01_armor_armed_lxWS {
    displayName = "Offroad (UP, HMG)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/OffroadArmored.hpp"
};

class I_Tura_Offroad_armor_AA_lxWS;
class GCLASS(Offroad_Armored_AA): I_Tura_Offroad_armor_AA_lxWS {
    displayName = "Offroad (UP, AA)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 80;
    #include "textures/OffroadAA.hpp"
};
