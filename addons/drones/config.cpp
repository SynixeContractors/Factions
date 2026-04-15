#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {
        @ForSides(OPFOR,BLUFOR,INDEP,CIV)
            QCLASS2(AL6,$LOWER),
            QCLASS2(AL6_Medical,$LOWER),
            QCLASS2(AP5,$LOWER),
            QCLASS2(AP5_Bomber,$LOWER),
            QCLASS2(AR2,$LOWER),
            QCLASS2(AR2_Bomber,$LOWER),
            QCLASS2(RC40_HE,$LOWER),
            QCLASS2(RC40_Scout,$LOWER),

            QCLASS2(CH3A,$LOWER),
            QCLASS2(MQ47,$LOWER),
            QCLASS2(MQ9,$LOWER),
            QCLASS2(Shahpar,$LOWER),

            QCLASS2(MQ12,$LOWER),

            QCLASS2(Radar01,$LOWER),
            QCLASS2(Radar02,$LOWER),
            QCLASS2(SAM01,$LOWER),
            QCLASS2(SAM02,$LOWER),
            QCLASS2(Ship_BoxARH,$LOWER),
            QCLASS2(Ship_BoxIR,$LOWER),
            QCLASS2(Ship_CIWS,$LOWER),

            QCLASS2(Ship_Gun,$LOWER),
            QCLASS2(Ship_VLS,$LOWER),
            QCLASS2(AMOS,$LOWER),

            QCLASS2(UGV,$LOWER),
            QCLASS2(UGV_RCWS,$LOWER),
        @EndForSides
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles",
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};


#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
