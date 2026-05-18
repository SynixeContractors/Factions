class CLASS2(SIDE,Suit): CLASS2(Base,NATION) {
    side = TEMPLATE_SIDE;
    editorSubcategory = QCLASS2(NATION,Professionals_Suit);
    faction = FACTION;

    #include "wear/suit.hpp"
    #include "wear/headwear_suit.hpp"
    #include "weapons/pistol.hpp"

    @Vests({
    "variants": {
        "Aegis_V_CarrierRigKBT_01_holster_black_F": 1,
    },
    "packs": [
        "t4_standard",
    ],
});
};
class CLASS2(SIDE,Suit_Rifleman_Pistol): CLASS2(SIDE,Suit) {
    @Role(Pistol);
};
class CLASS2(SIDE,Suit_Rifleman_SMG): CLASS2(SIDE,Suit) {
    @Role(SMG);
    @Primary({
        "weapons": {
            "JCA_smg_MP5_FL_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "JCA_30Rnd_9x19_MP5_FMJ_Mag": 3,
                },
            },
            "SMG_04_blk_F": {
                "probability": 1,
                "magazinesVest": {
                    "40Rnd_460x30_Mag_F": 3,
                },
            },
            "SMG_03C_TR_black": {
                "probability": 1,
                "magazinesVest": {
                    "50Rnd_570x28_SMG_03": 2,
                },
            },
            "arifle_AKSM_F": {
                "probability": 1,
                "magazinesVest": {
                    "30Rnd_545x39_Black_Mag_F": 2,
                },
                "loadedPrimary":"Aegis_45Rnd_545x39_Mag_Green_F"
            },
            "JCA_arifle_HK437_VFG_black_F": {
                "probability": 1,
                "magazinesVest": {
                    "JCA_30Rnd_300BLK_EMAG": 3,
                },
            },
        },
        "optics": {
            "": 2,
            "JCA_optic_IHO_black": 1,
            "JCA_optic_MROS_black": 1,
        },
    });
};
