class CfgVehicles {
    @ForSides(OPFOR,INDEP)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        displayName = "SRB Base";
        identityTypes[] = {
            "LanguageFRE_F",
            "Head_Tanoan",
            "Head_African",
        };
        genericNames = "lxWS_WSaharaMen";
        @Templated();
    };
    @EndForSides
};
