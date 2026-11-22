class CfgVehicles {
    #include "md500e.hpp"
    @Vehicles({
        "faction": "t4_blufor",
        "side": "BLUFOR",
        "camo": "Grey",
        "vehicles": [
            "MELB",
            "MELB_Rig",
            "MELB_Attack",
        ],
    });

    class PCLASS(ContractorOffice);
    class CLASS(HeliPilot): PCLASS(ContractorOffice) {
        displayName = "Contractor (Pilot, Helicopter)";
        @Headgear({
            "H_PilotHelmetHeli_Black_RF": 1,
            "H_PilotHelmetHeli_Blue_RF": 1,
            "H_PilotHelmetHeli_Green_RF": 1,
            "H_PilotHelmetHeli_Orange_RF": 1,
            "H_PilotHelmetHeli_Red_RF": 1,
            "H_PilotHelmetHeli_White_RF": 1,
            "H_PilotHelmetHeli_Yellow_RF": 1,
        });
    };

    class C_IDAP_supplyCrate_F;
    class CLASS(SupplyCrate): C_IDAP_supplyCrate_F {
        editorCategory = "SynixeContractors";
        editorSubCategory = "EdSubcat_Default";
        displayName = "Supply Box [Synixe]";
        hiddenSelectionsTextures[] = {QPATHTOF(vehicles\data\supplydrop.paa)};
        EMPTY_INVENTORY;
    };
};
