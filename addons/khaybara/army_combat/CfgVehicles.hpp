class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_blufor)
    #define TEMPLATE_SIDE 1
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Karzeg_01
    #include "../../../templates/apc/Pandur.hpp"
    #include "../../../templates/helicopters/Puma_Military.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO KZG_01
    #include "../../../templates/tanks/Leopard.hpp"
    #include "../../../templates/tanks/Merkava.hpp"
    #include "../../../templates/tanks/Merkava_SPG.hpp"
    #include "../../../templates/apc/Namer.hpp"
    #include "../../../templates/cars/Fennek.hpp"
    #include "../../../templates/cars/Polaris.hpp"
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO KZG
    #include "../../../templates/cars/Offroad_Civilian.hpp"
    #include "../../../templates/cars/HEMTT.hpp"
    #include "../../../templates/helicopters/Wildcat.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Khaybaran
    #include "../../../templates/planes/FA181.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Default
    #include "../../../templates/drones/MQ47.hpp"


    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Khaybara Base Army Combat";
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
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
        #include "../weapons/gl.hpp"
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
