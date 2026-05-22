class CfgVehicles {
    class GCLASS(Base_BLUFOR);
    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t2_BLUFOR);
        displayName = "Courdane Base";
        @Identity(Courdane);
        @Templated();
    };
};
