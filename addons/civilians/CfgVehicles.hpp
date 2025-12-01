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
    class CLASS(Base_Calvane): CLASS(Base) {
        faction = QCLASS(Calvane);
        displayName = "Calvane Civilian Base Unit";
        @Identity(Calvane);
    };
    class CLASS(Base_Drovak): CLASS(Base) {
        faction = QCLASS(Drovak);
        displayName = "Drovak Civilian Base Unit";
        @Identity(Drovak);
    };
    class CLASS(Base_Livonia): CLASS(Base) {
        faction = QCLASS(Livonia);
        displayName = "Livonia Civilian Base Unit";
        @Identity(Livonia);
    };

    class GCLASS(Motorboat);

    #define NATION Virelia
    #include "CfgVehicles_T_CitizensUnits.hpp"
    #include "CfgVehicles_T_CitizensVehicles.hpp"
    #undef NATION

    #define NATION Calvane
    #include "CfgVehicles_T_CitizensUnits.hpp"
    #include "CfgVehicles_T_CitizensVehicles.hpp"
    #undef NATION

    #define NATION Drovak
    #include "CfgVehicles_T_CitizensUnits.hpp"
    #include "CfgVehicles_T_CitizensVehicles.hpp"
    #undef NATION

    #define NATION Livonia
    #include "CfgVehicles_T_CitizensUnits.hpp"
    #include "CfgVehicles_T_CitizensVehicles.hpp"
    #undef NATION
};
