class CfgVehicles {
    #include "CfgVehicles_Vehicles.hpp"
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "National Police";
        editorSubcategory = QGCLASS(police);

        #include "../wear/uniform_police.hpp"
        #include "../wear/vest_garrison.hpp"
        #include "../wear/headwear_police.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle_old.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle_old.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(RiflemanSMG): CLASS(Base) {
        @Role(SMG);
        #include "../weapons/pdw.hpp"
    };
    class CLASS(RiflemanPistol): CLASS(Base) {
        @Role(Pistol);
        #include "../weapons/pistol.hpp"
    };

};
