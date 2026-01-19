class CfgVehicles {
    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        faction = QCLASS(civilian);
        displayName = "Police Base Unit";
        @Templated();
    };
        #define NATION Calvane
        class CLASS2(Base,NATION): CLASS(Base) {
            faction = QPCLASS(NATION);
            displayName = "Calvane Police Base Unit";
            @Identity(Calvane);
        };
        //tried to fix nested for loops in rhai but i was rewriting whole template code so i gave up
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
};
