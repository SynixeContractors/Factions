class CfgVehicles {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t3_$LOWER);
        identityTypes[] = {
            "LanguageENGB_F",
            "LanguageENG_F",
            "Head_Euro",
            "Head_NATO"
        };
        genericNames = "NATOMen";
        @Templated();
    };
    @EndForSides
};
