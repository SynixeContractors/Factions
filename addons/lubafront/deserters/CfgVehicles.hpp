class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t4_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO_LIST {\
         QUOTE(Guerilla_03),1,\
         QUOTE(Guerilla_06),1,\
         QUOTE(Guerilla_07),1,\
         QUOTE(Guerilla_08),1,\
         QUOTE(Guerilla_09),1,\
         QUOTE(Guerilla_10),1,\
         QUOTE(Guerilla_11),1,\
         QUOTE(Guerilla_12),1,\
    }
    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #include "../../../templates/cars/Offroad_Armed.hpp"
    #include "../../../templates/cars/Offroad_Armor.hpp"
    #include "../../../templates/cars/Offroad_AA.hpp"
    #include "../../../templates/cars/Offroad_Armor_AA.hpp"
    #undef TEMPLATE_CAMO_LIST

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Luban Liberation Front Deserters";
        editorSubcategory = QGCLASS(reserves);

        #include "../wear/uniform.hpp"
        #include "../../luba/wear/vest_reserve.hpp"
        #include "../../luba/wear/helmet_reserve.hpp"
        #include "../wear/facewear_deserters.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../../luba/weapons/rifle_reserve.hpp"
        #include "../../luba/weapons/launcher_reserve.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../../luba/weapons/rifle_reserve.hpp"
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
        #include "../../luba/weapons/lmg_reserve.hpp"
    };
    class CLASS(Machinegunner): CLASS(RiflemanBackpack) {
        @Role(Machinegunner);
        #include "../../luba/weapons/lmg_reserve.hpp"
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
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "../../luba/weapons/marksman.hpp"
        #include "../../luba/weapons/pistol.hpp"
    };
};
