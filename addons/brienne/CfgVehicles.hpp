class CfgVehicles {
    class GCLASS(Base_BLUFOR);

    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t3_blufor);
        displayName = "Brienne Base";
        @Identity(Brienne);
        @Templated();
    };
};
