class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t4_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Guerilla_12
    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #include "../../../templates/cars/Offroad_Armed.hpp"
    #include "../../../templates/cars/Offroad_Armor.hpp"
    #include "../../../templates/cars/Offroad_AA.hpp"
    #include "../../../templates/cars/Offroad_Armor_AA.hpp"


    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Luban Base Army Reserve";
        editorSubcategory = QGCLASS(army_combat);

        #include "../wear/uniform.hpp"
        #include "../../luba/wear/vest_reserve.hpp"
        #include "../wear/helmet.hpp"
        #include "../wear/facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../../luba/weapons/rifle.hpp"
        #include "../../luba/weapons/launcher_reserve.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../../luba/weapons/carabine.hpp"
        #include "../../luba/weapons/attachments_reserve.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "../../luba/wear/backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
        #include "../../luba/weapons/gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "../../luba/weapons/lmg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "../../luba/wear/backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "../../luba/weapons/mat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "../../luba/wear/engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "../../luba/wear/backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "../../luba/wear/demo.hpp"
    };
    class CLASS(Crewman): CLASS(RiflemanCarabine) {
        @Role(Crewman);
        #include "../../luba/weapons/pdw.hpp"
    };
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);
        #include "../../luba/weapons/marksman.hpp"
        #include "../../luba/weapons/pistol.hpp"
    };
};
