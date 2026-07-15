class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Brienne Base Army Garrison";
        editorSubcategory = QGCLASS(army_garrison);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_garrison.hpp"
        #include "../wear/helmet_recon.hpp"
        #include "../wear/facewear_recon.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
    };
    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);
        #include "../weapons/gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
        #include "../wear/backpack.hpp"
    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "../weapons/carbine.hpp"
        #include "../wear/backpack_medic.hpp"
        #include "../weapons/pistol.hpp"
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
