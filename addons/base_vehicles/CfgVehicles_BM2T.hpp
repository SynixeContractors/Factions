
class O_APC_Tracked_02_cannon_F;
class GCLASS(BM2_IFV1): O_APC_Tracked_02_cannon_F {
    displayName = "BM-2T (RCWS-30)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "textures/BM2_IFV1.hpp"
};


class O_APC_Tracked_02_30mm_lxWS;
class GCLASS(BM2_IFV2):  O_APC_Tracked_02_30mm_lxWS {
    displayName = "BM-2K (Bumergang-BM)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "textures/BM2_IFV2.hpp"
};

class O_R_APC_Tracked_02_medical_F;
class GCLASS(BM2_unarmed): O_R_APC_Tracked_02_medical_F {
    displayName = "BM-2P (Medical)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    class TextureSources {
        //unarmed doesnt take camo nets
        class Green {
            displayName = "Green";
            textures[] = {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_medevac_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                "",
                "",
                ""
            };
            factions[] = {};
        };
        class WoodlandHex {
            displayName = "Hex Woodland";
            textures[] = {
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_medical_whex_CO.paa",
                "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_whex_CO.paa",
                "",
                "",
                ""
            };
            factions[] = {};
        };
    };
};


class O_APC_Tracked_02_AA_F;
class GCLASS(BM2_AA): O_APC_Tracked_02_AA_F {
    displayName = "BM-2PVO (ZSU-35)";
    faction = QGCLASS(base_vehicles);
    SCOPE_DLC_VEHICLE;
    EMPTY_INVENTORY;
    crew = "Civilian";
    typicalCargo[] = {"Soldier"};
    ace_refuel_fuelCapacity = 1200;
    #include "textures/BM2_AA.hpp"
};
