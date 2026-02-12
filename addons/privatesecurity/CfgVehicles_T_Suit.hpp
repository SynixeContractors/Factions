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
            "Aegis_V_CarrierRigKBT_01_holster_black_F": 1,
            "": 5,
        },
        "packs": [
            "t2_standard",
        ],
    });
};
class CLASS2(SIDE,Suit_Rifleman_Pistol): CLASS2(SIDE,Suit) {
    @Role(Pistol);
    #include "weapons/pistol.hpp"
};
class CLASS2(SIDE,Suit_Rifleman_SMG): CLASS2(SIDE,Suit) {
    @Role(SMG);
    @Primary({
        "weapons": {
            "Aegis_SMG_Gepard_blk_F": {
                "magazinesUniform": {
                    "Aegis_40Rnd_9x21_Gepard_Mag_F": 2,
                },
                "loadedPrimary":"Aegis_20Rnd_9x21_Gepard_Mag_F",
            },
            "hgun_PDW2000_F": {
                "magazinesUniform": {
                    "30Rnd_9x21_Mag_SMG_02": 2,
                },
            },
            "SMG_05_F": {
                "magazinesUniform": {
                    "30Rnd_9x21_Mag_SMG_02": 2,
                },
            },
            "SMG_04_blk_F": {
                "magazinesUniform": {
                    "40Rnd_460x30_Mag_F": 2,
                },
                "loadedPrimary":"20Rnd_460x30_Mag_F",
            },
            "SMG_03C_black": {
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
