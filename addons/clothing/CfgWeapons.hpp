class CfgWeapons {
    class Uniform_Base;
    //Summer Clothes
    class U_C_Man_casual_4_F: Uniform_Base {
        class ItemInfo;
    };
    class CLASS(summer_shorts_blue_blue): U_C_Man_casual_4_F {
        displayName = "Summer Clothes (Sky, Shorts Blue)";
        class ItemInfo: ItemInfo {
            uniformClass = QPCLASS(summer_shorts_blue_blue);
        };
    };
    class CLASS(summer_shorts_blue_green): CLASS(summer_shorts_blue_blue) {
        displayName = "Summer Clothes (Sky, Shorts Green)";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(summer_shorts_blue_green);
        };
    };
    class CLASS(summer_shorts_red_black): U_C_Man_casual_4_F {
        displayName = "Summer Clothes (Red, Shorts Black)";
        // placeholder
        picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_6_F_ca.paa";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(summer_shorts_red_black);
        };
    };
    class CLASS(summer_shorts_red_green): CLASS(summer_shorts_red_black) {
        displayName = "Summer Clothes (Red, Shorts Green)";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(summer_shorts_red_green);
        };
    };
    class CLASS(summer_shorts_yellow_black): U_C_Man_casual_4_F {
        displayName = "Summer Clothes (Yellow, Shorts Black)";
        // placeholder
        picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_5_F_ca.paa";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(summer_shorts_yellow_black);
        };
    };
    class CLASS(summer_shorts_yellow_blue): CLASS(summer_shorts_yellow_black) {
        displayName = "Summer Clothes (Yellow, Shorts Blue)";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(summer_shorts_yellow_blue);
        };
    };
};
