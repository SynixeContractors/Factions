class CfgVehicles {
    @VehicleAssign(QPCLASS\(t2_blufor\),1)
    @Vehicle(puma_military,Karzeg_01,HeliPilot)
    @Vehicle(Pandur,Karzeg_01,Crewman)

    @Vehicle(MQ12,Sand)
    @Vehicle(fa181,Khaybaran,HeliPilot)
    @Vehicle(sam01,Desert)

    @Vehicle(m2,Default,Rifleman)
    @Vehicle(MQ47,Default)
    @Vehicle(ship,Default)

    @Vehicle(wildcat,KZG,HeliPilot)
    @Vehicle(hemtt,KZG,Rifleman)
    @Vehicle(offroad_civilian,KZG,Rifleman)

    @Vehicle(merkava,KZG_01,Crewman)
    @Vehicle(merkava_spg,KZG_01,Crewman)
    @Vehicle(namer,KZG_01,Crewman)
    @Vehicle(Leopard2,KZG_01,Crewman)

    @Vehicle(fennek,KZG_01,Rifleman)
    @Vehicle(polaris,KZG_01,Rifleman)
    @Vehicle(ram_civilian,KZG_01,Rifleman)
    @Vehicle(ram_armed,KZG_01,Rifleman)
    @Vehicle(ram_advanced,KZG_01,Rifleman)

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
        #include "../weapons/hat.hpp"
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
