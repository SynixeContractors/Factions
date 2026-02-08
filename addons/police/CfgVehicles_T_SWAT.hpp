class CLASS2(SIDE,SWAT): CLASS2(SIDE,Policeman) {
    @Role(Hidden);
    editorSubcategory = QCLASS2(NATION,SWAT);
    faction = FACTION;
    @Headgear({
        "H_PASGT_basic_blue_F": 1,
    });
    @Vests({
        "variants" : {
            "V_TacVest_blk_POLICE" : 1,
        },
        "packs" : [
            "t2_standard",
        ],
    });
};
class CLASS2(SIDE,SWATBreacher): CLASS2(SIDE,SWAT) {
    @Role(Breacher);
    #include "weapons/shotgun.hpp"
};
class CLASS2(SIDE,SWATSMG): CLASS2(SIDE,SWAT) {
    @Role(SMG);
    #include "weapons/smg.hpp"
};
class CLASS2(SIDE,SWATRifle): CLASS2(SIDE,SWAT) {
    @Role(Rifleman);
    #include "weapons/rifle.hpp"
};
class CLASS2(SIDE,SWATDemo): CLASS2(SIDE,SWAT) {
    @Role(Demolitions);
    #include "weapons/smg.hpp"
    @Headgear({
        "H_HelmetHeavy_Black_RF": 1,
    });
    @Vests({
        "variants" : {
            "V_EOD_blue_F" : 1,
        },
        "packs" : [
            "t2_standard",
        ],
    });
};
class CLASS2(SIDE,SWATSniper): CLASS2(SIDE,Policeman) {
    //police snipers are usually not kitted up in tactical gear
    @Role(Sniper);
    @Primary({
        "weapons": {
            "srifle_h6_blk_rf": {
                "probability": 1,
                "magazinesVest": {
                    "10Rnd_556x45_AP_Stanag_green_RF": 8,
                },
            },
        },
        "optics": {
            "optic_DMS": 1,
        },
    });
};
