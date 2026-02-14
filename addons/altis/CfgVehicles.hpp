class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t2_indep);
        displayName = FACTION_NAME;
        @Identity(Altian);
        @Templated();
    };
};
