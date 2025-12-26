class CfgVehicles {
    class GCLASS(Base_INDEP);
    class CLASS2(INDEP,Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t2_indep);
        displayName = "Valmont Base";
        identityTypes[] = {
            "LanguageRUS_F",
            "Head_Euro",
            "Head_NATO"
        };
        genericNames = "RussianMen";
        @Templated();
    };

    class GCLASS(Base_OPFOR);
    class CLASS2(OPFOR,Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t2_opfor);
        displayName = "Valmont Base";
        identityTypes[] = {
            "LanguageRUS_F",
            "Head_Euro",
            "Head_NATO"
        };
        genericNames = "RussianMen";
        @Templated();
    };
};
