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
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_black_co.paa","\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_black_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_black_CO.paa"};
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Beige {
            displayName = "Beige";
            textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_beige_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_SFIA_CO.paa"};
            factions[] = {};
        };
        class WhiteUN {
            displayName = "United Assistance";
            textures[] = {"\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_UN_co.paa","\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_UN_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_whiteUN_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_white_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class SFIA {
            displayName = "SFIA 01";
            textures[] = {"\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_SFIA_CO.paa"};
            factions[] = {};
        };
        class SFIA2 {
            displayName = "SFIA 02";
            textures[] = {"\lxWS\vehicles_f_lxws\Offroad_01\data\Offroad_01_ext_tura_CO.paa","\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_tura_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_tura_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_SFIA_CO.paa"};
            factions[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig01_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerrilla 02";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig02_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerrilla 03";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig01_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_04 {
            displayName = "Guerrilla 04";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig04_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_05 {
            displayName = "Guerrilla 05";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig05_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_06 {
            displayName = "Guerrilla 06";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig06_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_07 {
            displayName = "Guerrilla 07";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig07_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_08 {
            displayName = "Guerrilla 08";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig08_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_09 {
            displayName = "Guerrilla 09";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig09_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_10 {
            displayName = "Guerrilla 10";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig10_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_11 {
            displayName = "Guerrilla 11";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig11_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_12 {
            displayName = "Guerrilla 12";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig12_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
    };
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
    class TextureSources {
        class Black {
            displayName = "Black";
            textures[] = {"\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_black_co.paa","\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_black_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_black_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_black_CO.paa"};
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Beige {
            displayName = "Beige";
            textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_beige_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_SFIA_CO.paa"};
            factions[] = {};
        };
        class WhiteUN {
            displayName = "United Assistance";
            textures[] = {"\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_UN_co.paa","\lxws\vehicles_f_lxws\data\Offroad_01\offroad_01_ext_UN_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_whiteUN_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_white_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class SFIA {
            displayName = "SFIA 01";
            textures[] = {"\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_SFIA_CO.paa"};
            factions[] = {};
        };
        class SFIA2 {
            displayName = "SFIA 02";
            textures[] = {"\lxWS\vehicles_f_lxws\Offroad_01\data\Offroad_01_ext_tura_CO.paa","\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_tura_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_tura_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_SFIA_CO.paa"};
            factions[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig01_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerrilla 02";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig02_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerrilla 03";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig01_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_04 {
            displayName = "Guerrilla 04";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig04_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_05 {
            displayName = "Guerrilla 05";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig05_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_06 {
            displayName = "Guerrilla 06";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig06_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_07 {
            displayName = "Guerrilla 07";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig07_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_08 {
            displayName = "Guerrilla 08";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig08_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_09 {
            displayName = "Guerrilla 09";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig09_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
        class Guerilla_10 {
            displayName = "Guerrilla 10";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig10_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_11 {
            displayName = "Guerrilla 11";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig11_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Guerilla_12 {
            displayName = "Guerrilla 12";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_ig12_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_CO.paa"};
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa","\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa","lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa","lxws\vehicles_f_lxws\Offroad_01\data\adds\offroad_01_metal_frame_green_CO.paa"};
            factions[] = {};
        };
    };
};
