class CfgVehicles {
    class GCLASS(Base_BLUFOR);

    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t1_blufor);
        displayName = "Virelia Base";
        @Identity(Virelia);
        @Templated();
    };
};
