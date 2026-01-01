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
    textureList[] = {"Armed_Black",1,"Armed_Tan",1,"Armed_Green",1,"Armed_Grey",1};
    class TextureSources {
        class Armed_Black {
            displayName = "Black (M134)";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_black_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
        class Armed_Tan {
            displayName = "Tan (M134)";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_tan_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
        class Armed_Green {
            displayName = "Green (M134)";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_green_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
        class Armed_Grey {
            displayName = "Grey (M134)";
            textures[] = {"\x\tacs\addons\arcadian\data\arcadian_body_armed_grey_co.paa","\x\tacs\addons\arcadian\data\arcadian_interior_armed_co.paa"};
            factions[] = {};
        };
    };
};
