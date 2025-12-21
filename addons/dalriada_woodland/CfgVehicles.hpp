class CfgVehicles {
    class GCLASS(Base_OPFOR);

    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t2_opfor);
        displayName = "Dal Riada Base";
        @Identity(DalRiada);
        @Templated();
    };
};
