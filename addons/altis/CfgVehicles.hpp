class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_indep);
        displayName = FACTION_NAME;
        @Identity(Asarta);
        @Templated();
    };
};
