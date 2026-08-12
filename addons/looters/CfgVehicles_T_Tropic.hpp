class CLASS2(SIDE,Tropic): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Tropic);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "U_I_C_Soldier_Bandit_1_F": 1,
            "U_I_C_Soldier_Bandit_2_F": 1,
            "U_I_C_Soldier_Bandit_3_F": 1,
            "U_I_C_Soldier_Bandit_4_F": 1,
            "U_I_C_Soldier_Bandit_5_F": 1,
            "U_C_man_sport_3_F": 1,
            "U_C_man_sport_2_F": 1,
            "U_C_Man_casual_6_F": 1,
            "U_C_Man_casual_4_F": 1,
            "U_C_Man_casual_5_F": 1,
            "U_I_C_Soldier_Para_5_F": 1,
            "U_C_Poor_1": 1,
            "U_C_Poor_2": 1,
            "U_C_Uniform_Farmer_01_F": 1,
            "U_C_Mechanic_01_F": 1,
            "Opf_U_I_I_Uniform_01_tshirt_black_F": 1,
        },
    });

    @Vests({
        "variants": {
            "": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "": 1,
        "H_HeadBandage_stained_F": 1,
        "H_HeadBandage_bloody_F": 1,
        "H_Booniehat_blk": 1,
        "H_Booniehat_mgrn": 1,
        "H_Bandanna_gry": 1,
        "H_Bandanna_blu": 1,
        "H_Bandanna_khk": 1,
        "H_Bandanna_surfer_blk": 1,
        "H_Bandanna_surfer": 1,
        "H_Cap_blu": 1,
        "H_Cap_blk": 1,
        "H_Cap_oli": 1,
        "H_Cap_red": 1,
    });

    @Facewear({
        "": 1,
        "G_Shades_Black": 1,
        "G_Spectacles_Tinted": 1,
    });

    @Backpacks({
        "variants": {
            "B_AssaultPack_blk": 1,
            "B_AssaultPack_rgr": 1,
            "B_FieldPack_blk": 1,
            "B_FieldPack_khk": 1,
            "B_TacticalPack_blk": 1,
            "B_TacticalPack_oli": 1,
            "B_CivilianBackpack_01_Everyday_Astra_F": 1,
            "B_CivilianBackpack_01_Everyday_Black_F": 1,
            "B_CivilianBackpack_01_Everyday_Vrana_F": 1,
            "B_CivilianBackpack_01_Sport_Blue_F": 1,
            "B_CivilianBackpack_01_Sport_Red_F": 1,
            "B_DuffleBag_MTP_RF": 1,
            "B_DuffleBag_Black_RF": 1,
            "B_DuffleBag_Blue_RF": 1,
            "B_DuffleBag_Sand_RF": 1,
            "B_DuffleBag_Olive_RF": 1,
            "B_LegStrapBag_black_F": 1,
            "B_LegStrapBag_coyote_F": 1,
            "B_LegStrapBag_olive_F": 1,
            "B_Messenger_Black_F": 1,
            "B_Messenger_Coyote_F": 1,
            "B_Messenger_Gray_F": 1,
            "B_Messenger_Olive_F": 1,
        },
    });
};
class CLASS2(SIDE,Tropic_Looter): CLASS2(SIDE,Tropic) {
    @Role(Rifleman);

    #include "weapons/primary.hpp"
};

class CLASS2(SIDE,Tropic_LooterPistol): CLASS2(SIDE,Tropic) {
    @Role(Pistol);

    #include "weapons/secondary.hpp"
};

class CLASS2(SIDE,Tropic_Hunter): CLASS2(SIDE,Tropic) {
    @Role(Marksman);

    #include "weapons/hunter.hpp"
};
