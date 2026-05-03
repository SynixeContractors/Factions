class CfgVehicles {
    class GCLASS(Base_INDEP);
    class CLASS2(INDEP,Base): GCLASS(Base_INDEP) {
        faction = QCLASS(t3_indep);
        displayName = "ION Base";
        identityTypes[] = {
            "LanguageENGB_F",
            "LanguageENG_F",
            "Head_Euro",
            "Head_NATO"
        };
        genericNames = "NATOMen";
        @Templated();
    };

    class GCLASS(Base_OPFOR);
    class CLASS2(OPFOR,Base): GCLASS(Base_OPFOR) {
        faction = QCLASS(t3_opfor);
        displayName = "ION Base";
        identityTypes[] = {
            "LanguageENGB_F",
            "LanguageENG_F",
            "Head_Euro",
            "Head_NATO"
        };
        genericNames = "NATOMen";
        @Templated();
    };

    class GCLASS(Base_BLUFOR);
    class CLASS2(BLUFOR,Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t3_blufor);
        displayName = "ION Base";
        identityTypes[] = {
            "LanguageENGB_F",
            "LanguageENG_F",
            "Head_Euro",
            "Head_NATO"
        };
        genericNames = "NATOMen";
        @Templated();
    };
};
