class CLASS2(SIDE,Arid): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Arid);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "U_BG_Guerilla2_2": 1,
            "U_BG_Guerilla2_1": 1,
            "U_BG_Guerilla2_3": 1,
            "U_C_Poor_1": 1,
            "U_C_Poor_2": 1,
            "U_I_C_Soldier_Bandit_3_F": 1,
            "U_I_C_Soldier_Bandit_2_F": 1,
            "U_C_Uniform_Farmer_01_F": 1,
            "U_I_L_Uniform_01_tshirt_skull_F": 1,
            "U_I_L_Uniform_01_tshirt_sport_F": 1,
            "U_C_ConstructionCoverall_Black_F": 1,
            "U_C_ConstructionCoverall_Blue_F": 1,
            "U_C_ConstructionCoverall_Red_F": 1,
            "U_C_Mechanic_01_F": 1,
            "casual_plaid_black_khaki_uniform": 1,
            "casual_plaid_gray_khaki_uniform": 1,
            "casual_plaid_red_denim_uniform": 1,
            "casual_solid_navy_black_uniform": 1,
            "casual_solid_blue_sage_uniform": 1,
            "casual_solid_red_sage_uniform": 1,
            "casual_plaid_blue_khaki_uniform": 1,
        },
    });

    @Vests({
        "variants": {
            "": 3,
            "V_Pocketed_black_F": 1,
            "V_Pocketed_hunter_F": 1,
            "V_Pocketed_coyote_F": 1,
            "V_Pocketed_wdl_F": 1,
        },
        "packs": [
            "t4_standard",
        ],
    });

    @Headgear({
        "H_Bandanna_gry": 1,
        "H_Bandanna_cbr": 1,
        "H_Bandanna_surfer_blk": 1,
        "H_Bandanna_surfer": 1,
        "H_Booniehat_tan": 1,
        "H_Booniehat_blk": 1,
        "H_Booniehat_mgrn": 1,
        "H_Cap_blk": 1,
        "H_Cap_oli": 1,
        "H_Cap_red": 1,
        "H_Cap_blu": 1,
        "H_Shemag_olive": 1,
        "H_ShemagOpen_tan": 1,
        "H_HeadBandage_stained_F": 1,
        "H_HeadBandage_bloody_F": 1,
    });

    @Facewear({
        "G_Bandanna_blk": 1,
        "G_Bandanna_shades": 1,
        "G_Bandanna_sport": 1,
        "G_Shades_Black": 1,
        "G_Spectacles_Tinted": 1,
        "G_Bandanna_Skull1": 1,
        "G_Bandanna_Syndikat2": 1,
        "G_Bandanna_Skull2": 1,
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
class CLASS2(SIDE,Arid_Looter): CLASS2(SIDE,Arid) {
    @Role(Rifleman);

    #include "weapons/primary.hpp"
};

class CLASS2(SIDE,Arid_LooterPistol): CLASS2(SIDE,Arid) {
    @Role(Pistol);

    #include "weapons/secondary.hpp"
};

class CLASS2(SIDE,Arid_Hunter): CLASS2(SIDE,Arid) {
    @Role(Marksman);

    #include "weapons/hunter.hpp"
};
