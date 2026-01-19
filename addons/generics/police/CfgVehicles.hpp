class CfgVehicles {
    class GCLASS(Base);
    class CLASS(Base): GCLASS(Base) {
        faction = QCLASS(civilian);
        displayName = "Police Base Unit";
        @Templated();
    };
    @For(Identities)
        class CLASS(Base_$1): CLASS(Base) {
            faction = QCLASS($1);
            displayName = "$1 Civilian Base Unit";
            @Identity($1);
        };
        #define NATION $1
        //tried to fix nested for loops in rhai but i was rewriting whole template code so i gave up
        #define SIDE BLUFOR
        #define TEMPLATE_SIDE 0
        #include "CfgVehicles_T_Police.hpp"
        #undef SIDE
        #undef TEMPLATE_SIDE
        #define SIDE OPFOR
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
