class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t1_indep);
        displayName = "Drovak Base";
        @Identity(Drovak);
        @Templated();
    };
};
