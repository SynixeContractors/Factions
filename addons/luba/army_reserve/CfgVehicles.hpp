class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Desert
    #include "../../../templates/cars/Offroad_Civilian.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Luban Base Army Reserve";
        editorSubcategory = QGCLASS(army_combat);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_reserve.hpp"
        #include "../wear/helmet.hpp"
        #include "../wear/facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
        #include "../weapons/launcher_reserve.hpp"
        #include "../weapons/attachments_reserve.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/carabine.hpp"
        #include "../weapons/attachments_reserve.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "../weapons/pistol.hpp"
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
        #include "../weapons/gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../weapons/lmg.hpp"
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
        #include "../weapons/pdw.hpp"
    };
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);
        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
    };
};
