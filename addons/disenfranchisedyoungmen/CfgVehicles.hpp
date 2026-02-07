class CfgVehicles {
    @ForSides(OPFOR,INDEP,BLUFOR)
    class GCLASS(Base_$UPPER);
    class CLASS2($UPPER,Base): GCLASS(Base_$UPPER) {
        faction = QCLASS(t4_$LOWER);
        displayName = "DYM Base";
        @Identity(Livonia);
        @Templated();
    };
    @EndForSides
};
