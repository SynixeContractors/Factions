class CfgVehicles {
    class GCLASS(Van_Cargo);
    class CLASS(Van): GCLASS(Van_Cargo) {
        SCOPE_DLC;
        faction = QCLASS(civilian);
        displayName = "Van (Cargo)";
        textureList[] = {"SwifD",1};
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
