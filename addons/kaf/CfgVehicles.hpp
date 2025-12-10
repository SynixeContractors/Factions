class CfgVehicles {
    class GCLASS(Base_BLUFOR);

    class CLASS(Base): GCLASS(Base_BLUFOR) {
        faction = QCLASS(t3_BLUFOR);
        displayName = "KAF Base";
        identityTypes[] = {
            "LanguageRUS_F",
            "Head_Russian",
            "Head_Euro",
            "Head_Asian",
        };
        genericNames = "RussianMen";
        @Templated();
    };
};
