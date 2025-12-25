class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS2(OPFOR,Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t4_opfor);
        displayName = "Looter Base";
        @Identity(Livonia);
        @Templated();
    };

    class GCLASS(Base_INDEP);
    class CLASS2(INDEP,Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "Looter Base";
        @Identity(Livonia);
        @Templated();
    };
};
