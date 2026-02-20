class CfgVehicles {
    #include "air\md500e.hpp"
    #define TEMPLATE_FACTION QPCLASS(t4_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Black_US
    #include "../../../templates/helicopters/LittleBird.hpp"
    class PCLASS(Contractor);
    class CLASS(HeliPilot): PCLASS(Contractor) {};
};
