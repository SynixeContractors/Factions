class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS2(OPFOR,Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t4_opfor);
        displayName = "DYM Base";
        @Identity(Livonia);
        @Templated();
    };

    class GCLASS(Base_INDEP);
    class CLASS2(INDEP,Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "DYM Base";
        @Identity(Livonia);
        @Templated();
    };

    class GCLASS(Base_BLUFOR);
    class CLASS2(BLUFOR,Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t4_BLUFOR);
        displayName = "DYM Base";
        @Identity(Livonia);
        @Templated();
    };
};
