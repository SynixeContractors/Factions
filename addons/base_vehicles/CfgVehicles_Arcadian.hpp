class tacs_Arcadian_Unarmed_Base;
class GCLASS(Arcadian): tacs_Arcadian_Unarmed_Base {
    displayName = "Arcadian";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 109;
    textureList[] = {"Black",1,"Tan",1,"Green",1,"Grey",1};
    class PlateInfos {
        name = "spz";
        color[] = {0, 0, 0, 0.75};
        plateFont = "RobotoCondensedBold";
        // Will show as SYN-01 in game.
        plateFormat = "  ###-##"; // Additional spaces are for centering
        plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
    };
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_black_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_co.paa"};
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_tan_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_co.paa"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_green_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_co.paa"};
            factions[] = {};
        };
        class Grey {
            displayName = "Grey";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_grey_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_co.paa"};
            factions[] = {};
        };
    };
};

class tacs_Arcadian_Armed_Base;
class GCLASS(Arcadian_M134): tacs_Arcadian_Armed_Base {
    displayName = "Arcadian (M134)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 109;
    textureList[] = {"Black",1,"Tan",1,"Green",1,"Grey",1};
    class PlateInfos {
        name = "spz";
        color[] = {0, 0, 0, 0.75};
        plateFont = "RobotoCondensedBold";
        // Will show as SYN-01 in game.
        plateFormat = "  ###-##"; // Additional spaces are for centering
        plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
    };
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_black_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_tan_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_green_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
        class Grey {
            displayName = "Grey";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_grey_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
    };
};
