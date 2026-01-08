class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "Synixe Base";
        @Identity(Synixe);
        @Templated();
    };
};
