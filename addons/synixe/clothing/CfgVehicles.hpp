#define MACRO_BASE_CLASS_COMMON \
    dlc = QUOTE(PREFIX); \
    scope = 0; \
    side = 1; \
    weapons[] = {"Throw", "Put"}; \
    respawnWeapons[] = {"Throw", "Put"}; \
    magazines[] = {}; \
    respawnMagazines[] = {}; \
    items[] = {}; \
    respawnItems[] = {}; \
    linkedItems[] = {}; \
    respawnLinkedItems[] = {}; \
    modelSides[] = {6}

class CfgVehicles {
    class B_RangeMaster_F;
    class PCLASS(Unit_Polo_Base): B_RangeMaster_F {
        MACRO_BASE_CLASS_COMMON;
    };
    class PCLASS(Unit_Contractor_Shirt): PCLASS(Unit_Polo_Base) {
        scope = 1;
        author = "Brett Harrison";
        uniformClass = QPCLASS(Uniform_Contractor_Shirt);
        hiddenSelectionsTextures[] = {QPATHTOF(clothing\data\uniform_contractor_shirt_co.paa)};
    };

    // Long Sleeve Plaid
    class B_Soldier_base_F;
    class PCLASS(Unit_Combat_LS_C_Base): B_Soldier_base_F {
        MACRO_BASE_CLASS_COMMON;
        hiddenSelectionsMaterials[] = {QPATHTOF(clothing\data\uniform_combat_plaid.rvmat)};
    };

    class PCLASS(Unit_Combat_LS_Synixe_BP_BB): PCLASS(Unit_Combat_LS_C_Base) {
        scope = 1;
        author = "Brett Harrison";
        uniformClass = QPCLASS(Uniform_Combat_LS_Synixe_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(clothing\data\uniform_combat_synixe_bp_bb_co.paa)};
    };

    // Rolled Plaid
    class B_Soldier_03_f;
    class PCLASS(Unit_Combat_RS_Base): B_Soldier_03_f {
        MACRO_BASE_CLASS_COMMON;
        hiddenSelectionsMaterials[] = {QPATHTOF(clothing\data\uniform_combat_plaid.rvmat)};
    };
    class PCLASS(Unit_Combat_RS_C_Base): PCLASS(Unit_Combat_RS_Base) {
        hiddenSelectionsMaterials[] = {QPATHTOF(clothing\data\uniform_combat_plaid.rvmat)};
    };

    class PCLASS(Unit_Combat_RS_Synixe_BP_BB): PCLASS(Unit_Combat_RS_C_Base) {
        scope = 1;
        author = "Brett Harrison";
        uniformClass = QPCLASS(Uniform_Combat_RS_Synixe_BP_BB);
        hiddenSelectionsTextures[] = {QPATHTOF(clothing\data\uniform_combat_synixe_bp_bb_co.paa)};
    };
    //djellaba
    class WSLV_Black_yellow_Uniform;
    class PCLASS(WSLV_Black_Synixe_Uniform): WSLV_Black_yellow_Uniform {
        uniformClass = QPCLASS(WSLV_Black_Synixe);
        hiddenSelectionsTextures[] = {
            "\lxws\characters_f_lxws\data\nato\clothing1_black_co.paa",
            QPATHTOF(clothing\data\djellaba_synixe.paa),
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_pants_black_co.paa"
        };
    };

    #include "CfgVehicles_GroundItems.hpp"
};
