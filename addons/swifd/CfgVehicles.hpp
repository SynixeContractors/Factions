class CfgVehicles {
    class Van_02_vehicle_base_F;
    class GCLASS(Van_Cargo): Van_02_vehicle_base_F {
        class TextureSources {
            class SwifD {
                displayName = "SwifD";
            };
        };
    };
    class CLASS(Van): GCLASS(Van_Cargo) {
        SCOPE_DLC;
        faction = QCLASS(civilian);
        displayName = "Van (Cargo)";
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
