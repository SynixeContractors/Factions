ADD_CAMO_EVENT_HANDLER(C_Heli_Light_01_civil_F,Heli_Light_01_civil_base_F);
class GCLASS(MD500): C_Heli_Light_01_civil_F {
    displayName = "MD 500";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 233;
    textureList[] = {"Blue",1,"Red",1,"Ion",1,"BlueLine",1,"Digital",1,"Elliptical",1,"Furious",1,"Graywatcher",1,"Jeans",1,"Light",1,"Shadow",1,"Sheriff",1,"Speedy",1,"Sunset",1,"Vrana",1,"Wasp",1,"Wave",1};
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class Blue {
            displayName = "White Two-Tone (Blue)";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};
            factions[] = {};
        };
        class Red {
            displayName = "White Two-Tone (Red)";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};
            factions[] = {};
        };
        class Ion {
            displayName = "Black";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
            factions[] = {};
        };
        class BlueLine {
            displayName = "Blue Line";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};
            factions[] = {};
        };
        class Digital {
            displayName = "Digital White";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
            factions[] = {};
        };
        class Elliptical {
            displayName = "Elliptical";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};
            factions[] = {};
        };
        class Furious {
            displayName = "Furious";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};
            factions[] = {};
        };
        class Graywatcher {
            displayName = "Graywatcher";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};
            factions[] = {};
        };
        class Jeans {
            displayName = "Jeans";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};
            factions[] = {};
        };
        class Light {
            displayName = "Dasher";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};
            factions[] = {};
        };
        class Shadow {
            displayName = "Shadow";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};
            factions[] = {};
        };
        class Sheriff {
            displayName = "Sheriff";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};
            factions[] = {};
        };
        class Speedy {
            displayName = "Speedy";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};
            factions[] = {};
        };
        class Sunset {
            displayName = "Sunset";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};
            factions[] = {};
        };
        class Vrana {
            displayName = "Black & Red";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};
            factions[] = {};
        };
        class Wasp {
            displayName = "Wasp";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};
            factions[] = {};
        };
        class Wave {
            displayName = "Wave";
            textures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};
            factions[] = {};
        };
    };
};
ADD_CAMO_EVENT_HANDLER(B_Heli_Light_01_F,Heli_Light_01_unarmed_base_F);
class GCLASS(MD500E): B_Heli_Light_01_F {
    displayName ="MD 500E (MH-6) Little Bird";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 233;
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"};
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Light_01_ext_sand_CO.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "DAP Green";
            textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa"};
            factions[] = {};
        };
        class Desert {
            displayName = "Desert";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa"};
            factions[] = {};
        };
        class Jungle {
            displayName = "Jungle";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_Jungle_CO.paa","\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"};
            factions[] = {};
        };
        class Digital {
            displayName = "Digital";
            textures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
            factions[] = {};
        };
    };
};

ADD_CAMO_EVENT_HANDLER(B_Heli_Light_01_dynamicLoadout_F,Heli_Light_01_dynamicLoadout_base_F);
class GCLASS(MD500E_Armed): B_Heli_Light_01_dynamicLoadout_F {
    displayName ="MD 500E (AH-6) Little Bird";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 233;
    #include "eventhandler_camo.hpp"
    class TextureSources {
        class Green {
            displayName = "Green";
            textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa","\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"};
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            textures[] = {"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Light_01_ext_sand_CO.paa","a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa","\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"};
            factions[] = {};
        };
        class Indep {
            displayName = "DAP Green";
            textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa","\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"};
            factions[] = {};
        };
        class Desert {
            displayName = "Desert";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa","\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"};
            factions[] = {};
        };
        class Jungle {
            displayName = "Jungle";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_Jungle_CO.paa","\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"};
            factions[] = {};
        };
        class Digital {
            displayName = "Digital";
            textures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
            factions[] = {};
        };
    };
};
