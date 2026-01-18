class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t4_indep);
        displayName = "Synixe Base";
        @Identity(Synixe);
        @Templated();
    };

    class CLASS(Unit_Contractor_Shirt);
    class CLASS(Contractor): CLASS(Unit_Contractor_Shirt) {
        scope = 2;
        scopeCurator = 2;
        faction = QPCLASS(t4_blufor);
        displayName = "Contractor (No Equipment)";
        @Identity(Synixe);
    };
};
