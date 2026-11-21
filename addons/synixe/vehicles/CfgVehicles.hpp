class CfgVehicles {
    #include "md500e.hpp"
    #define TEMPLATE_FACTION QPCLASS(t4_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Grey
    #include "..\..\..\templates\helicopters\LittleBird.hpp"
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
        EMPTY_VEHICLE_INVENTORY;
    };
};
