class CfgVehicles {
    @Vehicles({
        "faction": "t4_opfor",
        "side": "OPFOR",
        "camo": [
            "Guerilla_03",
            "Guerilla_06",
            "Guerilla_07",
            "Guerilla_08",
            "Guerilla_09",
            "Guerilla_10",
            "Guerilla_11",
            "Guerilla_12",
        ],
        "vehicles": [
            "M2_High",
            "M2_Low",
            "Offroad",
            "Offroad_Covered",
            "Offroad_Comms",
            "Offroad_Services",
            "Offroad_HMG",
            "Offroad_AT",
            "Offroad_Armored_HMG",
            "Offroad_Armored_AT",
            "Offroad_AA",
            "Offroad_Armored_AA",
        ],
    });

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Luban Liberation Front Deserters";
        editorSubcategory = QGCLASS(reserves);

        #include "..\wear\uniform.hpp"
        #include "..\..\luba\wear\vest_reserve.hpp"
        #include "..\..\luba\wear\helmet_reserve.hpp"
        #include "..\wear\facewear_deserters.hpp"
        @Assigned(Military);
    };
    class CLASS(Rifleman): CLASS(Base) {
        @Role(Rifleman);
        #include "..\..\luba\weapons\rifle_reserve.hpp"
        #include "..\..\luba\weapons\launcher_reserve.hpp"
        #include "..\..\luba\weapons\attachments_reserve.hpp"
    };
    class CLASS(RiflemanCarabine): CLASS(Base) {
        @Role(Hidden);
        #include "..\..\luba\weapons\rifle_reserve.hpp"
        #include "..\..\luba\weapons\attachments_reserve.hpp"
    };
    class CLASS(RiflemanBackpack): CLASS(RiflemanCarabine) {
        @Role(Hidden);
        #include "..\..\luba\wear\backpack.hpp"
    };
    class CLASS(TeamLeader): CLASS(RiflemanCarabine) {
        @Role(TeamLeader);
    };
    class CLASS(SquadLeader): CLASS(TeamLeader) {
        @Role(SquadLeader);
        #include "..\..\luba\weapons\gl.hpp"
    };
    class CLASS(Autorifleman): CLASS(RiflemanBackpack) {
        @Role(Autorifleman);
        #include "..\..\luba\weapons\lmg_reserve.hpp"
    };
    class CLASS(Machinegunner): CLASS(RiflemanBackpack) {
        @Role(Machinegunner);
        #include "..\..\luba\weapons\lmg_reserve.hpp"
    };
    class CLASS(Medic): CLASS(RiflemanBackpack) {
        @Role(Medic);
        #include "..\..\luba\wear\backpack_medic.hpp"
    };
    class CLASS(RiflemanMAT): CLASS(RiflemanBackpack) {
        @Role(RiflemanMAT);
        #include "..\..\luba\weapons\mat.hpp"
    };
    class CLASS(Engineer): CLASS(RiflemanBackpack) {
        @Role(Engineer);
        #include "..\..\luba\wear\engineer.hpp"
    };
    class CLASS(RadioOperator): CLASS(RiflemanCarabine) {
        @Role(RadioOperator);
        #include "..\..\luba\wear\backpack_radio.hpp"
    };
    class CLASS(Demolitions): CLASS(RiflemanBackpack) {
        @Role(Demolitions);
        #include "..\..\luba\wear\demo.hpp"
    };
    class CLASS(Crewman): CLASS(RiflemanCarabine) {
        @Role(Crewman);
        #include "..\..\luba\weapons\carabine.hpp"
    };
    class CLASS(Marksman): CLASS(RiflemanCarabine) {
        @Role(Marksman);
        #include "..\..\luba\weapons\marksman.hpp"
        #include "..\..\luba\weapons\pistol.hpp"
    };
};
