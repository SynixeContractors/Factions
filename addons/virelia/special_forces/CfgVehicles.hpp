class CfgVehicles {
    #define TEMPLATE_FACTION QPCLASS(t1_blufor)
    #define TEMPLATE_SIDE 1
    #define TEMPLATE_CAMO Default
    #include "../../../templates/drones/MQ47.hpp"
    #undef TEMPLATE_CAMO
    #define TEMPLATE_CAMO AAF
    //FIXME: placeholder camo
    #include "../../../templates/drones/MQ9.hpp"

    class PCLASS(Base);
    class CLASS(Base): PCLASS(Base) {
        displayName = "Virelia Base Army SOF";
        editorSubcategory = QGCLASS(special_forces);
        @Assigned(Military);
    };
};
