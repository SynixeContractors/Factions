class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t2_indep)
    #define TEMPLATE_SIDE 2
    #include "../../../templates/statics/M2.hpp"
    #define TEMPLATE_CAMO Indep
    #include "../../../templates/cars/LUT_AA.hpp"
    #include "../../../templates/cars/LUT_Ammo.hpp"
    #include "../../../templates/cars/LUT_Cargo.hpp"
    #include "../../../templates/cars/LUT_Fuel.hpp"
    #include "../../../templates/cars/LUT_MRL.hpp"
    #include "../../../templates/cars/LUT_Medical.hpp"
    #include "../../../templates/cars/LUT_Repair.hpp"
    #include "../../../templates/cars/LUT_Transport.hpp"
    #include "../../../templates/cars/Fennek.hpp"
    #include "../../../templates/apc/BTR.hpp"
    #include "../../../templates/apc/BTR_SPG.hpp"
    #include "../../../templates/apc/Pandur.hpp"
    #include "../../../templates/apc/Warrior.hpp"
    #include "../../../templates/drones/Shahpar.hpp"
    #include "../../../templates/drones/UGV.hpp"
    #include "../../../templates/helicopters/Apache.hpp"
    #include "../../../templates/helicopters/Mohawk_Military.hpp"
    #include "../../../templates/helicopters/Orca_Military.hpp"
    #include "../../../templates/helicopters/Orca_Civilian.hpp"
    #include "../../../templates/helicopters/Wildcat.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Indep_01_green
    #include "../../../templates/tanks/Leopard.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Indep_01
    #include "../../../templates/tanks/Wiesel.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO AAF
    #include "../../../templates/helicopters/Puma_Military.hpp"
    #include "../../../templates/helicopters/Puma_Civilian.hpp"
    #include "../../../templates/drones/MQ9.hpp"
    #include "../../../templates/cars/Ram_Civilian.hpp"
    #include "../../../templates/cars/Ram_Advanced.hpp"
    #include "../../../templates/cars/Ram_Armed.hpp"
    #include "../../../templates/cars/Ram_Rocket.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO Green
    #include "../../../templates/statics/SAM02.hpp"
    #include "../../../templates/statics/Mk6.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "../wear/uniform.hpp"
        #include "../wear/vest_army.hpp"
        #include "../wear/helmet.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "../weapons/carabine.hpp"
        #include "../weapons/launcher.hpp"
        #include "../weapons/attachments_army.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "../weapons/rifle.hpp"
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
        @Headgear({
            "H_HelmetCrew_I": 1,
        });
        @Uniforms({
            "variants": {
                "U_Tank_green_F": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
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
