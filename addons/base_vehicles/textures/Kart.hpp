#define KART_COLOR(var1,var2,var3) \
class var1##_base { \
    displayName = QUOTE(##var2##); \
    textures[] = { \
        var3, \
        "", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa", \
    }; \
    decals[] = {1,2,3}; \
}; \
class var1##_fuel { \
    displayName = QUOTE(##var2## (Fuel)); \
    textures[] = { \
        var3, \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa", \
    }; \
    decals[] = {1,2,3}; \
}; \
class var1##_vrana { \
    displayName = QUOTE(##var2## (Vrana)); \
    textures[] = { \
        var3, \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa", \
    }; \
    decals[] = {1,2,3}; \
}; \
class var1##_redstone { \
    displayName = QUOTE(##var2## (Redstone)); \
    textures[] = { \
        var3, \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa", \
    }; \
    decals[] = {1,2,3}; \
}; \
class var1##_king { \
    displayName = QUOTE(##var2## (BluKing)); \
    textures[] = { \
        var3, \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa", \
        "\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa", \
    }; \
    decals[] = {1,2,3}; \
} \


class TextureSources {
    KART_COLOR(black,Black,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa");
    KART_COLOR(blue,Blue,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa");
    KART_COLOR(green,Green,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa");
    KART_COLOR(orange,Orange,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa");
    KART_COLOR(red,Red,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_red_CO.paa");
    KART_COLOR(white,White,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa");
    KART_COLOR(yellow,Yellow,"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa");
    class Fuel {
        displayName = "Dark Green (Fuel)";
        textures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
        decals[] = {1,2,3};
    };
    class Bluking {
        displayName = "Dark Blue (Bluking)";
        textures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
        decals[] = {1,2,3};
    };
    class Redstone {
        displayName = "Redstone";
        textures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
        decals[] = {1,2,3};
    };
    class Vrana {
        displayName = "Vrana";
        textures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
        decals[] = {1,2,3};
    };
};
