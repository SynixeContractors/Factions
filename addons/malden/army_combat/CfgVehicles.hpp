class CfgVehicles {
    @Vehicles({
        "faction": "t3_indep",
        "side": "INDEP",
        "camo": "Hex",
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Karatel",
            "Karatel_HMG",
            "Karatel_GMG",
            "Yak130",
        ],
    });

    @Vehicles({
        "faction": "t3_indep",
        "side": "INDEP",
        "camo": "Green",
        "vehicles": [
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
            "OrcaAR",
            "OrcaR",
            "OrcaArmed",
        ],
    });

    @Vehicles({
        "faction": "t3_indep",
        "side": "INDEP",
        "camo": "AAF_Olive",
        "vehicles": [
            "PumaM",
            "PumaT",
            "Cougar",
            "Cougar_Armed",
            "Cougar_Pylon",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Army Combat";
        editorSubcategory = QGCLASS(army_combat);

        #include "..\wear\Uniform.hpp"
        #include "..\wear\Helmet.hpp"
        #include "..\weapons\Attachments_army.hpp"
        #include "..\wear\Vest_rifleman.hpp"
        #include "..\weapons\Rifleman.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
    };
    class CLASS(TeamLeader): CLASS(Base) {
        @Role(TeamLeader);
        #include "..\weapons\Gl.hpp"
        #include "..\weapons\Pistol.hpp"
        #include "..\wear\Vest_grenadier.hpp"
    };
    class CLASS(SquadLeader): CLASS(Base) {
        @Role(SquadLeader);
        #include "..\weapons\Pistol.hpp"
        #include "..\wear\Vest_teamleader.hpp"
    };
    class CLASS(Marksman): CLASS(Base) {
        @Role(Marksman);
        #include "..\weapons\Marksman.hpp"
        #include "..\wear\Vest_marksman.hpp"
    };
    class CLASS(Autorifleman): CLASS(Base) {
        @Role(Autorifleman);
        #include "..\weapons\Lmg.hpp"
        #include "..\wear\Vest_autorifleman.hpp"
        #include "..\wear\Backpack.hpp"

    };
    class CLASS(Medic): CLASS(Base) {
        @Role(Medic);
        #include "..\wear\Vest_medic.hpp"
        #include "..\wear\Backpack_medic.hpp"
    };
    class CLASS(Engineer): CLASS(Base) {
        @Role(Engineer);
        #include "..\wear\Backpack_engineer.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(Base) {
        @Role(RiflemanMAT);
        #include "..\weapons\Mat.hpp"
        #include "..\wear\Backpack.hpp"
    };
    class CLASS(RadioOperator): CLASS(Base) {
        @Role(RadioOperator);
        #include "..\wear\Backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(Base) {
        @Role(Demolitions);
        #include "..\wear\Backpack_demo.hpp"
    };
    class CLASS(RiflemanAA): CLASS(Base) {
        @Role(RiflemanAA);
        #include "..\weapons\Aa.hpp"
        #include "..\wear\Backpack.hpp"
    };
    class CLASS(RiflemanHAT): CLASS(Base) {
        @Role(RiflemanHAT);
        #include "..\weapons\Hat.hpp"
        #include "..\wear\Backpack.hpp"
    };
    class CLASS(Machinegunner): CLASS(Base) {
        @Role(Machinegunner);
        #include "..\weapons\Mg.hpp"
        #include "..\wear\Backpack_machinegunner.hpp"
    };
    class CLASS(AsstMachinegunner): CLASS(Base) {
        @Role(AsstMachinegunner);
        #include "..\weapons\Rifleman.hpp"
        #include "..\wear\Backpack_machinegunner.hpp"
    };
    class CLASS(HeliPilot): CLASS(Base) {
        @Role(HeliPilot);
        @Headgear({
           "tacs_Helmet_PilotHeli_Tan": 1,
        });
        @Uniforms({
            "variants":{
                "tacs_Uniform_HeliPilotCoverall_Sand": 1,
            },
            "packs": [
                "rifleman_medical",
            ],
        });
        #include "..\weapons\Pdw.hpp"
    };
};
