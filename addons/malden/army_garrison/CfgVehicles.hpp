class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        #include "../wear/Uniform.hpp"
        #include "../wear/Headwear.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../wear/Vest_rifleman.hpp"
        #include "../weapons/Rifleman.hpp"

    };
    class CLASS(TeamLeader): CLASS(Base) {
        #include "../wear/Vest_grenadier.hpp"
        #include "../weapons/Gl.hpp"
        @Role(TeamLeader);
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "../wear/Vest_autorifleman.hpp"
        #include "../weapons/Lmg.hpp"
    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "../wear/Vest_medic.hpp"
        #include "../wear/Backpack_medic.hpp"
        #include "../weapons/Rifleman.hpp"
    };
    class CLASS(Worker): CLASS(Base) {
        @Role(Worker);
        #include "../wear/Worker.hpp"
        #include "../weapons/Pistol.hpp"
    };
    class CLASS(Maintainer): CLASS(Base) {
        @Role(Maintainer);
        #include "../wear/Worker.hpp"
        #include "../weapons/Pistol.hpp"
    };
};
