class CLASS2(SIDE,Armor): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Security_Armor);
    faction = FACTION;

    #include "wear/polo.hpp"
    @Vests({
        "variants": {
            "V_TacVest_blk": 1,
            "tacs_Vest_Tactical_DarkBlack": 1,
            "V_TacVest_grn": 1,
            "V_TacVest_khk": 1,
            "V_HarnessOSpec_blk": 1,
            "V_BandollierB_blk": 1,
            "V_TacChestrig_grn_F": 1,
            "V_lxWS_TacVestIR_oli": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });
    @Primary({
        "optics": {
            "": 4,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_ICO": 1,
            "SMA_eotech552": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_MROS_black": 1,
        },
    });
};
class CLASS2(SIDE,Armor_Rifleman_Pistol): CLASS2(SIDE,Armor) {
    @Role(Pistol);
    #include "weapons/pistol.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_SMG): CLASS2(SIDE,Armor) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_556): CLASS2(SIDE,Armor) {
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (5.56mm)";
    #include "weapons/556.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_545): CLASS2(SIDE,Armor_Rifleman_556) {
    displayName = "Rifleman (5.45mm)";
    #include "weapons/545.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_762): CLASS2(SIDE,Armor_Rifleman_556) {
    displayName = "Rifleman (7.62mm)";
    #include "weapons/762.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_65): CLASS2(SIDE,Armor_Rifleman_556) {
    displayName = "Rifleman (6.5mm)";
    #include "weapons/65.hpp"
};
class CLASS2(SIDE,Armor_Rifleman_58): CLASS2(SIDE,Armor_Rifleman_556) {
    displayName = "Rifleman (5.8mm)";
    #include "weapons/58.hpp"
};
