#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(ADDON,SUBCOMPONENT) {
        name = QUOTE(DOUBLES(COMPONENT,SUBCOMPONENT));
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_factions_base_vehicles"
        };
        author = "Synixe Contractors";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    @For(Identities)
    class PCLASS(DOUBLES(Base,$1));
    @EndFor
    @ForSides(OPFOR,BLUFOR,INDEP)
    #define TEMPLATE_SIDE $SIDE
    #define SIDE DOUBLES(NATION,$UPPER)
    #define FACTION QPCLASS($LOWER)
        @For(Identities)
        #define NATION $1
        #include "CfgVehicles_T_Units.hpp"
        #undef NATION
        @EndFor
    #undef FACTION
    #undef SIDE
    #undef TEMPLATE_SIDE
    @EndForSides
};
