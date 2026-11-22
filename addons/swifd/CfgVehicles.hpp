class CfgVehicles {
    class C_Man_casual_3_F;

    class CLASS(man_worker): C_Man_casual_3_F {
        scope = 1;
        faction = QGCLASS(swifd);
        author = "Synixe Contractors";
        displayName = "Worker (Polo Pants)";
        uniformClass = QCLASS(uniform_casual);
        editorPreview = QPATHTOF(previews\man_worker.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\c_man_casual_co.paa)};
    };

    @For(Identities)
    @Vehicles({
        "faction": "QGCLASS(swifd)",
        "camo": "SwifD",
        "crew": "man_worker_$1",
        "properties": {
            "editorPreview": "QPATHTOF(previews\\van.jpg)",
            "editorSubcategory": "QGCLASS(generics_cars_$1)",
        },
        "vehicles": [
            {"class": "Van_Cargo", "name": "Van_$1"},
            {"class": "Van_Transport", "name": "Van_Transport_$1"},
        ],
    });

    class CLASS(man_worker_$1): CLASS(man_worker) {
        SCOPE_DLC;
        @Identity($1);
        editorSubcategory = QGCLASS(generics_$1);
    };
    @EndFor
};
