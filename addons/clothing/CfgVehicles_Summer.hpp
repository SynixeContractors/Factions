#define SUMMER_SHORTS_VEHICLE(var1,var2)\
class CLASS(summer_shorts_##var1##_blue): C_Man_casual_4_F {\
    uniformClass = QCLASS(summer_shorts_##var1##_blue);\
    hiddenSelectionsTextures[] = {\
        ##var2##,\
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_2_co.paa"\
    };\
};\
class CLASS(summer_shorts_##var1##_green): C_Man_casual_4_F {\
    uniformClass = QCLASS(summer_shorts_##var1##_green);\
    hiddenSelectionsTextures[] = {\
        ##var2##,\
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa"\
    };\
};\
class CLASS(summer_shorts_##var1##_black): C_Man_casual_4_F {\
    uniformClass = QCLASS(summer_shorts_##var1##_black);\
    hiddenSelectionsTextures[] = {\
        ##var2##,\
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_2_co.paa"\
    };\
}\

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
class CLASS(summer_shorts_red_blue): C_Man_casual_4_F {
    uniformClass = QCLASS(summer_shorts_red_blue);
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
class CLASS(summer_shorts_yellow_green): C_Man_casual_4_F {
    uniformClass = QCLASS(summer_shorts_yellow_green);
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa",
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa"
    };
};
//new ones
SUMMER_SHORTS_VEHICLE(green,QPATHTOF(data\summer_shirt_green.paa));
SUMMER_SHORTS_VEHICLE(grey,QPATHTOF(data\summer_shirt_grey.paa));
SUMMER_SHORTS_VEHICLE(pink,QPATHTOF(data\summer_shirt_pink.paa));
SUMMER_SHORTS_VEHICLE(artist,"\A3\Missions_F_AoW\Data\Img\Textures\Uniforms\u_art_shirt_co.paa");
SUMMER_SHORTS_VEHICLE(peace,"lxws\characters_f_lxws\data\clothes\outfit_tshirt_peace_1_co.paa");
SUMMER_SHORTS_VEHICLE(robogeddon,"\A3\Characters_F_AoW\Uniforms\Data\U_C_ArtTShirt_01_v5_F_co.paa");
SUMMER_SHORTS_VEHICLE(greygoo,"\A3\Characters_F_AoW\Uniforms\Data\U_C_ArtTShirt_01_v6_F_co.paa");
