class CLASS2(SIDE,Suit): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Security_Suit);
    faction = FACTION;

    @Uniforms({
        "variants": {
            "U_C_FormalSuit_01_black_F": 1,
            "U_C_FormalSuit_01_blue_F": 1,
            "U_C_FormalSuit_01_gray_F": 1,
            "U_C_FormalSuit_01_khaki_F": 1,
            "U_C_FormalSuit_01_tshirt_black_F": 1,
            "U_C_FormalSuit_01_tshirt_gray_F": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });
    @Vests({
        "variants": {
            "V_TacVest_blk_POLICE" : 1,
        },
        "packs": [
            "t2_standard",
        ],
    });
    @Primary({
        "optics": {
            "": 4,
            "optic_r1_high_lxWS": 1,
            "Aegis_optic_ICO": 1,
            "optic_Holosight_smg_blk_F": 1,
        },
    });
};
class CLASS2(SIDE,Suit_Rifleman_Pistol): CLASS2(SIDE,Suit) {
    @Role(Pistol);
    #include "weapons/pistol.hpp"
};
class CLASS2(SIDE,Suit_Rifleman_SMG): CLASS2(SIDE,Suit) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,Suit_Rifleman_556): CLASS2(SIDE,Suit) {
    @Role(Rifleman);
    #include "weapons/556.hpp"
};
class CLASS2(SIDE,Suit_Rifleman_545): CLASS2(SIDE,Suit) {
    @Role(Rifleman);
    #include "weapons/556.hpp"
};
class CLASS2(SIDE,Suit_Rifleman_762): CLASS2(SIDE,Suit) {
    @Role(Rifleman);
    #include "weapons/556.hpp"
};
class CLASS2(SIDE,Suit_Rifleman_65): CLASS2(SIDE,Suit) {
    @Role(Rifleman);
    #include "weapons/556.hpp"
};
