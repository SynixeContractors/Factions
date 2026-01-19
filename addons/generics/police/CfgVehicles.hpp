class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        faction = QCLASS(civilian);
        displayName = "Police Base Unit";
        @Templated();
    };
    @For(Identities)
        #define NATION $1
        class CLASS2(Base,NATION): CLASS(Base) {
            faction = QPCLASS(NATION);
            displayName = "$1 Police Base Unit";
            @Identity($1);
        };
        // tried to fix nested for loops in rhai but i was rewriting whole template code
        // so i gave up for 3x repeat
        #define SIDE OPFOR
        #define TEMPLATE_SIDE 0
        #include "CfgVehicles_T_Police.hpp"
        #undef SIDE
        #undef TEMPLATE_SIDE
        #define SIDE BLUFOR
        #define TEMPLATE_SIDE 1
        #include "CfgVehicles_T_Police.hpp"
        #undef SIDE
        #undef TEMPLATE_SIDE
        #define SIDE INDEP
        #define TEMPLATE_SIDE 2
        #include "CfgVehicles_T_Police.hpp"
        #undef SIDE
        #undef TEMPLATE_SIDE
        #undef NATION
    @EndFor
};
