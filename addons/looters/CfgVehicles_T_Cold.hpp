class CLASS2(SIDE,Cold): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Looters_Cold);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "eou_gorka_15": 1,
            "eou_gorka_13": 1,
            "eou_gorka_14": 1,
            "U_O_R_Gorka_01_black_F": 1,
            "eou_gorka_32": 1,
            "eou_gorka_25": 1,
            "eou_gorka_31": 1,
            "U_C_PilotJacket_black_RF": 1,
            "U_C_PilotJacket_brown_RF": 1,
            "U_C_PilotJacket_lbrown_RF": 1,
            "eou_gorka_7": 1,
            "eou_gorka_1": 1,
            "eou_gorka_22": 1,
            "eou_gorka_6": 1,
            "eou_gorka_34": 1,
            "eou_gorka_12": 1,
            "eou_gorka_9": 1,
        },
    });

    @Vests({
        "variants": {
            "": 5,
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
        "": 1,
        "H_Watchcap_cbr": 1,
        "H_Watchcap_camo": 1,
        "H_Watchcap_khk": 1,
        "H_Watchcap_sgg": 1,
        "H_Watchcap_black_hsless": 1,
        "H_Watchcap_hunter_hsless": 1,
        "H_Booniehat_black": 1,
        "H_Booniehat_hunter": 1,
        "H_Booniehat_oli": 1,
    });

    @Facewear({
        "": 1,
        "G_Bandanna_blk": 1,
        "G_Bandanna_shades": 1,
        "G_Bandanna_sport": 1,
        "G_Shades_Black": 1,
        "G_Spectacles_Tinted": 1,
        "G_Bandanna_Skull1": 1,
        "G_Bandanna_Syndikat2": 1,
        "G_Bandanna_Skull2": 1,
        "G_Balaclava_blk": 1,
        "G_Balaclava_Flecktarn": 1,
        "G_Balaclava_oli": 1,
        "G_Balaclava_Tropentarn": 1,
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
class CLASS2(SIDE,Cold_Looter): CLASS2(SIDE,Cold) {
    @Role(Rifleman);

    #include "weapons/primary.hpp"
};

class CLASS2(SIDE,Cold_LooterPistol): CLASS2(SIDE,Cold) {
    @Role(Pistol);

    #include "weapons/secondary.hpp"
};

class CLASS2(SIDE,Cold_Hunter): CLASS2(SIDE,Cold) {
    @Role(Marksman);

    #include "weapons/hunter.hpp"
};
