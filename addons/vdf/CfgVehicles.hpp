class CfgVehicles {
    class GCLASS(Base_INDEP);

    class CLASS(Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t2_indep);
        displayName = "VDF Base";
        identityTypes[] = {
            "LanguageRUS_F",
            "Head_Euro",
            "Head_Enoch",
            "Head_NATO"
        };
        genericNames = "EnochMen";
        @Templated();
    };
};
