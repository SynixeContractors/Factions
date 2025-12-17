class I_Heli_Transport_02_F;
class GCLASS(Mohawk): I_Heli_Transport_02_F {
    displayName = "CH-49 Mohawk";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2500;
    textureList[] = {"ION",1,"IONBlue",1,"Dahoman",1,"President",1,"Vrana",1,"Wave",1};
    class TextureSources {
        class AAF {
            displayName = "DAP Woodland";
            textures[] = {"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class ION {
            textures[] = {"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ION_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ION_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_ION_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
            displayName = "White & Black (Green Interior)";
        };
        class IONBlue {
            displayName = "White & Black (Blue Interior)";
            textures[] = {"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ION_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ION_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_ION_CO.paa","A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_int_02_IDAP_CO.paa"};
            factions[] = {};
        };
        class Dahoman {
            displayName = "Green & White";
            textures[] = {"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_DAHOMAN_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_DAHOMAN_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_DAHOMAN_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class IDAP {
            displayName = "IDAP";
            textures[] = {"A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_1_IDAP_CO.paa","A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_2_IDAP_CO.paa","A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_3_IDAP_CO.paa","A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_int_02_IDAP_CO.paa"};
            factions[] = {};
        };
        class President {
            displayName = "White & Olive";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_President_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_President_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_President_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class Vrana {
            displayName = "Red & Black";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Vrana_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Vrana_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Vrana_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class Wave {
            displayName = "Wave";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Wave_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Wave_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Wave_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Black_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Black_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Black_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class Grey {
            displayName = "Grey";
            textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Grey_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Grey_CO.paa","\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Grey_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class DahomanBlue {
            displayName = "White & Teal";
            author = "O&T Expansion Eden";
            textures[] = {"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa","A3\Air_F_Orange\Heli_Transport_02\Data\Heli_Transport_02_int_02_IDAP_CO.paa"};
            factions[] = {};
        };
        class Woodland {
            displayName = "Woodland";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
        class Arid {
            displayName = "Arid";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_1_arid_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_2_arid_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_3_arid_CO.paa","\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
            factions[] = {};
        };
    };
};

class Aegis_C_Heli_Transport_02_VIP_F;
class GCLASS(Mohawk_Executive): Aegis_C_Heli_Transport_02_VIP_F {
    displayName = "CH-49 Mohawk (Executive)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 2500;
    textureList[] = {"ION",1,"GenGrey",1,"White",1,"Black",1,"Vrana",1};
    class TextureSources {
        class ION {
            displayName = "White & Black";
            textures[] = {"\a3\air_f_beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ion_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_CO.paa","\a3\air_f_beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ion_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class ION_lxWS {
            displayName = "ION Services";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_ION_lxWS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class GenGrey {
            displayName = "Grey";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Grey_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Grey_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Grey_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class White {
            displayName = "White";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_White_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_White_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_White_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class UNA {
            displayName = "United Assisstance";
            textures[] = {"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_1_UN_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_UNA_CO.paa","lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_2_UN_CO.paa","lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"};
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Black_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxws_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class Vrana {
            displayName = "Red & Black";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Vrana_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Vrana_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Vrana_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class BluePearl {
            displayName = "Blue Pearl";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_BluePearl_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_BluePearl_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_BluePearl_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Blue_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Blue_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Blue_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class RAS_VVIP {
            displayName = "Republic of Altis and Stratis";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_RAS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_RAS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_RAS_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class Daltgreen {
            displayName = "Daltgreen";
            textures[] = {"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Daltgreen_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Daltgreen_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Daltgreen_CO.paa","\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"};
            factions[] = {};
        };
        class UNO_VIP {
            displayName = "United Nations";
            textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_01_UN_VIP_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa","\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO","lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"};
            factions[] = {};
        };
    };
};
