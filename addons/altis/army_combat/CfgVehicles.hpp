class CfgVehicles {
    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Indep",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "LUT_AA",
            "LUT_Ammo",
            "LUT_Cargo",
            "LUT_Flatbed",
            "LUT_Fuel",
            "LUT_MRL",
            "LUT_Medical",
            "LUT_Repair",
            "LUT_Transport",
            "LUT_TransportCovered",
            "Fennek",
            "Fennek_HMG",
            "Fennek_GMG",
            "BTR",
            "BTR_SPG",
            "Pandur",
            "Warrior",
            "Shahpar",
            "UGV",
            "UGV_RCWS",
            "Apache",
            "Mohawk",
            "OrcaAR",
            "OrcaR",
            "OrcaArmed",
            "Orca",
            "Wildcat",
            "Wildcat_Pylons",
            {"class": "Leopard2", "camo": "Indep_01_green"},
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Indep_01",
        "vehicles": [
            "Wiesel",
            "Wiesel_SAM",
            "Wiesel_ATGM",
            "Wiesel_Radar",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "AAF",
        "vehicles": [
            "PumaM",
            "PumaT",
            "Cougar",
            "Cougar_Armed",
            "Cougar_Pylon",
            "Puma",
            "PumaA",
            "Cougar_Rescue",
            "MQ9",
            "Ram",
            "Ram_Covered",
            "Ram_Comms",
            "Ram_Fuel",
            "Ram_AA",
            "Ram_RCWS",
            "Ram_M134",
            "Ram_MRL",
            "Ram_AT",
            "Ram_HMG",
            "Ram_MMG",
            "Ram_Rocket",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Green",
        "vehicles": [
            "Radar02",
            "SAM02",
            "Mk6Mortar",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\wear\uniform.hpp"
        #include "..\wear\vest_army.hpp"
        #include "..\wear\helmet.hpp"
        @Assigned(Military);
    };
    class CLASS(Officer): CLASS(Base) {
        @Role(Officer);
        @Uniforms({
            "variants": {
                "U_I_OfficerUniform": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        @Headgear({
            "H_Beret_AAF_01_F": 1,
        });
        @Vests({
            "variants": {
                "H_Beret_AAF_01_F": 1,
            },
        });
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\weapons\carabine.hpp"
        #include "..\weapons\launcher.hpp"
        #include "..\weapons\attachments_army.hpp"
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
