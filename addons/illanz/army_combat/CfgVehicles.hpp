class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t3_opfor)
    #define TEMPLATE_SIDE 0
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Desert
    #include "../../../templates/statics/SAM01.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO France
    #include "../../../templates/tanks/Rooikat.hpp"
    #include "../../../templates/cars/Polaris.hpp"
    #include "../../../templates/cars/HEMTT.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Jagged
    #include "../../../templates/cars/Fennek.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO NATO
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"

    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Sand
    #include "../../../templates/helicopters/Ghosthawk.hpp"
    #include "../../../templates/helicopters/Ghosthawk_Armed.hpp"
    #include "../../../templates/helicopters/Comanche.hpp"
    #include "../../../templates/helicopters/MD500_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO CamoGrey
    #include "../../../templates/planes/JAS39.hpp"


    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_army.hpp"
        #include "../wear/helmet.hpp"
        #include "../wear/facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/rifle.hpp"
        #include "../weapons/launcher.hpp"
        #include "../weapons/attachments_army.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/carabine.hpp"
        #include "../weapons/attachments_army.hpp"
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
        #include "../weapons/pistol.hpp"
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
    class CLASS(RiflemanAA): CLASS(RiflemanBackpack) {
        @Role(RiflemanAA);
        #include "../weapons/aa.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanHAT);
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
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        #include "../wear/pilot.hpp"
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "../weapons/marksman.hpp"
        #include "../weapons/pistol.hpp"
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        #include "../weapons/sniper.hpp"
    };
};
