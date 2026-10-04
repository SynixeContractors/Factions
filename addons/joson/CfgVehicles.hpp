class CfgVehicles {
    class GCLASS(Base_OPFOR);
    class CLASS(Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_opfor);
        displayName = "Base Unit";
        @Identity(Joson)
        @Templated();
        @Assigned(Military);
    };
    MAKE_FLAGPOLE(Joson,flag.paa);
};
