class Heli_Light_02_unarmed_base_F;
class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F {
    class EventHandlers;
};
class GCLASS(Orca): O_Heli_Light_02_unarmed_F {
    displayName = "PO-30 Orca";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 1800;
    class EventHandlers: EventHandlers {
        postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
    };
    textureList[] = {"Black",1,"Blackcustom",1,"Green",1,"CIV",1};
    class TextureSources {
        class Opfor {
            displayName = "Hex Ochre";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
            faction[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
            faction[] = {};
        };
        class Blackcustom {
            displayName = "Orca";
            textures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
            faction[] = {};
        };
        class Indep {
            displayName = "DAP Woodland";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"};
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Woodland";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
            faction[] = {};
        };
        class Green {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa"};
            faction[] = {};
        };
        class CIV {
            displayName = "White & Blue";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_Civilian_CO.paa"};
            factions[] = {};
        };
        class Marar {
            displayName = "Marar";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa"};
            faction[] = {};
        };
        class UNO {
            displayName = "United Nations";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
            faction[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_whex_CO.paa"};
            faction[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_tk_CO.paa"};
            faction[] = {};
        };
        class Ardistan {
            displayName = "Ardistan";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_ardi_CO.paa"};
            faction[] = {};
        };
        class ION_BLACK
        {
            displayName = "ION Services";
            textures[] = {"\lxWS\air_f_lxWS\Heli_Light_02\data\Heli_Light_02_ext_ion_CO.paa"};
            faction[] = {};
        };
        class BlackStar
        {
            displayName = "Black (Star)";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_RUS_CO.paa"};
            faction[] = {};
        };
    };
};

class Heli_Light_02_dynamicLoadout_base_F;
class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F {
    class EventHandlers;
};
class GCLASS(OrcaArmed): O_Heli_Light_02_dynamicLoadout_F {
    displayName = "PO-30A Orca";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 1800;
    class EventHandlers: EventHandlers {
        postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
    };
    textureList[] = {"Black",1,"Blackcustom",1,"Green",1,"CIV",1};
    class TextureSources {
        class Opfor {
            displayName = "Hex Ochre";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
            faction[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
            faction[] = {};
        };
        class Blackcustom {
            displayName = "Orca";
            textures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
            faction[] = {};
        };
        class Indep {
            displayName = "DAP Woodland";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"};
            factions[] = {};
        };
        class GreenHex {
            displayName = "Hex Woodland";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
            faction[] = {};
        };
        class Green {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa"};
            faction[] = {};
        };
        class CIV {
            displayName = "White & Blue";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_Civilian_CO.paa"};
            factions[] = {};
        };
        class Marar {
            displayName = "Marar";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa"};
            faction[] = {};
        };
        class UNO {
            displayName = "United Nations";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
            faction[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_whex_CO.paa"};
            faction[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_tk_CO.paa"};
            faction[] = {};
        };
        class Ardistan {
            displayName = "Ardistan";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_ardi_CO.paa"};
            faction[] = {};
        };
        class ION_BLACK
        {
            displayName = "ION Services";
            textures[] = {"\lxWS\air_f_lxWS\Heli_Light_02\data\Heli_Light_02_ext_ion_CO.paa"};
            faction[] = {};
        };
        class BlackStar
        {
            displayName = "Black (Star)";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_RUS_CO.paa"};
            faction[] = {};
        };
    };
};

class B_ION_Heli_Light_02_unarmed_lxWS: O_Heli_Light_02_unarmed_F {
    class EventHandlers;
};
class GCLASS(OrcaR): B_ION_Heli_Light_02_unarmed_lxWS {
    displayName = "PO-30R Orca";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 1800;
    class EventHandlers: EventHandlers {
        postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
    };
    textureList[] = {"Black",1,"Blackcustom",1,"Green",1,"CIV",1};
    class TextureSources {
        class Opfor
        {
            displayName = "Hex Ochre";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_bhex_co.paa"};
            faction[] = {};
        };
        class GreenHex
        {
            displayName = "Hex Woodland";
            textures[] = {"\lxWS\air_f_lxWS\heli_light_02\data\Heli_Light_02_ext_ghex_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            factions[] = {};
        };
        class ION_BLACK
        {
            displayName = "ION Services";
            textures[] = {"\lxWS\air_f_lxWS\Heli_Light_02\data\Heli_Light_02_ext_ion_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Black
        {
            displayName = "Black";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Blackcustom
        {
            displayName = "Orca";
            textures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Blue
        {
            displayName = "White & Blue";
            textures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            factions[] = {};
        };
        class Ardistan {
            displayName = "Ardistan";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_ardi_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            faction[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_whex_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            faction[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_tk_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_bhex_co.paa"};
            faction[] = {};
        };
        class Marar {
            displayName = "Marar";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class UNO {
            displayName = "United Nations";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Green {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            faction[] = {};
        };
        class Indep {
            displayName = "DAP Woodland";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            factions[] = {};
        };
        class BlackStar
        {
            displayName = "Black (Star)";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_RUS_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
    };
};

class B_ION_Heli_Light_02_dynamicLoadout_lxWS: O_Heli_Light_02_dynamicLoadout_F {
    class EventHandlers;
};
class GCLASS(OrcaAR): B_ION_Heli_Light_02_dynamicLoadout_lxWS {
    displayName = "PO-30AR Orca";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 1800;
    class EventHandlers: EventHandlers {
        postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;}";
    };
    textureList[] = {"Black",1,"Blackcustom",1,"Green",1,"CIV",1};
    class TextureSources {
        class Opfor
        {
            displayName = "Hex Ochre";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_bhex_co.paa"};
            faction[] = {};
        };
        class GreenHex
        {
            displayName = "Hex Woodland";
            textures[] = {"\lxWS\air_f_lxWS\heli_light_02\data\Heli_Light_02_ext_ghex_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            factions[] = {};
        };
        class ION_BLACK
        {
            displayName = "ION Services";
            textures[] = {"\lxWS\air_f_lxWS\Heli_Light_02\data\Heli_Light_02_ext_ion_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Black
        {
            displayName = "Black";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Blackcustom
        {
            displayName = "Orca";
            textures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Blue
        {
            displayName = "White & Blue";
            textures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            factions[] = {};
        };
        class Ardistan {
            displayName = "Ardistan";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_ardi_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            faction[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Green";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_whex_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            faction[] = {};
        };
        class Takistan {
            displayName = "Hex Mixed";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_tk_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_bhex_co.paa"};
            faction[] = {};
        };
        class Marar {
            displayName = "Marar";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class UNO {
            displayName = "United Nations";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
        class Green {
            displayName = "Olive";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ghex_co.paa"};
            faction[] = {};
        };
        class Indep {
            displayName = "DAP Woodland";
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            factions[] = {};
        };
        class BlackStar
        {
            displayName = "Black (Star)";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_RUS_CO.paa","\a3\air_f\data\rockets_co.paa","\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"};
            faction[] = {};
        };
    };
};
