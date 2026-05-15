class CfgVehicles {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        @Identity(Tura);
        @Templated();
    };
    class CLASS2($UPPER,Base2): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        // international intervention
        @Identity(AllFrench);
        @Templated();
    };
    @EndForSides
};
