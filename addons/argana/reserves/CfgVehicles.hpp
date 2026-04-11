class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Reserve";
        editorSubcategory = QGCLASS(reserves);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_army.hpp"
        #include "../wear/helmet.hpp"
        #include "../wear/facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle_old.hpp"
        #include "../weapons/launcher.hpp"
        #include "../weapons/attachments_reserve.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle_old.hpp"
        #include "../weapons/attachments_reserve.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "../weapons/pistol.hpp"
        #include "../weapons/gl.hpp"
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
    };
    class CLASS(Machinegunner): CLASS(RiflemanCarabine) {
        @Role(Machinegunner);
        #include "../weapons/mg.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(RiflemanBackpack) {
        @Role(AsstMachinegunner);
        #include "../wear/backpack_mg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "../wear/backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "../weapons/mat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "../wear/engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "../wear/backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "../wear/demo.hpp"
    };
    class CLASS(Crewman): CLASS(RiflemanCarabine) {
        @Role(Crewman);
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
    };
};
