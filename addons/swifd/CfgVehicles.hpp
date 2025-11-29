class CfgVehicles {
    class GCLASS(VanCargo);
    class CLASS(van): GCLASS(VanCargo) {
        SCOPE_DLC;
        faction = QCLASS(civilian);
        displayName = "Van (Cargo)";
        hiddenSelectionsTextures[] = {"\a3\soft_f_orange\van_02\data\van_body_Armazon_CO.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
        textureList[] = {};
        crew = QCLASS(man_casual);
        typicalCargo[] = {QCLASS(man_casual)};
        editorPreview = QPATHTOF(previews\van.jpg);
    };

    class C_Man_casual_3_F;
    class CLASS(man_casual): C_Man_casual_3_F {
        SCOPE_DLC;
        faction = QCLASS(civilian);
        author = "Synixe Contractors";
        displayName = "Casual Clothes (SwifD)";
        uniformClass = QCLASS(uniform_casual);
        editorPreview = QPATHTOF(previews\man_casual.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\c_man_casual_co.paa)};
    };
};
