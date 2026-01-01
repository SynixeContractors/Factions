class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "Kunduz Base";
        @Identity(Kunduz);
        @Templated();
    };
};
