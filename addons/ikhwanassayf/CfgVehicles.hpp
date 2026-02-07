class CfgVehicles {
    @ForSides(OPFOR,INDEP)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        displayName = "IAS Base";
        identityTypes[] = {
            "LanguagePER_F",
            "Head_TK",
            "G_IRAN_default",
            "Head_African",
            "lxWS_Head_African"
        };
        genericNames = "lxWS_WSaharaMen";
        @Templated();
    };
    @EndForSides
};
