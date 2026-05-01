class CfgVehicles {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        @Identity(Altian);
        @Templated();
    };
    @EndForSides
};
