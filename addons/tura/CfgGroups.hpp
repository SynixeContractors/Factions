class CfgGroups {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class $GROUP {
        class CLASS(DOUBLES(t4,$LOWER)) {
            name = "[T4] Tura Insurgency";
            @Groups(T4,$UPPER,Militia_$UPPER);
        };
    };
    @EndForSides
};
