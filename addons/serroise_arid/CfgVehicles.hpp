class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t2_opfor);
        displayName = "Serroise Base";
        @Identity(Serroise);
        @Templated();
    };
};
