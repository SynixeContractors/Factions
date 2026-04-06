class CfgVehicles {
    class GCLASS(Base_BLUFOR);

    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t4_blufor);
        displayName = "Synixe Base";
        @Identity(Synixe);
        @Templated();
    };

    class CLASS(ContractorOffice): CLASS(Base) {
        displayName = "Contractor (Office)";
        scope = 2;
        scopeCurator = 2;
        @Uniforms({
            "variants": {
                "synixe_factions_synixe_Uniform_Contractor_Shirt": 1,
            },
        });
    };

    class CLASS(Unit_Contractor_Shirt);
    class CLASS(Contractor): CLASS(Unit_Contractor_Shirt) {
        scope = 2;
        scopeCurator = 2;
        faction = QPCLASS(t4_blufor);
        displayName = "Contractor (Player)";
        @Identity(Synixe);
    };
};
