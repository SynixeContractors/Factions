#define SUMMER_SHORTS_VEHICLE(var1,var2)\
class CLASS(summer_shorts_##var1##_blue): C_Man_casual_4_F {\
    uniformClass = QCLASS(summer_shorts_##var1##_blue);\
    hiddenSelectionsTextures[] = {\
        QPATHTOF(data\##var2##),\
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_2_co.paa"\
    };\
};\
class CLASS(summer_shorts_##var1##_green): C_Man_casual_4_F {\
    uniformClass = QCLASS(summer_shorts_##var1##_green);\
    hiddenSelectionsTextures[] = {\
        QPATHTOF(data\##var2##),\
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa"\
    };\
};\
class CLASS(summer_shorts_##var1##_black): C_Man_casual_4_F {\
    uniformClass = QCLASS(summer_shorts_##var1##_black);\
    hiddenSelectionsTextures[] = {\
        QPATHTOF(data\##var2##),\
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_2_co.paa"\
    };\
}\

class CfgVehicles {
    //Summer Clothes
    class C_Man_casual_4_F;
    class CLASS(summer_shorts_blue_blue): C_Man_casual_4_F {
        uniformClass = QCLASS(summer_shorts_blue_blue);
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa",
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_2_co.paa"
        };
    };
    class CLASS(summer_shorts_blue_green): C_Man_casual_4_F {
        uniformClass = QCLASS(summer_shorts_blue_green);
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa",
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa"
        };
    };
    class CLASS(summer_shorts_red_black): C_Man_casual_4_F {
        uniformClass = QCLASS(summer_shorts_red_black);
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa",
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_2_co.paa"
        };
    };
    class CLASS(summer_shorts_red_green): C_Man_casual_4_F {
        uniformClass = QCLASS(summer_shorts_red_green);
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa",
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_2_co.paa"
        };
    };
    class CLASS(summer_shorts_yellow_black): C_Man_casual_4_F {
        uniformClass = QCLASS(summer_shorts_yellow_black);
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa",
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_2_co.paa"
        };
    };
    class CLASS(summer_shorts_yellow_blue): C_Man_casual_4_F {
        uniformClass = QCLASS(summer_shorts_yellow_blue);
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa",
            "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa"
        };
    };
    //new ones
    SUMMER_SHORTS_VEHICLE(green,summer_shirt_green);
    SUMMER_SHORTS_VEHICLE(grey,summer_shirt_grey);
    SUMMER_SHORTS_VEHICLE(orange,summer_shirt_orange);
    SUMMER_SHORTS_VEHICLE(pink,summer_shirt_pink);
};
