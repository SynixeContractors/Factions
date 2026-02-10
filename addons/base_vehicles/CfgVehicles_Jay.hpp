#define JAY_TEXTURE_LIST textureList[] = {\
    "Black", JAY_TEXTURE_FLATBED,\
    "Brown", JAY_TEXTURE_FLATBED,\
    "Insurgent_04", JAY_TEXTURE_FLATBED,\
    "Insurgent_05", JAY_TEXTURE_FLATBED,\
    "Insurgent_06", JAY_TEXTURE_FLATBED,\
    "Olive", JAY_TEXTURE_FLATBED,\
    "Red", JAY_TEXTURE_FLATBED,\
    "White", JAY_TEXTURE_FLATBED,\
    "YellowBlack", JAY_TEXTURE_FLATBED,\
    \
    "Black_white", JAY_TEXTURE_BOX,\
    "Brown_white", JAY_TEXTURE_BOX,\
    "Insurgent_04_white", JAY_TEXTURE_BOX,\
    "Insurgent_05_white", JAY_TEXTURE_BOX,\
    "Insurgent_06_white", JAY_TEXTURE_BOX,\
    "Olive_white", JAY_TEXTURE_BOX,\
    "Red_white", JAY_TEXTURE_BOX,\
    "Whitebox", JAY_TEXTURE_BOX,\
    "Yellow_white", JAY_TEXTURE_BOX,\
}

class C_Van_01_transport_F;
class GCLASS(Jay_Flatbed): C_Van_01_transport_F {
    displayName = "Jay (Flatbed)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #define JAY_TEXTURE_FLATBED 1
    #define JAY_TEXTURE_BOX 0
    JAY_TEXTURE_LIST;
    #undef JAY_TEXTURE_FLATBED
    #undef JAY_TEXTURE_BOX
    class TextureSources {
        #include "textures/Jay_Flatbed.hpp"
    };
};

class C_Van_01_box_F;
class GCLASS(Jay_Box): C_Van_01_box_F {
    displayName = "Jay (Box)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    #define JAY_TEXTURE_FLATBED 1
    #define JAY_TEXTURE_BOX 1
    JAY_TEXTURE_LIST;
    #undef JAY_TEXTURE_FLATBED
    #undef JAY_TEXTURE_BOX
    class TextureSources {
        #include "textures/Jay_Flatbed.hpp"
        #include "textures/Jay_Box.hpp"
    };
};

class C_Van_01_fuel_F;
class GCLASS(Jay_Fuel): C_Van_01_fuel_F {
    displayName = "Jay (Fuel)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 140;
    class TextureSources {
        class Black {
            displayName = "Black & Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
            factions[] = {};
        };
        class White {
            displayName = "White & Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
            factions[] = {};
        };
        class Red {
            displayName = "Red & Black";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
            factions[] = {};
        };
        class Black_v2 {
            displayName = "Black & Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_red_CO.paa"};
            factions[] = {};
        };
        class White_v2 {
            displayName = "White & Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_red_CO.paa"};
            factions[] = {};
        };
        class Red_v2 {
            displayName = "Red & Red";
            textures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_red_CO.paa"};
            factions[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerllia (Green)";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};
            factions[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerllia (White)";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};
            factions[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerllia (Brown)";
            textures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};
            factions[] = {};
        };
    };
};
