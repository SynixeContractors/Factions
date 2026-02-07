class CfgVehicles {
    class GCLASS(Van_Cargo);
    class C_Man_casual_3_F;

    @For(Identities)
    class CLASS(Van_$1): GCLASS(Van_Cargo) {
        SCOPE_DLC;
        faction = QGCLASS(swifd);
        displayName = "Van (Cargo)";
        textureList[] = {"SwifD",1};
        crew = QCLASS(man_worker_$1);
        typicalCargo[] = {QCLASS(man_worker_$1)};
        editorPreview = QPATHTOF(previews\van.jpg);
        editorSubcategory = QGCLASS(generics_$1_cars);
    };

    class CLASS(man_worker_$1): C_Man_casual_3_F {
        SCOPE_DLC;
        @Identity($1);
        faction = QGCLASS(swifd);
        author = "Synixe Contractors";
        displayName = "Worker (Polo Pants)";
        uniformClass = QCLASS(uniform_casual);
        editorPreview = QPATHTOF(previews\man_worker.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\c_man_casual_co.paa)};
        editorSubcategory = QGCLASS(generics_$1);
    };
    @EndFor
};
