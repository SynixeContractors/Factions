class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t3_indep);
        displayName = "Ngabiri Base";
        @Identity(Ngabiri);
        @Templated();
    };
};
