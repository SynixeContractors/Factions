class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_opfor);
        displayName = "Mbakora Base";
        @Identity(Ngabiri);
        @Templated();
    };
};
