class CLASS2(SIDE,Polo): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Security_Polo);
    faction = FACTION;

    #include "wear/polo.hpp"
    #include "wear/headwear.hpp"
    @Vests({
        "variants": {
            "V_Rangemaster_belt_blk": 1,
            "V_Rangemaster_belt_cbr": 1,
            "V_Rangemaster_belt_oli": 1,
            "V_Rangemaster_belt_khk": 1,
            "synixe_mgp_vest_battle_belt_assaulter_blk": 1,
            "synixe_mgp_vest_battle_belt_assaulter_cb": 1,
            "synixe_mgp_vest_battle_belt_assaulter_khk": 1,
            "synixe_mgp_vest_battle_belt_hgunner_blk": 1,
            "synixe_mgp_vest_battle_belt_hgunner_cb": 1,
            "synixe_mgp_vest_battle_belt_hgunner_khk": 1,
            "Aegis_V_CarrierRigKBT_01_holster_black_F": 1,
            "Aegis_V_CarrierRigKBT_01_holster_cbr_F": 1,
            "Aegis_V_CarrierRigKBT_01_holster_khk_F": 1,
            "Aegis_V_CarrierRigKBT_01_holster_olive_F": 1,
            "V_LegStrapBag_black_F": 1,
            "V_LegStrapBag_coyote_F": 1,
            "V_LegStrapBag_olive_F": 1,
            "V_BandollierB_blk": 1,
            "V_BandollierB_rgr": 1,
            "V_BandollierB_oli": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });
    @Primary({
        "optics": {
            "": 8,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_ICO": 1,
            "SMA_eotech552": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_MROS_black": 1,
        },
    });
};
class CLASS2(SIDE,Polo_Rifleman_Pistol): CLASS2(SIDE,Polo) {
    @Role(Pistol);
    #include "weapons/pistol.hpp"
};
class CLASS2(SIDE,Polo_Rifleman_SMG): CLASS2(SIDE,Polo) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,Polo_Rifleman_556): CLASS2(SIDE,Polo) {
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (5.56mm)";
    #include "weapons/556.hpp"
};
class CLASS2(SIDE,Polo_Rifleman_545): CLASS2(SIDE,Polo_Rifleman_556) {
    displayName = "Rifleman (5.45mm)";
    #include "weapons/545.hpp"
};
class CLASS2(SIDE,Polo_Rifleman_762): CLASS2(SIDE,Polo_Rifleman_556) {
    displayName = "Rifleman (7.62x39mm)";
    #include "weapons/762.hpp"
};
class CLASS2(SIDE,Polo_Rifleman_65): CLASS2(SIDE,Polo_Rifleman_556) {
    displayName = "Rifleman (6.5mm)";
    #include "weapons/65.hpp"
};
class CLASS2(SIDE,Polo_Rifleman_58): CLASS2(SIDE,Polo_Rifleman_556) {
    displayName = "Rifleman (5.8mm)";
    #include "weapons/58.hpp"
};
