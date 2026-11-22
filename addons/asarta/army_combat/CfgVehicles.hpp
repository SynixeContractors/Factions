class CfgVehicles {
    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": "takistan",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Mk6Mortar",
            "T100",
            "Otokar",
            "Otokar_HMG",
            "Otokar_RCWS",
            "BM2_IFV2",
            "BM2_IFV1",
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
            "LSV",
            "LSV_M134",
            "LSV_Metis",
            "Mi35",
            "Ka54",
            "L159",
            "Orca",
            "OrcaAR",
            "OrcaR",
            "OrcaArmed",
        ],
    });

    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": "Insurgent_06",
        "vehicles": [
            "Offroad",
            "Offroad_Covered",
            "Offroad_Comms",
            "Offroad_Services",
            "Offroad_HMG",
            "Offroad_AT",
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
            "H_Beret_CSAT_01_F": 1,
        });
        @Vests({
            "variants": {
                "Atlas_H_MilCap_nohs_semiarid": 1,
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
        #include "..\weapons\rifle.hpp"
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
