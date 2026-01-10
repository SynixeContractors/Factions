class CfgVehicles {
    class GCLASS(Base_BLUFOR);
    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t3_BLUFOR);
        displayName = "Karskoya Base";
        @Identity(Drovak);
        @Templated();
    };
};
