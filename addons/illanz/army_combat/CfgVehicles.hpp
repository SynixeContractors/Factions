class CfgVehicles {
    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "Desert",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Ship_CIWS",
            "Ship_BoxIR",
            "Ship_BoxARH",
            "Ship_Gun",
            "Ship_VLS",
            "Radar01",
            "SAM01",
        ],
    });

    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "France",
        "vehicles": [
            "Rooikat",
            "Rooikat_ERA",
            "Polaris",
            "Polaris_NoDoor",
            "Polaris_Titan",
            "Polaris_HMG",
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
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "Jagged",
        "vehicles": [
            "Fennek",
            "Fennek_HMG",
            "Fennek_GMG",
        ],
    });

    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "NATO",
        "vehicles": [
            "Ram",
            "Ram_Covered",
            "Ram_Comms",
            "Ram_Fuel",
            "Ram_HMG",
            "Ram_MMG",
            "Ram_AA",
            "Ram_RCWS",
            "Ram_M134",
            "Ram_MRL",
            "Ram_AT",
        ],
    });

    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "Sand",
        "vehicles": [
            "Ghosthawk",
            "Ghosthawk_M134",
            "Ghosthawk_Pylons",
            "Ghosthawk_Assault",
            "Ghosthawk_DAP",
            "Comanche",
            "Comanche_Pylons",
            "MD500E",
            "MD500E_Armed",
            {"class": "JAS39", "camo": "CamoGrey"},
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\wear\uniform.hpp"
        #include "..\wear\vest_army.hpp"
        #include "..\wear\helmet.hpp"
        #include "..\wear\facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Officer): CLASS(Base) {
        @Role(Officer);
        @Headgear({
            "": 1,
        });
        @Vests({
            "variants": {
                "synixe_mgp_vest_battle_belt_assaulter_mc": 1,
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
        #include "..\weapons\gl.hpp"
    };
    class CLASS(SquadLeader): CLASS(RiflemanCarabine) {
        @Role(SquadLeader);
        #include "..\weapons\pistol.hpp"
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
        #include "..\weapons\pdw.hpp"
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        #include "..\wear\pilot.hpp"
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "..\weapons\marksman.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Sniper): CLASS(Marksman) {
        @Role(Sniper);
        #include "..\weapons\sniper.hpp"
    };
};
