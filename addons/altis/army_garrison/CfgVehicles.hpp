class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_garrison.hpp"
        #include "../wear/headwear.hpp"
        @Primary({
            "pointers": {
                "saber_light_khaki_lxWS": 5,
                "": 2,
            },
        });
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
        #include "../weapons/launcher.hpp"

    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "../wear/backpack_medic.hpp"
    };
    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);
        #include "../wear/worker.hpp"
    };
    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);
        #include "../wear/worker.hpp"
        #include "../weapons/pistol.hpp"
    };
};
