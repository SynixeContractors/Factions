class CfgVehicles {
    @Vehicles({
        "faction": "t3_blufor",
        "side": "BLUFOR",
        "camo": "Green",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Mk6Mortar",
            "BM2_AA",
            "BM2_Unarmed",
            "BM2_IFV2",
            "BM2_IFV1",
        ],
    });

    @Vehicles({
        "faction": "t3_blufor",
        "side": "BLUFOR",
        "camo": "OLIVE",
        "vehicles": [
            "PumaM",
            "PumaT",
            "Cougar",
            "Cougar_Armed",
            "Cougar_Pylon",
            {"class": "Leopard2", "camo": "Olive_01_green"},
        ],
    });

    @Vehicles({
        "faction": "t3_blufor",
        "side": "BLUFOR",
        "camo": "Olive",
        "vehicles": [
            "Fennek",
            "Fennek_HMG",
            "Fennek_GMG",
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
        "faction": "t3_blufor",
        "side": "BLUFOR",
        "camo": "NATO_P",
        "vehicles": [
            "Ram_HMG",
            "Ram_MMG",
            "Ram",
            "Ram_Covered",
            "Ram_Comms",
            "Ram_Fuel",
            {"class": "MQ9", "camo": "France"},
            {"class": "JAS39", "camo": "CamoGrey"},
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Brienne Base Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\wear\uniform.hpp"
        #include "..\wear\vest_army.hpp"
        #include "..\wear\helmet.hpp"
        #include "..\wear\facewear_army.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\weapons\launcher_lite.hpp"
        #include "..\weapons\rifle.hpp"
    };
    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);
        #include "..\weapons\rifle.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);
        #include "..\weapons\gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "..\weapons\lmg.hpp"
        #include "..\weapons\pistol.hpp"
        #include "..\wear\backpack.hpp"
    };
    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);
        #include "..\weapons\mg.hpp"
        #include "..\weapons\pistol.hpp"
        #include "..\wear\backpack_mg.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);
        #include "..\weapons\rifle.hpp"
        #include "..\wear\backpack_mg.hpp"
    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "..\weapons\carbine.hpp"
        #include "..\wear\backpack_medic.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);
        #include "..\weapons\rifle.hpp"
        #include "..\weapons\mat.hpp"
        #include "..\wear\backpack.hpp"
    };
    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);
        #include "..\weapons\carbine.hpp"
        #include "..\weapons\aa.hpp"
        #include "..\wear\backpack.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);
        #include "..\weapons\carbine.hpp"
        #include "..\weapons\hat.hpp"
        #include "..\wear\backpack.hpp"
    };
    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);
        #include "..\weapons\marksman.hpp"
        #include "..\weapons\pistol.hpp"
    };
    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);
        #include "..\weapons\carbine.hpp"
        #include "..\wear\engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);
        #include "..\weapons\rifle.hpp"
        #include "..\wear\backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);
        #include "..\weapons\carbine.hpp"
        #include "..\wear\demo.hpp"
    };
    class CLASS(Crewman): CLASS(Base) {
        @Role(Crewman);

        @Headgear({
            "H_HelmetCrew_I" : 1,
        });

        @Uniforms({
            "variants" : {
                "Opf_U_O_S_Uniform_01_sweater_F" : 1,
            },
            "packs" : [
                "rifleman_medical",
            ],
        });

        @Vests({
            "variants" : {
                "V_TacVest_oli" : 1,
            },
            "packs" : [
                "t2_standard",
            ],
        });
        #include "..\weapons\pdw.hpp"
    };
    class CLASS(HeliPilot): CLASS(Crewman) {
        @Role(HeliPilot);
        #include "..\wear\pilot.hpp"
    };
};
