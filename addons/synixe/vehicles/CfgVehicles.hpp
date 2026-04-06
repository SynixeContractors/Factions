class CfgVehicles {
    #include "air\md500e.hpp"
    #define TEMPLATE_FACTION QPCLASS(t4_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Black_US
    #include "../../../templates/helicopters/LittleBird.hpp"
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
};
