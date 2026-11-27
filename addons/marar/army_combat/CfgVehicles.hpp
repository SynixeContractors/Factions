class CfgVehicles {
    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "Sand",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Mk6Mortar",
        ],
    });

    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "Marar",
        "vehicles": [
            "LUT_AA",
            "LUT_Ammo",
            "LUT_Cargo",
            "LUT_Flatbed",
            "LUT_Fuel",
            "LUT_Medical",
            "LUT_MRL",
            "LUT_Repair",
            "LUT_Transport",
            "LUT_TransportCovered",
            "Badger",
            "Badger_Command",
            "Badger_Mortar",
            "Badger_ATGM",
            "Badger_Unarmed",
            "MATV",
            "MATV_HMG",
            "MATV_GMG",
            "Orca",
            "OrcaAR",
            "OrcaR",
            "OrcaArmed",
            "Apache"
        ],
    });

    @Vehicles({
        "faction": "t3_opfor",
        "side": "OPFOR",
        "camo": "Tan",
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
            "Ram_Rocket",
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
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\weapons\carabine.hpp"
        #include "..\weapons\launcher.hpp"
        #include "..\weapons\attachments_army.hpp"
    };
    class CLASS(Officer): CLASS(Base) {
        @Role(Officer);
        @Uniforms({
            "variants": {
                "Atlas_U_B_M_CombatUniform_des": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Headgear({
            "JCA_H_Beret_01_sand_F": 1,
        });
        @Vests({
            "variants": {
                "JCA_V_CarrierRigKBT_01_holster_sand_F": 1,
            },
        });
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\weapons\rifle.hpp"
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
        #include "..\weapons\rifle.hpp"
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
    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);
        #include "..\weapons\pdw.hpp"
        #include "..\wear\tanker.hpp"
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
