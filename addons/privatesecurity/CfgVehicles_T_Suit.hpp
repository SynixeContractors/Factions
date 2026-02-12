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
            "U_C_Uniform_Formal_01_blue_F": 1,
            "U_NikosAgedBody": 1,
            "U_C_Uniform_Formal_01_striped_F": 1,
            "U_C_Uniform_Formal_01_white_F": 1,
        },
        "packs": [
            "rifleman_medical",
        ],
    });
};
class CLASS2(SIDE,Suit_Rifleman_Pistol): CLASS2(SIDE,Suit) {
    @Role(Pistol);
    #include "weapons/pistol.hpp"
    @Vests({
        "variants": {
            "Aegis_V_CarrierRigKBT_01_holster_black_F": 1,
            "": 5,
        },
        "packs": [
            "t4_standard",
        ],
    });
};
class CLASS2(SIDE,Suit_Rifleman_SMG): CLASS2(SIDE,Suit) {
    @Role(SMG);
    @Primary({
        "weapons": {
            "Aegis_SMG_Gepard_blk_F": {
                "probability": 1,
                "magazinesUniform": {
                    "Aegis_40Rnd_9x21_Gepard_Mag_F": 2,
                },
                "loadedPrimary":"Aegis_20Rnd_9x21_Gepard_Mag_F",
            },
            "hgun_PDW2000_F": {
                "probability": 1,
                "magazinesUniform": {
                    "30Rnd_9x21_Mag_SMG_02": 2,
                },
            },
            "SMG_05_F": {
                "probability": 1,
                "magazinesUniform": {
                    "30Rnd_9x21_Mag_SMG_02": 2,
                },
            },
            "SMG_04_blk_F": {
                "probability": 1,
                "magazinesUniform": {
                    "40Rnd_460x30_Mag_F": 2,
                },
                "loadedPrimary":"20Rnd_460x30_Mag_F",
            },
            "SMG_03C_black": {
                "probability": 1,
                "magazinesUniform": {
                    "50Rnd_570x28_SMG_03": 1,
                },
            },
        },
        "optics": {
            "optic_Yorris": 1,
            "": 4,
        },
    });
};
