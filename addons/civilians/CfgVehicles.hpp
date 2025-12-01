class CfgVehicles {
    class GCLASS(Base_CIV);
    class CLASS(Base): GCLASS(Base_CIV) {
        faction = QCLASS(civilian);
        displayName = "Civilian Base Unit";
        @Templated();
        @Assigned(Civilian);
    };

    class CLASS(Base_Virelia): CLASS(Base) {
        faction = QCLASS(Virelia);
        displayName = "Virelia Civilian Base Unit";
        @Identity(Virelia);
    };

    #define NATION Virelia
    #include "CfgVehicles_T_Citizens.hpp"
    #undef NATION
};
