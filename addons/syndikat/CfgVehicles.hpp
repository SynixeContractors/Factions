class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t4_opfor);
        displayName = "Syndikat Base";
        @Identity(Tanoan);
        @Templated();
    };
};
