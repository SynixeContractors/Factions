class CLASS2(SIDE,Desert): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Desert);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "U_lxWS_Djella_03_Green": 1,
            "U_lxWS_Djella_02_Brown": 1,
            "U_lxWS_Djella_02_Grey": 1,
            "U_lxWS_Djella_02_Sand": 1,
            "Atlas_U_C_CommonerJacket_01_blue_F": 1,
            "Atlas_U_C_CommonerJacket_01_grey_F": 1,
            "Atlas_U_C_CommonerJacket_01_marroon_F": 1,
            "U_C_Poor_1": 1,
            "U_C_Poor_2": 1,
            "U_BG_Guerilla3_2": 1,
            "U_I_C_Soldier_Bandit_2_F": 1,
            "U_C_Mechanic_01_F": 1,
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
        "H_Shemag_khk": 1,
        "H_Shemag_olive": 1,
        "H_ShemagOpen_tan": 1,
        "H_ShemagOpen_khk": 1,
        "H_Shemag_blk": 1,
        "H_Shemag_red": 1,
        "lxWS_H_turban_03_black": 1,
        "lxWS_H_turban_03_sand": 1,
        "lxWS_H_turban_03_green": 1,
        "lxWS_H_turban_03_gray": 1,
        "H_HeadBandage_stained_F": 1,
        "H_HeadBandage_bloody_F": 1,
        "H_Hat_Pakol_brn_F": 1,
        "H_Hat_Pakol_gry_F": 1,
        "H_Hat_Pakol_tan_F": 1,
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
class CLASS2(SIDE,Desert_Looter): CLASS2(SIDE,Desert) {
    @Role(Rifleman);

    #include "weapons/primary.hpp"
};

class CLASS2(SIDE,Desert_LooterPistol): CLASS2(SIDE,Desert) {
    @Role(Pistol);

    #include "weapons/secondary.hpp"
};

class CLASS2(SIDE,Desert_Hunter): CLASS2(SIDE,Desert) {
    @Role(Marksman);

    #include "weapons/hunter.hpp"
};
