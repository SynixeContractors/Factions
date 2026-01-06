class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Khaybara Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_garrison.hpp"
        #include "../wear/helmet.hpp"
        #include "../wear/facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
        #include "../weapons/launcher.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/carabine.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(Autorifleman): CLASS(Rifleman) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
    };
    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);
        #include "../wear/worker.hpp"
    };
    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);
        #include "../wear/worker.hpp"
        #include "../weapons/pdw.hpp"
    };
};
