class CfgVehicles {
    @ForSides(OPFOR,INDEP)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        displayName = "Coming Dawn Base";
        identityTypes[] = {
            "LanguagePOL_F",
            "Head_Euro",
            "Head_Enoch",
            "Head_NATO"
        };
        genericNames = "EnochMen";
        @Templated();
    };
    @EndForSides
};
