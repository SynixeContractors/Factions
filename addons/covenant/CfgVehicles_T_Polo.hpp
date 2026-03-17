class CLASS2(SIDE,Base): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QGCLASS2(generics,NATION);
    faction = FACTION;
    @Role(Hidden);
    #include "wear/uniform.hpp"
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
            "optic_Holosight_blk_F": 1,
            "Aegis_optic_1p87": 1,
            "JCA_optic_MROS_black": 1,
        },
    });
};
class CLASS2(SIDE,Rifleman): CLASS2(SIDE,Base) {
    @Role(Rifleman);
};
class CLASS2(SIDE,RiflemanCarabine): CLASS2(SIDE,Base) {
    @Role(Hidden);
};
