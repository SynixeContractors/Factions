class CfgVehicles {
    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Cdf",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Ship_CIWS",
            "Ship_BoxIR",
            "Ship_BoxARH",
            "Ship_Gun",
            "Ship_VLS",
            "BM2_AA",
            "Karatel",
            "Karatel_HMG",
            "Karatel_GMG",
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
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "green",
        "vehicles": [
            "Offroad",
            "Offroad_Covered",
            "Offroad_Comms",
            "Offroad_Services",
            "Offroad_HMG",
            "Offroad_AT",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "cdf_green",
        "vehicles": [
            "T100",
            "T100_Railgun",
            "BM2_IFV2",
            "BM2_IFV1",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "Green",
        "vehicles": [
            "Mi35",
        ],
    });

    @Vehicles({
        "faction": "t2_indep",
        "side": "INDEP",
        "camo": "OLIVE",
        "vehicles": [
            "PumaM",
            "PumaT",
            "Cougar_Armed",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Chernarus Base Army Combat";
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
                "Aegis_V_CarrierRigKBT_01_holster_olive_F": 1,
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
