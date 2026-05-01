class CfgGroups {
    @ForSides(BLUFOR,OPFOR,INDEP)
    class $GROUP {
        class CLASS(DOUBLES(t4,$LOWER)) {
            name = "[T4] Freedom Independence Army";
            @Groups(T4,$UPPER,Army_Combat_$UPPER);
            @Groups(T4,$UPPER,Militia_$UPPER);
        };
    };
    @EndForSides
};
