class CfgVehicles {
    @Vehicles({
        "faction": "t3_indep",
        "side": "INDEP",
        "camo": "Desert",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "LSV",
            "LSV_M134",
            "LSV_Metis",
        ],
    });

    @Vehicles({
        "faction": "t3_indep",
        "side": "INDEP",
        "camo": "Luba",
        "vehicles": [
            "HEMTT",
            "HEMTT_Cargo",
            "HEMTT_Flatbed",
            "HEMTT_Repair",
            "HEMTT_Container",
            "HEMTT_Bench",
            "HEMTT_Covered",
            "HEMTT_Medical",
            "HEMTT_Fuel",
            "HEMTT_Ammo",
            "HEMTT_FireTruck",
        ],
    });

    @Vehicles({
        "faction": "t3_indep",
        "side": "INDEP",
        "camo": "Guerrilla_04",
        "vehicles": [
            "BTR",
            "BTR_IFV",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Luban Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\wear\uniform.hpp"
        #include "..\wear\vest_army.hpp"
        #include "..\wear\helmet.hpp"
        @Assigned(Military);
    };
    class CLASS(Officer): CLASS(Base) {
        @Role(Officer);
        @Headgear({
            "H_Beret_blk_POLICE": 1,
        });
        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_holster_sand_F": 1,
            },
        });
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\weapons\rifle.hpp"
        #include "..\weapons\launcher.hpp"
        #include "..\weapons\attachments_army.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\weapons\carabine.hpp"
        #include "..\weapons\attachments_army.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "..\wear\backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
        #include "..\weapons\gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "..\weapons\lmg.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Machinegunner): CLASS(RiflemanCarabine) {
        @Role(Machinegunner);
        #include "..\weapons\mg.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(RiflemanBackpack) {
        @Role(AsstMachinegunner);
        #include "..\wear\backpack_mg.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "..\wear\backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "..\weapons\mat.hpp"
    };
    class CLASS(RiflemanAA): CLASS(RiflemanBackpack) {
        @Role(RiflemanAA);
        #include "..\weapons\aa.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanHAT);
        #include "..\weapons\hat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "..\wear\engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "..\wear\backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "..\wear\demo.hpp"
    };
    class CLASS(Crewman): CLASS(RiflemanCarabine) {
        @Role(Crewman);
        #include "..\weapons\carabine.hpp"
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        #include "..\wear\pilot.hpp"
    };
    class CLASS(Marksman): CLASS(Rifleman) {
        @Role(Marksman);
        #include "..\weapons\marksman.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        #include "..\weapons\sniper.hpp"
    };
};
