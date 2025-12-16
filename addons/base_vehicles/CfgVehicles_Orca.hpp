class O_Heli_Light_02_unarmed_F;
class GCLASS(Orca): O_Heli_Light_02_unarmed_F {
    displayName = "Orca";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    ace_refuel_fuelCapacity = 1800;
    textureList[] = {"Black",1,"Blackcustom",1,"Blue",1,"Green",1,"CIV",1};
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
        class Blue {
            displayName = "White & Blue";
            textures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
            factions[] = {};
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
    };
};
